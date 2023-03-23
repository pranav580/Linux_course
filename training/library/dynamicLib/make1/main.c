#include<stdio.h>
#include"file.h"

int main(){
	int a = 10;
	int b = 20;
	printf("%d -%d = %d\n",b,a,sub(a,b));
	printf("%d + %d = %d\n",a,b,add(a,b));
	return 0;
}
