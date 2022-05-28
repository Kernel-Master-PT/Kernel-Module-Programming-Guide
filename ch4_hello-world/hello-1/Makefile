obj-m += hello-1.o

# set to the absolute pathname of the current working directory
# (after all -C options are processed, if any)
PWD := $(CURDIR)

all:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules

clean:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) clean