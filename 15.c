/* Program Number: 15
Student Name: Sai Manish Sasanapuri; Register Number: IMT2018520
Date: 25-02-2020
Description: This program will display the environmental variable of the user. Used environ.
*/

#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#undef _POSTX_SOURCE
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

extern char **environ;

int main(){
	int i = 0 ;
    	while(environ[i]){

        printf("%s\n",environ[i]);
        i++;
    	}
}
