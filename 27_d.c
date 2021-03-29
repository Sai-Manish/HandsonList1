/* Program Number: 27 d
Student Name: Sai Manish Sasanapuri; Register Number: IMT2018520
Date: 25-02-2020
Description: This program will execute ls -Rl by using execv system call.

*/

#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int main(){
        char *path = "/bin/ls";
        char *arg1 = "-Rl";
        char *arg2 = "/home";
        char *args[] = {path,"-Rl","/home",NULL};
        execv(path,args);

        printf("Checking whether this will print or not\n");
        return 0;


}

