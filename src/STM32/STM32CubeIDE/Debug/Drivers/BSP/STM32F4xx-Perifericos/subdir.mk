################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
C:/Users/PRESTAMO/Downloads/repositorio-perifericos-main/src/Drivers/BSP/STM32F4xx-Perifericos/stm32f4xx_perifericos.c 

OBJS += \
./Drivers/BSP/STM32F4xx-Perifericos/stm32f4xx_perifericos.o 

C_DEPS += \
./Drivers/BSP/STM32F4xx-Perifericos/stm32f4xx_perifericos.d 


# Each subdirectory must supply rules for building sources it contributes
Drivers/BSP/STM32F4xx-Perifericos/stm32f4xx_perifericos.o: C:/Users/PRESTAMO/Downloads/repositorio-perifericos-main/src/Drivers/BSP/STM32F4xx-Perifericos/stm32f4xx_perifericos.c Drivers/BSP/STM32F4xx-Perifericos/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F446xx -c -I../../Core/Inc -I../../Drivers/STM32F4xx_HAL_Driver/Inc -I../../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../../Drivers/CMSIS/Include -I"../../Drivers/BSP/STM32F4xx-Perifericos" -I"../../Drivers/CAN_Driver" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Drivers-2f-BSP-2f-STM32F4xx-2d-Perifericos

clean-Drivers-2f-BSP-2f-STM32F4xx-2d-Perifericos:
	-$(RM) ./Drivers/BSP/STM32F4xx-Perifericos/stm32f4xx_perifericos.d ./Drivers/BSP/STM32F4xx-Perifericos/stm32f4xx_perifericos.o ./Drivers/BSP/STM32F4xx-Perifericos/stm32f4xx_perifericos.su

.PHONY: clean-Drivers-2f-BSP-2f-STM32F4xx-2d-Perifericos

