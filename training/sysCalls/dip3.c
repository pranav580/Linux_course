#include<fcntl.h>

int main(){
	int fd;
	fd = open("dumpdemp.txt",O_RDWR|O_CREAT|O_TRUNC,0660);
	if(fd <0)
	{
		printf("Cloud not open file\n");
		exit(2);
	}
	dup2(fd,1);
	printf("sample string one\n");
	printf("sample string two\n");
	puts("sample string three\n");
}
