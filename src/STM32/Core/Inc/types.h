/**
 * @file types.h
 * @author Subgrupo Control y Periféricos - Elektron Motorsports
 * @brief Declaraciones tipos de datos generales
 * @version 0.1
 * @date 2022-04-11
 *
 * @copyright Copyright (c) 2022
 *
 */

#ifndef _TYPES_H_
#define _TYPES_H_

/***********************************************************************************************************************
 * Included files
 **********************************************************************************************************************/

#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

/***********************************************************************************************************************
 * Types declarations
 **********************************************************************************************************************/

/**
 * @brief Tipo de dato para variable info de cada módulo
 *
 */
typedef enum
{
    kMODULE_INFO_OK,   /**< Modulo OK */
	kMODULE_INFO_ERROR /**< Modulo ERROR */
} module_info_t;

/********************************************************************************
 *                              PERIFERICOS                                     *
 *******************************************************************************/

/**
 * @brief Tipo de dato para botones de modo de manejo
 *
 */
typedef enum
{
	kBTN_NONE = 0,
	kBTN_ECO,
	kBTN_NORMAL,
	kBTN_SPORT
} btn_modo_manejo_t;

/**
 * @brief Tipo de dato para estado de botón
 *
 */
typedef enum
{
	kBTN_NOT_PRESSED = 0,
	kBTN_PRESSED
} btn_state_t;

/**
 * @brief Tipo de dato para estado de hombre muerto
 *
 */
typedef enum
{
	kHOMBRE_MUERTO_OFF = 0,
	kHOMBRE_MUERTO_ON
} hm_state_t;

/********************************************************************************
 *                                CONTROL                                       *
 *******************************************************************************/

/**
 * @brief Tipo de dato para modos de manejo
 *
 */
typedef enum
{
    kDRIVING_MODE_ECO,    /**< Modo de manejo ECO */
	kDRIVING_MODE_NORMAL, /**< Modo de manejo NORMAL */
	kDRIVING_MODE_SPORT   /**< Modo de manejo SPORT */
} driving_mode_t;

/**
 * @brief Tipo de dato para fallas
 *
 */
typedef enum
{
	kFAILURE_OK,       /**< Falla OK */
	kFAILURE_CAUTION1, /**< Falla CAUTION1 */
	kFAILURE_CAUTION2, /**< Falla CAUTION1 */
	kFAILURE_AUTOKILL  /**< Falla AUTOKILL */
} failure_t;

/**
 * @brief Tipo de dato estructura para variables decodificadas de Control
 *
 */
typedef struct
{
    driving_mode_t  driving_mode;
    failure_t    	failure;

    module_info_t	control_ok;

} rx_control_vars_t;

/********************************************************************************
 *                                   BMS                                        *
 *******************************************************************************/

/**
 * @brief Tipo de dato estructura para variables decodificadas de BMS
 *
 */
typedef struct
{
    float	voltaje;
    float	corriente;
    float	voltaje_min_celda;
    float	potencia;
    float	t_max;
    float	nivel_bateria;

} rx_bms_vars_t;

/********************************************************************************
 *                                  INVERSOR                                    *
 *******************************************************************************/

/**
 * @brief Tipo de dato estructura para variables decodificadas de Inversor
 *
 */
typedef struct
{
    float	velocidad;

} rx_inversor_vars_t;

#endif /* _TYPES_H_ */
