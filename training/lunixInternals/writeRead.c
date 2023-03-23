#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main(){
	int fd,len;
	char write_buff[50] = "hi, how are you1?, WOW?";
	char read_buff[50];
	
	fd = open("linux_kernel.txt",O_CREAT|O_RDWR,777);

	len = write(fd,write_buff,50);
	printf("return value from write optn = %d\n",len);
	lseek(fd,-40,SEEK_END); //this should be appiled to change the cursor back to 0 after the write operation is performed
	read(fd,read_buff,len);
	printf("data from buffer(read optn) = %s\n",read_buff);
	close(fd);
	return 0;
}
