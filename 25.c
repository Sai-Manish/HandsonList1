/* Program Number: 25
Student Name: Sai Manish Sasanapuri; Register Number: IMT2018520
Date: 25-02-2020
Description: This program will create three child processes. The parent will wait for a the 3rd child using waitpid system call. 
*/


#include<stdio.h>
#include<unistd.h>
#include<sys/resource.h>
#include<stdlib.h>
#include<time.h>
#include<sys/types.h>
#include<fcntl.h>
#include <sys/wait.h>

int main(){
	
	int pid,pid1,pid2;
	int parent_pid = getpid();
	//printf("Parent pid %d ", parent_pid);

	//printf("%d\n", getpid());
	pid = fork();

	// we need to create only 3 child processes so we create other two child processes during parent process.
	
	if(pid==0){
		sleep(1);
		//printf("%d\n",!fork());
		printf("1st child pid = %d and parent Pid = %d\n", getpid(),getppid());	
	}

	else{
		pid1 = fork();
		if(pid1 == 0){
				sleep(5);
				printf("2nd child pid = %d and parent Pid = %d\n", getpid(),getppid());
			}

		

		else{
			pid2 = fork();
			if(pid2==0){
				sleep(8);
				printf("3rd Child pid = %d and parent pid = %d\n", getpid(),getppid());		
			}

			else{
				waitpid(pid2,NULL,0);
				printf("Parent pid of these children %d ", parent_pid);
			}
		}
	}

	return 0;
}
