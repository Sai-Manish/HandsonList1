/* Program Number: 29 a
Student Name: Sai Manish Sasanapuri; Register Number: IMT2018520
Date: 25-02-2020
Description: This program will get scheduling policy and modify the SCHED_FIFO scheduling policy. Run the file using sudo ./a.out.
*/


#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<string.h>
#include<fcntl.h>
#include<sched.h>
int main(){
	
	pid_t pid;
	pid = getpid();

	int curr_scheduling;
	curr_scheduling = sched_getscheduler(pid);
	
	//printf("Current scheduling process of present running process is %d\n", curr_scheduling);

	struct sched_param scp;
	scp.sched_priority = 30;

	sched_setscheduler(pid,SCHED_FIFO,&scp);
	
	int curr_scheduling2 = sched_getscheduler(getpid());

	printf("Scheduled process scheduled under FIFO policy %d\n", curr_scheduling2);


return 0;
}
