################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../source/src/animatedSprite.cpp \
../source/src/game.cpp \
../source/src/graphics.cpp \
../source/src/input.cpp \
../source/src/level.cpp \
../source/src/main.cpp \
../source/src/player.cpp \
../source/src/sprite.cpp 

OBJS += \
./source/src/animatedSprite.o \
./source/src/game.o \
./source/src/graphics.o \
./source/src/input.o \
./source/src/level.o \
./source/src/main.o \
./source/src/player.o \
./source/src/sprite.o 

CPP_DEPS += \
./source/src/animatedSprite.d \
./source/src/game.d \
./source/src/graphics.d \
./source/src/input.d \
./source/src/level.d \
./source/src/main.d \
./source/src/player.d \
./source/src/sprite.d 


# Each subdirectory must supply rules for building sources it contributes
source/src/%.o: ../source/src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -I"/home/luupesado/eclipse-workspace/CavestoryProject/source/headers" -I"/home/luupesado/eclipse-workspace/CavestoryProject/source/content" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

source/src/main.o: ../source/src/main.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -I"/home/luupesado/eclipse-workspace/CavestoryProject/source/headers" -I"/home/luupesado/eclipse-workspace/CavestoryProject/source/content" -O0 -g3 -Wall -c -fmessage-length=0 -std=c++0x -lsdl2 -MMD -MP -MF"$(@:%.o=%.d)" -MT"source/src/main.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


