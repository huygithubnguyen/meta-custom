# Makefile for simple external out-of-tree Linux kernel module example

# Object file(s) to be built
obj-m := kernel_module_example.o

# Path to the directory that contains the Linux kernel source code
# and the configuration file (.config)
KERNEL_DIR ?= /home/admins/STMicroelectronics/Distribution-Package/build-openstlinuxweston-stm32mp15-disco/tmp-glibc/deploy/images/stm32mp15-disco/kernel

# Path to the directory that contains the source file(s) to compile
PWD := $(shell pwd) 
  
default:
	$(MAKE) -C $(KERNEL_DIR) M=$(PWD) modules

clean:
	$(MAKE) -C $(KERNEL_DIR) M=$(PWD) clean
