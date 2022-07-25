ifneq ($(PROFILE),)
ifneq (,$(wildcard ../profile/Makefile.$(PROFILE)))
include ../profile/Makefile.$(PROFILE)
else
$(error Profile 'Makefile.$(PROFILE)' does not exist)
endif
endif