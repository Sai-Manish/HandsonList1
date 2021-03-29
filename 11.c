/* Program Number: 11a
Student Name: Sai Manish Sasanapuri; Register Number: IMT2018520
Date: 25-02-2020
Description: This program will open a file, duplicate the file descriptor and append the file with both the
descriptors and check whether the file is updated properly or not using dup system call. 
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
        fd1 = open("dup_text.txt",O_RDWR | O_CREAT,0744);
	int newfd = dup(fd1);
	char string1[41] = "This is written be file descripter fd1\n";
	char string2[48] = "This is written by dup file descripter newfd\n";
	printf("%d",fd1);
	printf("%d",newfd);
	write(fd1,string1,sizeof(string1));
	write(newfd,string2,sizeof(string2));
	close(fd1);
	close(newfd);
	return 0;
	}
	
