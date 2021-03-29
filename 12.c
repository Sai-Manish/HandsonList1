/* Program Number: 12
Student Name: Sai Manish Sasanapuri; Register Number: IMT2018520
Date: 25-02-2020
Description: This program will find out the opening mode of a file. Using fcntl system call. 
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
        int fcntl_mode = fcntl(fd1,F_GETFL);
        printf("%d\n",fcntl_mode);
	int flag=fcntl_mode&O_ACCMODE;// to convert mode into flags 0,1,2
    	if(flag==0)
        	printf("Read mode \n");
    	else if(flag==1)
        	printf("write mode \n");
    	else if(flag==2)
    	printf("read and write mode \n");
        close(fd1);
        return 0;
        }

