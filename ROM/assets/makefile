################################################################
#                  Code files and Object name                  #
################################################################

CODEFILES = gfx_the_n.c \
            gfx_catherine.c \
            gfx_n64.c \
            gfx_usb.c \
            gfx_cease.c \
            gfx_skinned.c \
            gfx_hack.c


############################################################################
# DO NOT CHANGE ANYTHING BELOW THIS LINE UNLESS YOU KNOW WHAT YOU'RE DOING #
############################################################################

include $(ROOT)/usr/include/make/PRdefs

TARGETS = $(CODEFILES:.c=.o)


################################################################
#                         NuSys Config                         #
################################################################

N64KITDIR    = c:\nintendo\n64kit
NUSYSINCDIR  = $(N64KITDIR)\nusys\include
NUSYSLIBDIR  = $(N64KITDIR)\nusys\lib
NUSTDINC     = $(N64KITDIR)\nustd\include
NUSTDLIB     = $(N64KITDIR)\nustd\lib


################################################################
#                     ROM debug mode check                     #
################################################################

ifeq ($(DEBUG_MODE), 0)
    OPTIMIZER       = -O2
else
    OPTIMIZER       = -g
endif


################################################################
#                        Linker Settings                       #
################################################################

default: $(TARGETS)

N64GCC_PATH =	$(ROOT)\gcc\mipse
N64GCC_BIN =	$(N64GCC_PATH)\bin
N64GCC_INC =	$(ROOT)\usr\include

CC =		$(N64GCC_BIN)\gcc
AS =		$(N64GCC_BIN)\as
LD =		$(N64GCC_BIN)\ld
MAKEROM =	mild

AUDIO_CDEFS = -DNUALSTL -DN_AUDIO
NUAUDIOLIB = -lnualstl_n -ln_numus -ln_gaudio_sc
GBI = -DF3DEX_GBI_2

LCINCS =	-I. -I$(ROOT)/usr/include/PR -I $(ROOT)/usr/include -I$(NUSYSINCDIR) -I$(NUSTDINC)

################################################################
#                          Compilation                         #
################################################################

include $(COMMONRULES)

$(TARGETS):
    $(CC) -g -G 0 -c $(LCINCS) $(CC_DEF) $(CODEFILES)

