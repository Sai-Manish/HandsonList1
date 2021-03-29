/* Program Number: 13
Student Name: Sai Manish Sasanapuri; Register Number: IMT2018520
Date: 25-02-2020
Description: This program will wait for a STDIN for 10 seconds using select() system call.And then print statement to
verify whether the data is available within 10 seconds or not. 
*/


#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#undef _POSTX_SOURCE
#include <stdio.h>
#include <stdlib.h>

int main()
       {
           fd_set fds;
           struct timeval tv;
           int retval;

           /* Watch stdin (fd 0) to see when it has input. */

           FD_ZERO(&fds);
           FD_SET(0, &fds);

           /* Wait up to 10 seconds. */

           tv.tv_sec = 10;
           tv.tv_usec = 0;

           retval = select(1, &fds, NULL, NULL, &tv);
           
           if (retval == -1)
               perror("select()");
           else if (retval)
               printf("Data is available now.\n");
           else
               printf("No data within 10 seconds.\n");

           exit(EXIT_SUCCESS);
       }


