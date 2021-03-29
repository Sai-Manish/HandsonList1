/* Program Number: 14
Student Name: Sai Manish Sasanapuri; Register Number: IMT2018520
Date: 25-02-2020
Description: This program will find the type of a file where file name is taken as input from command line and the program should be able to identify any type of a file. 
*/

#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#undef _POSTX_SOURCE
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char* argv[])
    { 
	struct stat buffstat;
    	int fd;
    	fd = open(argv[1],O_RDONLY);
    	stat(argv[1],&buffstat);

    	printf("type of file = %d",buffstat.st_mode);
}
