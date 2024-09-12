#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node*link;
};
struct node*head=NULL;

void enqueue() {
	struct node *newnode=(struct node*)malloc(sizeof(struct node));
	int element;
	printf("Enter data: ");
	scanf("%d",&element);
	newnode->data=element;
	if(newnode==NULL) {
		printf("memory insuffient!\n");
	} else {
		newnode->link=head;
		head=newnode;
	}
}

void dequeue() {
	struct node *temp=head;
	struct node*temp1;
	if(head==NULL) {
		printf("stack is empty\n");
	} else {
		while(temp->link!=NULL) {
			temp1=temp;
			temp=temp->link;
		}

		temp1->link=NULL;
		free(temp);
	}
}

void peek() {
	struct node *temp=head;
	if(head==NULL) {
		printf("Stack is empty\n");
	} else {
		while(temp->link!=NULL) {
			temp=temp->link;
		}
		printf("%d\n",temp->data);
	}
}

void traversal() {
	struct node*temp=head;
	if(temp==NULL) {
		printf("empty list!");
	} else {
		while(temp!=NULL) {
			printf("%d->",temp->data);
			temp=temp->link;
		}
	}
}

int main() {
	int option;
	while(1) {
		printf("Choose option: \n1.enqueue_to_linkedlist\n2.dequeue_to_linkedlist\n3.peek\n4.traversal\n");
		scanf("%d",&option);
		switch (option) {
		case 1:
			enqueue();
			break;
		case 2:
			dequeue();
			break;
		case 3:
			peek();
			break;
		case 4:
			traversal();
			break;
		default:
			printf("Invalid option!");
		}
	}
}
