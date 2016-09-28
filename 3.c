#include <stdio.h>
#include <math.h>
#include <stdlib.h>

typedef struct node{
	int x;
	struct node* next;
} node;

void pop(node*,int);
void *createList();
 
int main(){
	node *root=createList();
	int n,flag,z=0,v;
	printf("Enter Number:");
	scanf("%d",&n);


	for(int i=3;i<n;i+=2){
		flag=1;
		node* conductor=root;
			while((conductor->next!=NULL)&&(conductor->x<i)){
				if(conductor->x==i)continue;
				if((i%conductor->x)==0){
					flag=0;
					break;
				}
				conductor=conductor->next;
			}
			if(flag){
				pop(root,i);
				printf("%d\n", i);
				z++;
			}
		}
	
printf("%d\n", z);
}

void *createList(){
	node *root;
	root=(node*)malloc(sizeof(node));
	root->x=2;
	root->next=NULL;
	return root;
}

void pop(node* root,int lx){
	node *conductor;
	conductor=root;
	while(conductor->next!=0){
		conductor=conductor->next;
	}
	conductor->next=(node*)malloc(sizeof(node));
	conductor->x=lx;
	conductor->next->next=NULL;
}