/* Program Number: 17
Student Name: Sai Manish Sasanapuri; Register Number: IMT2018520
Date: 25-02-2020
Description: This program will simulate online ticket reservation. Implemented write lock
The program will open a file, store a ticket number and exit.
*/

#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <syscall.h>
typedef struct ticket
{
    char *person_name;
    int ticket_num;
} ticket;

int main()
{
    int fd = open("17.txt",O_RDWR | O_CREAT);
    if (fd == -1)
    {
        printf("open failed\n");
        return 0;
    }
    ticket *ticket1 = (ticket *)malloc(sizeof(ticket));

    ticket1->person_name = "Sai Manish S";
    ticket1->ticket_num = 14;
    write(fd, ticket1, sizeof(ticket));
    close(fd);
}
