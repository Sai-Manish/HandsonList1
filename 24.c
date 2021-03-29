/* Program Number: 24
Student Name: Sai Manish Sasanapuri; Register Number: IMT2018520
Date: 25-02-2020
Description: This program will create an orphan process. 
*/

#include<stdio.h>
#include<unistd.h>
#include<sys/resource.h>
#include<stdlib.h>
#include<time.h>
#include<sys/types.h>
#include<fcntl.h>

int main(){
	int pid = fork();

	//Child process becomes orphan we parent process gets terminated before the child process get terminated.
        if(pid > 0){
                exit(0);
        }

        else{
                sleep(30);
		printf("Child process has become orphan");

        }

        return 0;

}
