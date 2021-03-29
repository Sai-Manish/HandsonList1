/* Program Number: 11c
Student Name: Sai Manish Sasanapuri; Register Number: IMT2018520
Date: 25-02-2020
Description: This program will open a file, duplicate the file descriptor and append the file with both the
descriptors and check whether the file is updated properly or not using fcntl system call. 
*/

#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#undef _POSTX_SOURCE
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){

        int fd1;
        fd1 = open("fcntl_text.txt",O_RDWR | O_CREAT,0744);
        int dup2_fd = open("text.txt",O_RDWR | O_CREAT,0744);
        int fcntl_fd = fcntl(fd1,F_DUPFD);
        char string1[41] = "This is written be file descripter fd1\n";
        char string2[50] = "This is written by dup file descripter fcntl\n";
        write(fd1,string1,sizeof(string1));
        write(fcntl_fd,string2,sizeof(string2));
        close(fd1);
        close(fcntl_fd);
        return 0;
        } 
