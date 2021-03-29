/* Program Number: 26
Student Name: Sai Manish Sasanapuri; Register Number: IMT2018520
Date: 25-02-2020
Description: This program will execute an executable program using execvp() system call.
Procedure to run : create a file which is to be executed in executable format with name execout and then execute this file. Create the an executable file using gcc exec.c -o execout. The file exec.c is present in the current folder.
*/

#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>


int main(){
	
	char *args[]={"./execout",NULL}; // NULL here terminated array of character pointers
	execvp(args[0],args);	

	printf("Checking whether this will print or not\n");
	return 0;
}
