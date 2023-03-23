#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main(){
	char *ch =(char*)malloc(5);
	char back[] = "hello";
	strcat(ch,back);
	ch= realloc(ch,5);	
	strcat(ch,back);
	printf("%s\n",ch);
} 
