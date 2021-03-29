/* Program Number: 1a
Student Name: Sai Manish Sasanapuri; Register Number: IMT2018520
Date: 25-02-2020
Description: This program will implement creating soft link of file using symlink system call command.
*/


#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
    int fd = creat("symlink.txt",S_IRUSR|S_IWUSR);
    int fd1 = symlink("symlink.txt","ss_link");
}
