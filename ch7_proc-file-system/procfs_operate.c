/* 
 * Read / write test for procfs3.c
 * Compile with `gcc procfs_operate.c -o procfs_operate`
 * Execute with root permission
 */ 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>

#define PROCFS_ENTRY_FILEPATH "/proc/buffer2k" 

int main ()
{
  int ret;
  int fd;
  char buf[10] = {0};

  fd = open(PROCFS_ENTRY_FILEPATH, O_RDWR, 0644);
  if (fd < 0) 
  {
      perror("r1");
      exit(1);
  }

  // Write file
  ret = write(fd, "hello ty\n", strlen("hello ty\n"));

  // Read file
  ret = read(fd, &buf, 8);
  if (ret > 0)
    printf("read=%s\n", buf);

  close(fd);

  return 0;
}
