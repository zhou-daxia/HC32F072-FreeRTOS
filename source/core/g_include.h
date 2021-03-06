/**
  ******************************************************************************
  * @file    g_include.h
  * @author  周大侠
  * @version V1.0
  * @date    2021-5-17 09:49:59
  ******************************************************************************
  * @attention
    Default encoding UTF-8
  * @explain
  	公共头文件
  ******************************************************************************
  */

#ifndef _G_INCLUDE_H_
#define _G_INCLUDE_H_



/*********Include dev files*********/
#include "hc32f072.h"
#include "dev_gpio.h"
#include "dev_clk.h"

/*********Include FreeRTOS *********/
#include "FreeRTOS.h"
#include "task.h"

/*********Include app files*********/

#include "app_Led.h"
#include "app_Task.h"





/******************************************************************************
 * Local pre-processor symbols/macros ('#define')
 ******************************************************************************/

#define int32_t                             signed int      
#define uint32_t                            unsigned int    
#define int16_t                             signed short    
#define uint16_t                            unsigned short  
#define int8_t                              signed char     
#define uint8_t                             unsigned char   






/******************************************************************************
 * Local type definitions ('typedef')
 ******************************************************************************/






/******************************************************************************
 * Global variable definitions (declared in header file with 'extern')
 ******************************************************************************/













#endif
