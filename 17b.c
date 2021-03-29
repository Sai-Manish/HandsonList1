/* Program Number: 17 b
Student Name: Sai Manish Sasanapuri; Register Number: IMT2018520
Date: 25-02-2020
Description: This is separate program, to
open the file, implemented write lock, read the ticket number, increment the number and print the new ticket number then close the file. 
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
    int fd = open("17.txt",O_RDWR);
    if (fd == -1)
    {
        printf("open file failed\n");
        return 0;
    }
    lseek(fd,0,SEEK_SET);
    static struct flock lock;
    lock.l_type = F_WRLCK;
    lock.l_start = 0;
    lock.l_whence = SEEK_SET;
    lock.l_len = SEEK_END; //length 0 when start is 0 means till eof
    lock.l_pid = getpid();
    int ret = fcntl(fd, F_SETLKW, &lock);
    if (ret != -1)
    {
        ticket *ticket1 = (ticket *)malloc(sizeof(ticket));
        read(fd, ticket1, sizeof(ticket));
        ticket1->ticket_num = ticket1->ticket_num + 1;
        lseek(fd, 0, SEEK_SET);
        write(fd, ticket1, sizeof(ticket));
        printf("ticket no after increment:%d\n", ticket1->ticket_num);
    }
    while(1)
    {

    }
    return 0;
}
