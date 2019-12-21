obj-m	:= hello_world.o

KDIR	:= /lib/modules/$(shell uname -r)/build
PDW	:= $(shell pwd)

default:
	$(MAKE) -C $(KDIR) SUBDIRS=$(PWD) modules
