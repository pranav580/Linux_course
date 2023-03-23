#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main(){
	int fd,len;
	int x;
	char write_buff[60] = "Linux Kernal new Program?, WOW";
	fd = open("linux111.txt",O_CREAT | O_RDWR, 0777);
	write(fd, write_buff,60);
	close(fd);
	return 0;
}
