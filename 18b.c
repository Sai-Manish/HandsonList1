/* Program Number: 18 b
Student Name: Sai Manish Sasanapuri; Register Number: IMT2018520
Date: 25-02-2020
Description: This program will perform Record locking.Implemented read lock.
*/

#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <syscall.h>
#include<stdio.h>
typedef struct ticket
{
    char *person_name;
    int ticket_num;
} ticket;

int main()
{
    int fd = open("18.txt",O_RDWR);
    if (fd == -1)
    {
        printf("open file failed\n");
        return 0;
    }
    lseek(fd,0,SEEK_SET);
    static struct flock lock;
    lock.l_type = F_RDLCK;
    lock.l_start = sizeof(ticket) * 2; //read locking third record
    lock.l_whence = SEEK_SET;
    lock.l_len = SEEK_END; //length 0 when start is 0 means till eof
    lock.l_pid = getpid();
    int ret = fcntl(fd, F_SETLKW, &lock);
    if (ret != -1)
    {
        ticket *ticket1 = (ticket *)malloc(sizeof(ticket));
         lseek(fd, sizeof(ticket)*2, SEEK_CUR);
        read(fd, ticket1, sizeof(ticket));
        printf("ticket no:%d\n", ticket1->ticket_num);
        while(1)
        {

        }
    }
    
    return 0;
}
