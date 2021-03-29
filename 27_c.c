/* Program Number: 27 c
Student Name: Sai Manish Sasanapuri; Register Number: IMT2018520
Date: 25-02-2020
Description: This program will execute ls -Rl by using execle system call.
 
*/


#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<string.h>
#include<fcntl.h>


extern char **environ;
int main(){


        char *path = "/bin/ls";
        char *arg1 = "-Rl";
        char *arg2 = "/home";
        execle(path,path,arg1,arg2,NULL,environ);

        printf("Checking whether this will print or not\n");
        return 0;


}

