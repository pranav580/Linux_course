#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main(){
	int n=2;
	char *new = calloc(n,sizeof(char));
	
   char c;
   int i=0;
	while(c!='\n'){
		scanf("%c",&;
		new[i] = c;
		i++;
		if(i%n == 0){
			new = realloc(new, sizeof(char)*n);	
		printf("**%d**\n",i);
		}
	}
	for(int j=0;j<i;j++)
		printf(" %c",new[j]);
	printf("(%ld)\n",strlen(new));
}
