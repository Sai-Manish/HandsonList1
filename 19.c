/* Program Number: 19
Student Name: Sai Manish Sasanapuri; Register Number: IMT2018520
Date: 25-02-2020
Description: This program will find out time taken to execute getpid system call, using time stamp counter. 
*/


#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<unistd.h>
#include<sys/time.h>

unsigned long long rdtsc(){
	unsigned long long dst;
	__asm__ __volatile__ ("rdtsc" : "= A" (dst));
}

int main(){
	unsigned long long int start_time,end_time;

	start_time = rdtsc();
	getpid();
	end_time = rdtsc();

	printf("Time taken to execute getpid function : %lld us\n ", (end_time - start_time)/1800 ); //lscpu | more in that check CPU Mhz value
	
	//printf("end time %ld\n", end_time);
}
