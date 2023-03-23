#include<stdio.h>
#include<stdlib.h>


void main()
{	
int count=0,i=0;
char c,*str=malloc(10*sizeof(char));
while(c!='\n'){
	scanf("%c",&c);
	str[i]=c;
	if(i==9){
		
	}
	i++;

}

printf("%s",str);
}
