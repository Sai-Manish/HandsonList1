/* Program Number: 22
Student Name: Sai Manish Sasanapuri; Register Number: IMT2018520
Date: 25-02-2020
Description: This program will open a file, call fork, and then write to the file by both the child as well as the parent processes.. 
*/


#include<stdio.h>
#include<unistd.h>
#include<sys/resource.h>
#include<stdlib.h>
#include<time.h>
#include<sys/types.h>
#include<fcntl.h>

int main(){
	int fd;
	fd = open("new_file.txt",O_RDWR);
	int pid = fork(); // return value is 0 in child process and non-zero in parent process
	
	if(pid == 0){
		write(fd,"Written by child process\n",26);
	}

	else{
		write(fd,"Written by Parent process\n",27);	
	}

	return 0;

}
