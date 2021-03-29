/* Program Number: 7
Student Name: Sai Manish Sasanapuri; Register Number: IMT2018520
Date: 25-02-2020
Description: This program will copy file1 into file2. 
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
        
	int fd1,fd2;
	fd1 = open("text.txt",O_RDWR);
	int size = lseek(fd1,0,SEEK_END);
	char buf[size+1];
	//char buf2[size+1];	
	lseek(fd1,0,SEEK_SET);
        int t_read = read(fd1,buf,sizeof(buf));
	
	fd2 = open("Cp_test.txt",O_RDWR | O_CREAT);
	
        write(fd2,buf,size);
	close(fd1);
	close(fd2);
	return 0;
}

