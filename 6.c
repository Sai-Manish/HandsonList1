/* Program Number: 6
Student Name: Sai Manish Sasanapuri; Register Number: IMT2018520
Date: 25-02-2020
Description: This program will take input from STDIN and display on STDOUT using only read/write system calls. 
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
	char *buf[100];

	int t_read = read(0,buf,15);
	write(1,buf,15);	
}	
