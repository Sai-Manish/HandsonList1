/* Program Number: 1b
Student Name: Sai Manish Sasanapuri; Register Number: IMT2018520
Date: 25-02-2020
Description: This program will implement creating hard link of file using link system call command.
*/

#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
    int fd = creat("hardlink.txt",S_IRUSR|S_IWUSR);
    int fd1 = link("hardlink.txt","hh_link");
}
