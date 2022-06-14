# 1. Make and load module
```
root# make
root# insmod hello-sysfs.ko
```

# 2. Check module loaded sucessfully
```
root# sudo lsmod | grep hello_sysfs
root# dmesg
```

# 3. Show current value of myvariable
```
root# cat /sys/kernel/mymodule/myvariable
```

# 4. Set the value of myvariable
```
root# echo "32" > /sys/kernel/mymodule/myvariable
root# cat /sys/kernel/mymodule/myvariable
```

# 5. Remove module
```
root# rmmod hello_sysfs
```