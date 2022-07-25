# If exists, load a local Makefile for setting options without needing to use env vars
ifneq (,$(wildcard ../Makefile.local))
include ../Makefile.local
endif

ifneq ($(PROFILE),)
ifneq (,$(wildcard ../profile/Makefile.$(PROFILE)))
include ../profile/Makefile.$(PROFILE)
else
$(error Profile 'Makefile.$(PROFILE)' does not exist)
endif
endif