/* Program Number: 1c
Student Name: Sai Manish Sasanapuri; Register Number: IMT2018520
Date: 25-02-2020
Description: This program will implement creating of FIFO file using mkfifo Library Function or mknod system call command.
*/

#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include <sys/types.h>
#include <sys/stat.h>

int main()
{
    int fd;
    fd = mkfifo("fifofile",0777); // library call 

    int fd1;
    fd1 = mknod("fifonod",S_IFIFO,0700); 
    return 0;
}
