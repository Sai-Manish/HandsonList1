/* Program Number: 18
Student Name: Sai Manish Sasanapuri; Register Number: IMT2018520
Date: 25-02-2020
Description: This program performs adivisory locking read and write lock.
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
    int fd = open("18.txt",O_RDWR | O_CREAT);
    if (fd == -1)
    {
        printf("open failed\n");
        return 0;
    }
    lseek(fd,0,SEEK_SET);
    ticket *ticket1 = (ticket *)malloc(sizeof(ticket));
    ticket *ticket2 = (ticket *)malloc(sizeof(ticket));
    ticket *ticket3 = (ticket *)malloc(sizeof(ticket));
    ticket1->person_name = "Sai";
    ticket1->ticket_num = 28;
    ticket2->person_name = "Manish";
    ticket2->ticket_num = 35;
    ticket3->person_name = "Sasanapuri";
    ticket3->ticket_num = 12;
    write(fd, ticket1, sizeof(ticket));
    write(fd, ticket2, sizeof(ticket));
    write(fd, ticket3, sizeof(ticket));
    close(fd);
}
