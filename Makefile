CONTIKI_PROJECT = temp_sensor
all: $(CONTIKI_PROJECT)

CONTIKI = ../..
include $(CONTIKI)/Makefile.include

APP=temp_sensor
PLATFORM=native
