/* Program Number: 27 e
Student Name: Sai Manish Sasanapuri; Register Number: IMT2018520
Date: 25-02-2020
Description: This program will execute ls -Rl by using execvp system call.

*/

#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int main(){
        char *file = "ls";
        char *args[] = {file,"-Rl","/home",NULL};
        execvp(file,args);

        printf("Checking whether this will print or not\n");
        return 0;


}


