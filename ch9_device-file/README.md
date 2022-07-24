# Talking To Device Files

## Steps
### Compile Kernel Modules
```
# pwd
Kernel-Module-Programming-Guide/ch9_device-file
# make
```

### Compile Userspace ioctl
```
# gcc userspace_ioctl.c -o userspace_ioctl
```

### Insert Kernel Modules
```
# insmod chardev2.ko
# insmod ioctl.ko
# file /dev/char_dev
/dev/char_dev: character special (100/0)
# ls -alh /dev/char_dev
crw------- 1 root root 100, 0 Jun 25 12:05 /dev/char_dev
# cat /dev/char_dev

```

### Send Message by ioctl
```
# ./userspace_ioctl
get_nth_byte message:Message passed by ioctl
get_msg message:Message passed by ioctl
# cat /dev/char_dev
```
