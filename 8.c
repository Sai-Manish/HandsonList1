/* Program Number: 8
Student Name: Sai Manish Sasanapuri; Register Number: IMT2018520
Date: 25-02-2020
Description: This program will open a file in read only mode, And will read line by line and display each line as it is read.Will close the file when end of file is reached. 
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
        fd1 = open("text.txt",O_RDONLY);
        int size = lseek(fd1,0,SEEK_END);
        char buf[size+1];
	char buf2[size+1];
    
        lseek(fd1,0,SEEK_SET);
        int t_read = read(fd1,buf,sizeof(buf));
     
	int offset[100];
	int n_offset = 0;
	offset[n_offset] = 0;
	n_offset = n_offset + 1;
	int count = 0;
	for(int i=0;i<size;i++){
		if(buf[i]=='\n'){
			offset[n_offset] = i;
			n_offset = n_offset + 1;
			count = count + 1;
		}
	}
	
	for(int j = 0;j <count+1;j++){
		lseek(fd1,offset[j],SEEK_SET);
		read(fd1,buf2,offset[j+1] - offset[j]);
		write(1,buf2,offset[j+1] - offset[j]);
	}
	
       // write(1,buf,size);
        close(fd1);
        return 0;
}

