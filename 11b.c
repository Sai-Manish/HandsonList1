/* Program Number: 11b
Student Name: Sai Manish Sasanapuri; Register Number: IMT2018520
Date: 25-02-2020
Description: This program will open a file, duplicate the file descriptor and append the file with both the
descriptors and check whether the file is updated properly or not using dup2 system call. 
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
        fd1 = open("dup2_text.txt",O_RDWR | O_CREAT,0744);
	int dup2_fd = open("text.txt",O_RDWR | O_CREAT,0744);
        dup2(fd1,dup2_fd);
        char string1[41] = "This is written be file descripter fd1\n";
        char string2[48] = "This is written by dup file descripter newfd\n";
        write(fd1,string1,sizeof(string1));
        write(dup2_fd,string2,sizeof(string2));
        close(fd1);
        close(dup2_fd);
        return 0;
        }

