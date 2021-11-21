// **************************************************************************
//
// Program example for subject Operating Systems
//
// Petr Olivka, Dept. of Computer Science, petr.olivka@vsb.cz, 2021
//
// Example of FreeRTOS tasks in Posix/Linux FreeRTOS Simulator, see below. 
//
// Three tasks will be created:
//  - Task "Hello": it will periodically print some text. 
//  - Task "Sleep": it will print message and suspend itself. 
//  - Task "Ring": it will wake up task sleep using resume. 
//
// **************************************************************************

// 
// **************************************************************************
// NOTE: Linux will not be running the FreeRTOS demo threads continuously, so
// do not expect to get real time behaviour from the FreeRTOS Linux port, or
// this demo application.  Also, the timing information in the FreeRTOS+Trace
// logs have no meaningful units.  See the documentation page for the Linux
// port for further information:
// https://freertos.org/FreeRTOS-simulator-for-Linux.html
// **************************************************************************
// 

/* Standard includes. */
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <errno.h>

/* FreeRTOS kernel includes. */
#include "FreeRTOS.h"
#include "task.h"

/* Local includes. */
#include "console.h"


// Simulation of the CPU hardware sleeping mode
void vApplicationIdleHook( void )
{
    usleep( 15000 );
}


// Task "Hello"
static void prvTaskHello( void * _ )
{
    while ( 1 )
    {
        console_print( "Hello world!\n" );
        vTaskDelay( 1000 );
    }
}


// Task "Ring"
static void prvTaskRing( void *t_arg )
{
    TaskHandle_t l_task_id = * ( TaskHandle_t * ) t_arg;
    while ( 1 )
    {
        vTaskDelay( 5000 );
        console_print( "Ring! Ring! Ring!\n" );
        vTaskResume( l_task_id );
    }
}


// Task "Sleep"
static void prvTaskSleep( void * _ )
{
    while ( 1 )
    {
        vTaskSuspend( NULL );
        console_print( "Please do not wake up!\n" );
    }
}


int main()
{
    // Init output console
    console_init();

    TaskHandle_t l_handle;

    // Three tasks
    xTaskCreate( prvTaskHello, 
                "Hello",
                configMINIMAL_STACK_SIZE,
                NULL,
                configMAX_PRIORITIES - 2,
                NULL );

    xTaskCreate( prvTaskSleep, "Sleep", configMINIMAL_STACK_SIZE, NULL, configMAX_PRIORITIES - 2, &l_handle );
    xTaskCreate( prvTaskRing, "Ring", configMINIMAL_STACK_SIZE, &l_handle, configMAX_PRIORITIES - 2, NULL );

    // Start scheduler
    vTaskStartScheduler();

    return 0;
}

