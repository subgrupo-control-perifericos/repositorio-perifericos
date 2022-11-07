/**
 * @file pantalla_hw.h
 * @author Subgrupo Control y Periféricos - Elektron Motorsports
 * @brief Archivo header para pantalla_hw.c
 * @version 0.1
 * @date 2022-04-12
 *
 * @copyright Copyright (c) 2022
 *
 */

#ifndef _PANTALLA_HW_H_
#define _PANTALLA_HW_H_

/***********************************************************************************************************************
 * Included files
 **********************************************************************************************************************/

/* STM32 specific hardware configuration includes */
#include "usart.h"

/* STM32 HAL include */
#include "main.h"

/***********************************************************************************************************************
 * Types declarations
 **********************************************************************************************************************/

/***********************************************************************************************************************
 * Public function prototypes
 **********************************************************************************************************************/

void PANTALLA_HW_Init(void);

/***********************************************************************************************************************
 * Global variables declarations
 **********************************************************************************************************************/

#endif /* _PANTALLA_HW_H_ */
