################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Arr.cpp \
../src/Card.cpp \
../src/Dealer.cpp \
../src/HexGraph.cpp \
../src/MyContainer.cpp \
../src/Pips.cpp \
../src/Player.cpp \
../src/Porshe.cpp \
../src/duo.cpp \
../src/point.cpp \
../src/point3d.cpp \
../src/test.cpp \
../src/test2.cpp 

OBJS += \
./src/Arr.o \
./src/Card.o \
./src/Dealer.o \
./src/HexGraph.o \
./src/MyContainer.o \
./src/Pips.o \
./src/Player.o \
./src/Porshe.o \
./src/duo.o \
./src/point.o \
./src/point3d.o \
./src/test.o \
./src/test2.o 

CPP_DEPS += \
./src/Arr.d \
./src/Card.d \
./src/Dealer.d \
./src/HexGraph.d \
./src/MyContainer.d \
./src/Pips.d \
./src/Player.d \
./src/Porshe.d \
./src/duo.d \
./src/point.d \
./src/point3d.d \
./src/test.d \
./src/test2.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I"C:\Users\askoczyl\workspaceCpp\gtest\googletest-master\googletest\include" -I"C:\Users\askoczyl\workspaceCpp\gtest\googletest-master\googlemock\include" -O0 -g3 -Wall -c -fmessage-length=0 -std=gnu++11 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


