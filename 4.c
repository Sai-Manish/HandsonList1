/* Program Number: 4
Student Name: Sai Manish Sasanapuri; Register Number: IMT2018520
Date: 25-02-2020
Description: This program will open an existing file with read write mode, using open( ) system call. 
*/


#include<stdio.h>
#include<fcntl.h>
#include<errno.h>
#include<stdlib.h>

extern int errno;

int main(){
	
	int fd;

	fd = open("myfile.txt", O_RDWR);
	
	printf("The given file is opened\n");
	printf("Openend fd %d", fd);
	printf("Closing the file\n");

	exit(0);

}


