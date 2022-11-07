/**
 * @file indicators.c
 * @author Subgrupo Control y Periféricos - Elektron Motorsports
 * @brief Generación de indicadores de tarjeta Periféricos
 * @version 0.1
 * @date 2022-04-25
 *
 * @copyright Copyright (c) 2022
 *
 */

/***********************************************************************************************************************
 * Included files
 **********************************************************************************************************************/

#include "indicators.h"

/***********************************************************************************************************************
 * Macros
 **********************************************************************************************************************/

/** @brief Duración de blink de los LEDs en ms */
#define BLINK_TIME_MS				250U

/** @brief Duración para apagado de los LEDs en ms */
#define LEDS_TURNOFF_TIME_MS		3000U

/** @brief Duración para apagado del buzzer en ms */
#define BUZZER_TURNOFF_TIME_MS		2000U

/***********************************************************************************************************************
 * Private variables definitions
 **********************************************************************************************************************/

/***********************************************************************************************************************
 * Private functions prototypes
 **********************************************************************************************************************/

/***********************************************************************************************************************
 * Public functions implementation
 **********************************************************************************************************************/

/**
 * @brief Función principal bloque generación de indicadores.
 *
 * No es static, por lo que puede ser usada por otros archivos.
 *
 * @param None
 * @retval None
 */
void INDICATORS_Process(void)
{
	//BSP_LED_Off(LED1);
	//BSP_LED_Off(LED2);
	//BSP_LED_Off(LED3);

	asm("nop");
}

/**
 * @brief Indicación de que la tarjeta ha finalizado la inicialización.
 *
 * No es static, por lo que puede ser usada por otros archivos.
 *
 * @param None
 * @retval None
 */
void INDICATORS_Finish_StartUp(void)
{
    uint32_t tickstart;

    uint32_t blink_tickstart;

    BSP_BUZZER_On();

    /* Get ticks for the turn off time of LEDs and buzzer */
    tickstart = HAL_GetTick();

    /* Ticks for the blinking of the LEDs */
    blink_tickstart = tickstart;

    BSP_LED_Off(LED1);
    BSP_LED_Off(LED2);
    BSP_LED_Off(LED3);

    while(1)
    {
        if((HAL_GetTick() - blink_tickstart) > BLINK_TIME_MS)
        {
            BSP_LED_Toggle(LED1);
            BSP_LED_Toggle(LED2);
            BSP_LED_Toggle(LED3);

            blink_tickstart = HAL_GetTick();
        }

        if((HAL_GetTick() - tickstart) > BUZZER_TURNOFF_TIME_MS)
        {
            BSP_BUZZER_Off();
        }

        if((HAL_GetTick() - tickstart) > LEDS_TURNOFF_TIME_MS)
        {
            BSP_LED_Off(LED1);
            BSP_LED_Off(LED2);
            BSP_LED_Off(LED3);

            break;
        }
    }
}

/***********************************************************************************************************************
 * Private functions implementation
 **********************************************************************************************************************/
