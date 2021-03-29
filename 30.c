/* Program Number: 28
Student Name: Sai Manish Sasanapuri; Register Number: IMT2018520
Date: 25-02-2020
Description: This program will run a script at a specific time using a Daemon process and prints in terminal. To stop this kill the program using the child pid.
*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<string.h>
#include <fcntl.h>
#include <string.h>


int main(){
	pid_t pid;
	pid = fork();


	if(pid > 0){
		printf("Parent PID : %d\n", getpid());
		exit(0);
	}

	else if(pid == 0){
		printf("Child PID : %d\n", getpid());

		setsid(); // this creates new session.
		
		umask(0); // A unmask of 0 will make newly created directories readable, writeable and descendible for everyone.
		//Moving to root

		chdir("/");
		while(1){
			sleep(10);
			printf("This is Daemon Process\n");
		}
	}
	return 0;
}
