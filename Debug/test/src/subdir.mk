################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../test/src/gtest_main.cpp 

OBJS += \
./test/src/gtest_main.o 

CPP_DEPS += \
./test/src/gtest_main.d 


# Each subdirectory must supply rules for building sources it contributes
test/src/%.o: ../test/src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I"C:\Users\askoczyl\workspaceCpp\gtest\googletest-master\googletest\include" -I"C:\Users\askoczyl\workspaceCpp\gtest\googletest-master\googlemock\include" -O0 -g3 -Wall -c -fmessage-length=0 -std=gnu++11 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


