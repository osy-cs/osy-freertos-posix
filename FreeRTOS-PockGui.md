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

- [Official books](https://freertos.org/Documentation/RTOS_book.html).

- [API reference](https://freertos.org/a00106.html).

### FreeRTOS Tasks Description

- [Tasks Introduction](https://freertos.org/taskandcr.html).

- [Tasks States](https://freertos.org/RTOS-task-states.html).

- [Task Priorities](https://freertos.org/RTOS-task-priority.html).

- [Task Scheduling](https://freertos.org/single-core-amp-smp-rtos-scheduling.html)

- [Implementing a Task](https://freertos.org/implementing-a-FreeRTOS-task.html).

### Basic Function Selection

- #### [Task Creation](https://freertos.org/a00019.html)

     + [`xTaskCreate()`](https://freertos.org/a00125.html)
     + [`vTaskDelete()`](https://freertos.org/a00126.html)

- #### [Task Control](https://freertos.org/a00112.html)

     + [`vTaskDelay()`](https://freertos.org/a00127.html)
     + [`vTaskDelayUntil()`](https://freertos.org/vtaskdelayuntil.html)
     + [`vTaskSuspend()`](https://freertos.org/a00130.html)
     + [`vTaskResume()`](https://freertos.org/a00131.html)
     + [`xTaskResumeFromISR()`](https://freertos.org/taskresumefromisr.html)

- #### [Task Utilities](https://freertos.org/a00021.html)

     + [`xTaskGetHandle()`](https://freertos.org/a00021.html#xTaskGetHandle)
     + [`pcTaskGetName()`](https://freertos.org/a00021.html#pcTaskGetName)
     + [`vTaskList()`](https://freertos.org/a00021.html#vTaskList)

- #### [RTOS Kernel Control](https://freertos.org/a00020.html)

     + [`vTaskStartScheduler()`](https://freertos.org/a00132.html)
     + [`vTaskEndScheduler()`](https://freertos.org/a00133.html)
     + [`taskYIELD()`](https://freertos.org/a00020.html#taskYIELD)

- #### [Semaphores](https://freertos.org/a00113.html)

     + [`xSemaphoreCreateBinary()`](https://freertos.org/xSemaphoreCreateBinary.html)
     + [`vSemaphoreDelete()`](https://freertos.org/a00113.html#vSemaphoreDelete)
     + [`xSemaphoreGive()`](https://freertos.org/a00123.html)
     + [`xSemaphoreTake()`](https://freertos.org/a00122.html)
     + [`xSemaphoreGiveFromISR()`](https://freertos.org/a00124.html)
     + [`xSemaphoreTakeFromISR()`](https://freertos.org/xSemaphoreTakeFromISR.html)

### Simulators

- [Linux/Posix Simulator](https://freertos.org/FreeRTOS-simulator-for-Linux.html)
- [Windows Simulator](https://freertos.org/taskresumefromisr.html)





