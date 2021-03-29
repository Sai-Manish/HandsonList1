/* Program Number: 10
Student Name: Sai Manish Sasanapuri; Register Number: IMT2018520
Date: 25-02-2020
Description: This program will open a file with read write mode, will write 10 bytes, move the file pointer by 10
bytes (use lseek) and write again 10 bytes. Prints value of lseek.
And open the file with od and check the empty spaces in between the data. 
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
        fd1 = open("my_text1.txt",O_RDWR | O_CREAT,0744);
        //int size = lseek(fd1,0,SEEK_END);
        char buf[10] = "This is 1l";
	char buf1[10] = "This is 2l";
	
        lseek(fd1,0,SEEK_SET);
        write(fd1,buf,sizeof(buf));
	lseek(fd1,sizeof(buf)+10,SEEK_SET);
	write(fd1,buf1,sizeof(buf1));

	int a;
	a = lseek(fd1,0,SEEK_END);
	printf("Value of seek is %d\n", a);
        return 0;
}

