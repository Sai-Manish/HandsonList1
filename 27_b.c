/* Program Number: 27 b
Student Name: Sai Manish Sasanapuri; Register Number: IMT2018520
Date: 25-02-2020
Description: This program will execute ls -Rl by using execlp system call.

*/


#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int main(){
        char *file = "ls";
        char *arg1 = "-Rl";
        char *arg2 = "/home";
        execlp(file,file,arg1,arg2,NULL);

        printf("Checking whether this will print or not\n");
        return 0;


}

