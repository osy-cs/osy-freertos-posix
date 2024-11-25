## FreeRTOS Pocket Guide

[FreeRTOS](https://www.freertos.org) is real-time operating system for microcontrolers. 
It is a market-leading real-time OS. 

The aim of this short document is to select basic information and functions of FreeRTOS to be able test basic functionality of that system. 

## Content

- [FreeRTOS Documentation](#freertos-documentation)
- [FreeRTOS Tasks Description](#freertos-tasks-description)
- [Basic function selection](#basic-function-selection)
- [Simulators](#simulators)



### FreeRTOS Documentation 

- [Official books](https://freertos.org/Documentation/02-Kernel/07-Books-and-manual/01-RTOS_book).

- [API reference](https://www.freertos.org/Documentation/02-Kernel/04-API-references/01-Task-creation/00-TaskHandle).

### FreeRTOS Tasks Description

- [Tasks Introduction](https://www.freertos.org/Documentation/02-Kernel/02-Kernel-features/01-Tasks-and-co-routines/00-Tasks-and-co-routines).

- [Tasks States](https://www.freertos.org/Documentation/02-Kernel/02-Kernel-features/01-Tasks-and-co-routines/02-Task-states).

- [Task Priorities](https://www.freertos.org/Documentation/02-Kernel/02-Kernel-features/01-Tasks-and-co-routines/03-Task-priorities).

- [Task Scheduling](https://www.freertos.org/Documentation/02-Kernel/02-Kernel-features/01-Tasks-and-co-routines/04-Task-scheduling)

- [Implementing a Task](https://www.freertos.org/Documentation/02-Kernel/02-Kernel-features/01-Tasks-and-co-routines/05-Implementing-a-task).

### Basic Function Selection

- #### [Task Creation](https://www.freertos.org/Documentation/02-Kernel/04-API-references/01-Task-creation/00-TaskHandle)

     + [`xTaskCreate()`](https://www.freertos.org/Documentation/02-Kernel/04-API-references/01-Task-creation/01-xTaskCreate)
     + [`vTaskDelete()`](https://www.freertos.org/Documentation/02-Kernel/04-API-references/01-Task-creation/03-vTaskDelete)

- #### [Task Control](https://freertos.org/a00112.html)

     + [`vTaskDelay()`](https://www.freertos.org/Documentation/02-Kernel/04-API-references/02-Task-control/01-vTaskDelay)
     + [`vTaskDelayUntil()`](https://www.freertos.org/Documentation/02-Kernel/04-API-references/02-Task-control/02-vTaskDelayUntil)
     + [`vTaskSuspend()`](https://www.freertos.org/Documentation/02-Kernel/04-API-references/02-Task-control/06-vTaskSuspend)
     + [`vTaskResume()`](https://www.freertos.org/Documentation/02-Kernel/04-API-references/02-Task-control/07-vTaskResume)
     + [`xTaskResumeFromISR()`](https://www.freertos.org/Documentation/02-Kernel/04-API-references/02-Task-control/08-xTaskResumeFromISR)

- #### [Task Utilities](https://freertos.org/a00021.html)

     + [`xTaskGetHandle()`](https://www.freertos.org/Documentation/02-Kernel/04-API-references/03-Task-utilities/00-Task-utilities#xtaskgethandle)
     + [`pcTaskGetName()`](https://www.freertos.org/Documentation/02-Kernel/04-API-references/03-Task-utilities/00-Task-utilities#pctaskgetname)
     + [`vTaskList()`](https://www.freertos.org/Documentation/02-Kernel/04-API-references/03-Task-utilities/00-Task-utilities#vtasklist)

- #### [RTOS Kernel Control](https://freertos.org/a00020.html)

     + [`vTaskStartScheduler()`](https://www.freertos.org/Documentation/02-Kernel/04-API-references/04-RTOS-kernel-control/03-vTaskStartScheduler)
     + [`vTaskEndScheduler()`](https://www.freertos.org/Documentation/02-Kernel/04-API-references/04-RTOS-kernel-control/04-vTaskEndScheduler)
     + [`taskYIELD()`](https://www.freertos.org/Documentation/02-Kernel/04-API-references/04-RTOS-kernel-control/00-Kernel-control#taskyield)

- #### [Semaphores](https://freertos.org/a00113.html)

     + [`xSemaphoreCreateBinary()`](https://www.freertos.org/Documentation/02-Kernel/04-API-references/10-Semaphore-and-Mutexes/01-xSemaphoreCreateBinary)
     + [`vSemaphoreDelete()`](https://www.freertos.org/Documentation/02-Kernel/04-API-references/10-Semaphore-and-Mutexes/18-vSemaphoreDelete)
     + [`xSemaphoreGive()`](https://www.freertos.org/Documentation/02-Kernel/04-API-references/10-Semaphore-and-Mutexes/15-xSemaphoreGive)
     + [`xSemaphoreTake()`](https://www.freertos.org/Documentation/02-Kernel/04-API-references/10-Semaphore-and-Mutexes/12-xSemaphoreTake)
     + [`xSemaphoreGiveFromISR()`](https://www.freertos.org/Documentation/02-Kernel/04-API-references/10-Semaphore-and-Mutexes/17-xSemaphoreGiveFromISR)
     + [`xSemaphoreTakeFromISR()`](https://www.freertos.org/Documentation/02-Kernel/04-API-references/10-Semaphore-and-Mutexes/17-xSemaphoreTakeFromISR)

### Simulators

- [Linux/Posix Simulator](https://freertos.org/Documentation/02-Kernel/03-Supported-devices/04-Demos/03-Emulation-and-simulation/Linux/FreeRTOS-simulator-for-Linux)
- [Windows Simulator](https://freertos.org/Documentation/02-Kernel/03-Supported-devices/04-Demos/03-Emulation-and-simulation/Windows/FreeRTOS-Windows-Simulator-Emulator-for-Visual-Studio-and-Eclipse-MingW)





