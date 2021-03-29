/* Program Number: 20
Student Name: Sai Manish Sasanapuri; Register Number: IMT2018520
Date: 25-02-2020
Description: This program will find out the priority of the current program when executed. And modified the priority with nice command. 
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<sys/types.h>
#include<unistd.h>
#include<sys/resource.h>
int main(){
	int pid = getpid();
	int prior = getpriority(PRIO_PROCESS,pid);
	printf("Priority : %d\n",prior);
	int r = nice(15);
	prior = getpriority(PRIO_PROCESS,pid);
        printf("Priority : %d\n",prior);
	
	//while(1){
	//}
	//for(i =0; i<10000000;i++){
	//}

	return 0;
}


