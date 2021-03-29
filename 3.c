/* Program Number: 3
Student Name: Sai Manish Sasanapuri; Register Number: IMT2018520
Date: 25-02-2020
Description: This program will create a file and print the file descriptor value, using creat ( ) system call. */

#define _POSTX_SOURCE
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#undef _POSTX_SOURCE
#include <stdio.h>
#include <string.h>

int main(){
	
	int fd;
	char text[] = "naa sav nen sastha";
	fd = creat("myfile.txt", S_IRUSR | S_IWUSR);
	
	if(fd == -1){
		perror("creat() error");
	}

	else{
		write(fd,text,strlen(text));
		printf("fd value is : %d", fd);
		close(fd);
		
	}

	return(fd);
}
