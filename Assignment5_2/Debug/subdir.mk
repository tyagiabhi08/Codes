################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Date.cpp \
../Employee.cpp \
../Main.cpp \
../Person.cpp 

OBJS += \
./Date.o \
./Employee.o \
./Main.o \
./Person.o 

CPP_DEPS += \
./Date.d \
./Employee.d \
./Main.d \
./Person.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


