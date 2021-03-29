/* Program Number: 5
Student Name: Sai Manish Sasanapuri; Register Number: IMT2018520
Date: 25-02-2020
Description: This program will create five new files with infinite loop. Execute the program in the background and check the file descriptor table at /proc/pid/fd. 

Procedure to run the file :
	 /* to see the output type ./a.out &
	    and then do cd /proc/PID/fd/
	    and then ll
	    to end this infinite loop type 
	    fg
	    and then ctrl+c
	 */
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
	
	int fd;
	int i = 0;
	//char filenames[4][100];
	char **filenames = (char**) malloc((5)*sizeof(char*));
	filenames[0] = "test1.txt";
	filenames[1] = "test2.txt";
	filenames[2] = "test3.txt";
	filenames[3] = "test4.txt";
	filenames[4] = "test5.txt";


	for(i=0;i<5;i++){
		fd = creat(filenames[i], S_IRUSR | S_IWUSR);
	}
	//fd = creat(filename, S_IRUSR | S_IWUSR);
	while(1){
	
	}

	return 0;
}
