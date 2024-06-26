####### MCU #######

MCU                 ?= STC8A8K64S4
MCU_IRAM            ?= 256
MCU_XRAM            ?= 1024
MCU_CODE_SIZE       ?= 8192

## Flashing tool ##
WCHISP ?= stcgal
ARCH=stc8
PORT=/dev/ttyUSB1

##### Project #####

PROJECT             ?= app
# The path for generated files
BUILD_DIR           = build

TOOCHAIN_PREFIX     ?= 

# C source folders
USER_CDIRS          := user
# C source single files
USER_CFILES         := 
USER_INCLUDES       := user

LIB_FLAGS           := __CONF_FOSC=24000000UL \
					__CONF_MCU_MODEL=MCU_MODEL_STC8A8K64S4 \
					__CONF_CLKDIV=0x00 \
					__CONF_IRCBAND=0x01 \
					__CONF_VRTRIM=0x1F \
					__CONF_IRTRIM=0xB5 \
					__CONF_LIRTRIM=0x00 

include ./rules.mk