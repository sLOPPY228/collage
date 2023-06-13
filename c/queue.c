#include<stdio.h>
#include<stdlib.h>
#define size 5
int queue[5],f=-1,r=-1,data;
void enqueue(){
	if(r==size-1){
		printf("\n\t queue is full/overflow.");
	}
	else{
		if(f==-1){
			f=0;
			r=0;
		}
		else{
			r=r+1;
		}
		printf("\n\tenter data:");
		scanf("%d",&data);
		queue[r]=data;
		printf("\n\tdata inserted....");
	}
}
void dequeue(){
	if(f==-1){
		printf("\n\tqueue is empty/underflow.");
		
	}else{
		data=queue[f];
		if(f==r){
			f=-1;
			r=-1;
		}else{
			f=f+1;
		}
		printf("\n\tdeleate element is:%d",data);
	}
}
void display(){
	if(f==-1){
		printf("queue is empty/under flow");
	}else{
		printf("\n\t queue element");
		for(i=f;i<=r;i++){
			printf("%d",queue[i]);
		}
	}
}

int main(){
	int choice;
	while(1)
	{
		printf("\n\t#####queue operations#####");
		printf("\n\t1.enqueue");
		printf("\n\t2.deque");
		printf("\n\t3.display");
		printf("\n\t4.exit");
		printf("enter your choice");
		scanf("%d",&choice);
		switch (choice)
		{
			case 1:
				enqueue();
				break;
			case 2:
				deque();
				break;
				
			case 3:
				display();
				break;
				
			case 4:
				exit(0);
				break;
			default:
				printf("\n\t enter valid choice?");
				break;
		}
	}
	return 0;
}
