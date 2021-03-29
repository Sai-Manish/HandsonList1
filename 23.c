/* Program Number: 23
Student Name: Sai Manish Sasanapuri; Register Number: IMT2018520
Date: 25-02-2020
Description: This program will create a Zombie state of the running program. 
*/


#include<stdio.h>
#include<unistd.h>
#include<sys/resource.h>
#include<stdlib.h>
#include<time.h>
#include<sys/types.h>
#include<fcntl.h>

int main(){
	
	// child becomes zombie as parent is sleeping when child process exits
	int pid = fork();
	if(pid > 0){
		sleep(30);// sleeps for 30 secs
	}

	else{
		exit(0);
	}

	return 0;
}
