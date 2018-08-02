################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../test/SimpleTest.cpp \
../test/SquareRootTest.cpp \
../test/main.cpp 

OBJS += \
./test/SimpleTest.o \
./test/SquareRootTest.o \
./test/main.o 

CPP_DEPS += \
./test/SimpleTest.d \
./test/SquareRootTest.d \
./test/main.d 


# Each subdirectory must supply rules for building sources it contributes
test/%.o: ../test/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I"/Users/rargarw/CLionProjects/GooglTestDemo/lib" -I"/Users/rargarw/CLionProjects/GooglTestDemo/src" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


