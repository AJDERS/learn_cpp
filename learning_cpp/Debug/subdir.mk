################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../euler1.cpp \
../euler10.cpp \
../euler11.cpp \
../euler12.cpp \
../euler13.cpp \
../euler2.cpp \
../euler3.cpp \
../euler4.cpp \
../euler5.cpp \
../euler6.cpp \
../euler7.cpp \
../euler8.cpp \
../euler9.cpp \
../main.cpp 

OBJS += \
./euler1.o \
./euler10.o \
./euler11.o \
./euler12.o \
./euler13.o \
./euler2.o \
./euler3.o \
./euler4.o \
./euler5.o \
./euler6.o \
./euler7.o \
./euler8.o \
./euler9.o \
./main.o 

CPP_DEPS += \
./euler1.d \
./euler10.d \
./euler11.d \
./euler12.d \
./euler13.d \
./euler2.d \
./euler3.d \
./euler4.d \
./euler5.d \
./euler6.d \
./euler7.d \
./euler8.d \
./euler9.d \
./main.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -std=c++17 -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


