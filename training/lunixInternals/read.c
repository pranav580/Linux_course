#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main(){
	int fd;
	char buf[30];
	int res;
	fd = open("linux111.txt",O_CREAT|O_RDWR,664);
	printf("%d\n",fd);
	if(fd <0){
		printf("File is not opened or created\n");
	}
	read(fd,buf,30);
	printf("data from buff = %s\n",buf);
	close(fd);
	return 0;
}
