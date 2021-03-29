/* Program Number: 28
Student Name: Sai Manish Sasanapuri; Register Number: IMT2018520
Date: 25-02-2020
Description: This program will get maximum and minimum real time priority.
 
*/


#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<sched.h>
int main(){
	
	int max,min;

	max = sched_get_priority_max(SCHED_RR);
	min = sched_get_priority_min(SCHED_RR);

	printf("Maximum priority level is : %d\n", max);

	printf("Minimum priority level is : %d\n", min);

	return 0;
}


