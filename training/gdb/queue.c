#include<stdio.h>

#define MAX 10
int Q[MAX],F=0,R=-1;

int isFull()
{
 if(R==MAX-1)
  return 1;
 else
  return 0;
}

int isEmpty(){
 if(R-F == -1){
  F=0;
  R=-1;
  return 1;
 }else{
  return 0;
 }
}

void Enqueue(int data){
 if(isFull()){
  printf("Queue is Already FUll\n");
 }else{
  Q[++R]=data;
 }
}

int Dequeue(){
 if(isEmpty()){
  printf("Queue is Empty\n");
 }else{
  return Q[F++];
 }
}

int main()
{
 int ch=0,num;
 while(ch!=5){
  printf("1.Full Check\n2.Empty Check\n3.Enqueue\n4.Dequeue\n5.exit\nEnter Your Choice: ");
  scanf("%d",&ch);
  printf("\e[1;1H\e[2J");
  switch(ch){
    case 1:
	if(isFull()){
	 printf("Queue is Full\n");
	}else{
	 printf("Queue is not Full\n");
	}
	break;
    case 2:
	if(isEmpty()){
	 printf("Queue is Empty\n");
	}else{
	 printf("Queue is Not Empty\n");
	}
	break;
    case 3:
 	printf("ENter the Number to append in Queue: \n");
        scanf("%d",&num);
	Enqueue(num);
	break;
    case 4:
 	printf("%d Element is Taken Out.\n",Dequeue());
	break;
    default:
	printf("ENter correct choice\n");
	break;
  }
 for(int i=F;i<=R;i++){
  printf("%5d",Q[i]);
 }
  printf("\n");
 }
return 0;
}
