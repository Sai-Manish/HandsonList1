/* Program Number: 21
Student Name: Sai Manish Sasanapuri; Register Number: IMT2018520
Date: 25-02-2020
Description: This program will call fork and prints the parent and child process id.
*/

#include<stdio.h>
#include<unistd.h>
#include<sys/resource.h>
#include<stdlib.h>
#include<time.h>
#include<sys/types.h>

int main(){

	//int pid = getpid();
	//printf("pid of this process : %d\n",pid);

	int pid_child = fork(); // returns 0 if child created successfully
	
	printf("return of fork() %d\n", pid_child);	

	if(pid_child ==0){
		printf("pid of this child : %d\n",getpid());
		printf("pid of parent of the child : %d\n",getppid());
	}
	return 0;
}
