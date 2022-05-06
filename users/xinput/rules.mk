SRC += xinput.c
ifeq ($(strip $(IDLE_TIMEOUT_ENABLE)), yes)
    OPT_DEFS += -DIDLE_TIMEOUT_ENABLE
endif
