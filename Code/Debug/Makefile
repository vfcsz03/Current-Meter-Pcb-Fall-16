################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL := cmd.exe
RM := rm -rf

USER_OBJS :=

LIBS := 
PROJ := 

O_SRCS := 
C_SRCS := 
S_SRCS := 
S_UPPER_SRCS := 
OBJ_SRCS := 
ASM_SRCS := 
PREPROCESSING_SRCS := 
OBJS := 
OBJS_AS_ARGS := 
C_DEPS := 
C_DEPS_AS_ARGS := 
EXECUTABLES := 
OUTPUT_FILE_PATH :=
OUTPUT_FILE_PATH_AS_ARGS :=
AVR_APP_PATH :=$$$AVR_APP_PATH$$$
QUOTE := "
ADDITIONAL_DEPENDENCIES:=
OUTPUT_FILE_DEP:=
LIB_DEP:=
LINKER_SCRIPT_DEP:=

# Every subdirectory with source files must be described here
SUBDIRS := 


# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS +=  \
../adc.c \
../gfx.c \
../ili9341.c \
../main.c \
../snake.c


PREPROCESSING_SRCS += 


ASM_SRCS += 


OBJS +=  \
adc.o \
gfx.o \
ili9341.o \
main.o \
snake.o

OBJS_AS_ARGS +=  \
adc.o \
gfx.o \
ili9341.o \
main.o \
snake.o

C_DEPS +=  \
adc.d \
gfx.d \
ili9341.d \
main.d \
snake.d

C_DEPS_AS_ARGS +=  \
adc.d \
gfx.d \
ili9341.d \
main.d \
snake.d

OUTPUT_FILE_PATH +=LCD_ILI9341_ESE_323.elf

OUTPUT_FILE_PATH_AS_ARGS +=LCD_ILI9341_ESE_323.elf

ADDITIONAL_DEPENDENCIES:=

OUTPUT_FILE_DEP:= ./makedep.mk

LIB_DEP+= 

LINKER_SCRIPT_DEP+= 


# AVR32/GNU C Compiler











./%.o: .././%.c
	@echo Building file: $<
	@echo Invoking: AVR/GNU C Compiler : 4.9.2
	$(QUOTE)C:\Program Files (x86)\Atmel\Studio\7.0\toolchain\avr8\avr8-gnu-toolchain\bin\avr-gcc.exe$(QUOTE)  -x c -funsigned-char -funsigned-bitfields -DDEBUG  -I"C:\Program Files (x86)\Atmel\Studio\7.0\Packs\atmel\XMEGAE_DFP\1.2.46\include"  -O2 -ffunction-sections -fdata-sections -fpack-struct -fshort-enums -g2 -Wall -mmcu=atxmega32e5 -B "C:\Program Files (x86)\Atmel\Studio\7.0\Packs\atmel\XMEGAE_DFP\1.2.46\gcc\dev\atxmega32e5" -c -std=gnu99 -MD -MP -MF "$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)"   -o "$@" "$<" 
	@echo Finished building: $<
	



# AVR32/GNU Preprocessing Assembler



# AVR32/GNU Assembler




ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all: $(OUTPUT_FILE_PATH) $(ADDITIONAL_DEPENDENCIES)

$(OUTPUT_FILE_PATH): $(OBJS) $(USER_OBJS) $(OUTPUT_FILE_DEP) $(LIB_DEP) $(LINKER_SCRIPT_DEP)
	@echo Building target: $@
	@echo Invoking: AVR/GNU Linker : 4.9.2
	$(QUOTE)C:\Program Files (x86)\Atmel\Studio\7.0\toolchain\avr8\avr8-gnu-toolchain\bin\avr-gcc.exe$(QUOTE) -o$(OUTPUT_FILE_PATH_AS_ARGS) $(OBJS_AS_ARGS) $(USER_OBJS) $(LIBS) -Wl,-Map="LCD_ILI9341_ESE_323.map" -Wl,-u,vfprintf -Wl,--start-group -Wl,-lm  -Wl,--end-group -Wl,--gc-sections -mmcu=atxmega32e5 -B "C:\Program Files (x86)\Atmel\Studio\7.0\Packs\atmel\XMEGAE_DFP\1.2.46\gcc\dev\atxmega32e5" -Wl,-lprintf_flt  
	@echo Finished building target: $@
	"C:\Program Files (x86)\Atmel\Studio\7.0\toolchain\avr8\avr8-gnu-toolchain\bin\avr-objcopy.exe" -O ihex -R .eeprom -R .fuse -R .lock -R .signature -R .user_signatures  "LCD_ILI9341_ESE_323.elf" "LCD_ILI9341_ESE_323.hex"
	"C:\Program Files (x86)\Atmel\Studio\7.0\toolchain\avr8\avr8-gnu-toolchain\bin\avr-objcopy.exe" -j .eeprom  --set-section-flags=.eeprom=alloc,load --change-section-lma .eeprom=0  --no-change-warnings -O ihex "LCD_ILI9341_ESE_323.elf" "LCD_ILI9341_ESE_323.eep" || exit 0
	"C:\Program Files (x86)\Atmel\Studio\7.0\toolchain\avr8\avr8-gnu-toolchain\bin\avr-objdump.exe" -h -S "LCD_ILI9341_ESE_323.elf" > "LCD_ILI9341_ESE_323.lss"
	"C:\Program Files (x86)\Atmel\Studio\7.0\toolchain\avr8\avr8-gnu-toolchain\bin\avr-objcopy.exe" -O srec -R .eeprom -R .fuse -R .lock -R .signature -R .user_signatures "LCD_ILI9341_ESE_323.elf" "LCD_ILI9341_ESE_323.srec"
	"C:\Program Files (x86)\Atmel\Studio\7.0\toolchain\avr8\avr8-gnu-toolchain\bin\avr-size.exe" "LCD_ILI9341_ESE_323.elf"
	
	





# Other Targets
clean:
	-$(RM) $(OBJS_AS_ARGS) $(EXECUTABLES)  
	-$(RM) $(C_DEPS_AS_ARGS)   
	rm -rf "LCD_ILI9341_ESE_323.elf" "LCD_ILI9341_ESE_323.a" "LCD_ILI9341_ESE_323.hex" "LCD_ILI9341_ESE_323.lss" "LCD_ILI9341_ESE_323.eep" "LCD_ILI9341_ESE_323.map" "LCD_ILI9341_ESE_323.srec" "LCD_ILI9341_ESE_323.usersignatures"
	