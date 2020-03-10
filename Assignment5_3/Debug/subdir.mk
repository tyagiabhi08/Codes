################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Employee.cpp \
../Main.cpp \
../Manager.cpp \
../SalesManager.cpp \
../Salesman.cpp 

OBJS += \
./Employee.o \
./Main.o \
./Manager.o \
./SalesManager.o \
./Salesman.o 

CPP_DEPS += \
./Employee.d \
./Main.d \
./Manager.d \
./SalesManager.d \
./Salesman.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


