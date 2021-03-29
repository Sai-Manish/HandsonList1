/* Program Number: 9
Student Name: Sai Manish Sasanapuri; Register Number: IMT2018520
Date: 25-02-2020
Description: This program will print the following information about a given file. inode, number of hard links, uid, gid, size, block size, number of blocks, time of last access, time of last modification, time of last change
*/



#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#undef _POSTX_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <sys/sysmacros.h>

int main(){
	struct stat sb;
	stat("text.txt", &sb);
	printf("I-node:            %ld\n", (long) sb.st_ino);
	printf("Hard Link count:   %ld\n", (long) sb.st_nlink);
        printf("UID: 	           %ld\n",(long) sb.st_uid);
	printf("GID:		   %ld\n",(long) sb.st_gid);
	printf("File size:         %lld bytes\n", (long long) sb.st_size);
        printf("Block size:        %ld bytes\n", (long) sb.st_blksize);
        printf("No of Blocks:      %lld\n",  (long long) sb.st_blocks);
	printf("Last file access:         %s", ctime(&sb.st_atime));
	printf("Last file modification:   %s", ctime(&sb.st_mtime));	               
	printf("Last status change:       %s", ctime(&sb.st_ctime));
	return 0;

}
