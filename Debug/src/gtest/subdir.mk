################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CC_SRCS += \
../src/gtest/gtest-all.cc 

CC_DEPS += \
./src/gtest/gtest-all.d 

OBJS += \
./src/gtest/gtest-all.o 


# Each subdirectory must supply rules for building sources it contributes
src/gtest/%.o: ../src/gtest/%.cc
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -std=c++0x -I"C:\Users\askoczyl\workspaceCpp\gtest\googletest-master\googletest\include" -I"C:\Users\askoczyl\workspaceCpp\gtest\googletest-master\googlemock\include" -O0 -g3 -Wall -c -fmessage-length=0 -std=gnu++11 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


