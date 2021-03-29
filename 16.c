/* Program Number: 16a
Student Name: Sai Manish Sasanapuri; Register Number: IMT2018520
Date: 25-02-2020
Description: This program will perform mandatory locking. Implemented write lock. give file name as command line argument: */

#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <syscall.h>

int main(int argc, char*argv[])
{
    if(argc != 2)
    {
        perror("wrong input");
        return 1;
    }
    int fd = open(argv[1],O_RDWR);
    lseek(fd, 0, SEEK_SET);
    static struct flock lock;
    lock.l_type = F_RDLCK;
    lock.l_start = 0;
    lock.l_whence = SEEK_SET;
    lock.l_len = SEEK_END; //length 0 when start is 0 means till eof
    lock.l_pid = getpid();

    int ret = fcntl(fd, F_SETLKW, &lock);
    printf("Return value of fcntl:%d\n", ret);
    while (1)
    {
    }
}
