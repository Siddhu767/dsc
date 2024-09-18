#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node* nextlink;
	struct node* prevlink;
};
struct node*head=NULL;

void insert_at_beginning() {
	struct node*newnode=(struct node*)malloc(sizeof(struct node));
	struct node*temp=head;
	int element;
	printf("Enter data: ");
	scanf("%d",&element);
	newnode->data=element;
	if(newnode==NULL){
		printf("memory insuffient!\n");
		return;
	}else{
	    newnode->prevlink=NULL;
		newnode->nextlink=head;
		head=newnode;
	}
}

void insert_at_ending() {
	struct node*newnode=(struct node*)malloc(sizeof(struct node));
	struct node*temp=head;
	int element;
	printf("Enter data: ");
	scanf("%d",&element);
	newnode->data=element;
	if(head==NULL) {
	    newnode->prevlink=NULL;
		newnode->nextlink=NULL;
		head=newnode;
	} else {
		while(temp->nextlink!=NULL) {
			temp=temp->nextlink;
		}
		temp->nextlink=newnode;
		newnode->prevlink=temp;
		newnode->nextlink=NULL;
	}
}

void insert_at_position() {
	struct node*newnode=(struct node*)malloc(sizeof(struct node));
	struct node*temp=head;
	struct node*temp1=head;
	int position,element;
	int cnt=0;
	printf("Enter position: ");
	scanf("%d",&position);
	printf("Enter data: ");
	scanf("%d",&element);
	newnode->data=element;

	while(temp1!=NULL) {
		temp1=temp1->nextlink;
		cnt++;
	}

	if(position>cnt) {
		printf("position is bigger than linkedlist size!");
		return;
	} else {
		for(int i=0; i<position; i++) {
			temp=temp->nextlink;
		}
		newnode->prevlink=temp;
		newnode->nextlink=temp->nextlink;
		temp->nextlink=newnode;
	}
}

void delete_at_beginning() {
	struct node*temp=head;
	struct node*temp1=head;
	if(head==NULL) {
		printf("list is empty");
		return;
	} else {
		head=temp->nextlink;
		free(temp);
		temp->prevlink=NULL;
		
	}
}

void delete_at_ending() {
	struct node*temp=head;
	struct node*temp1;
	if(head==NULL) {
		printf("list is empty");
	} else if(head->nextlink==NULL) {
		free(head);
		head=NULL;
	} else {
		while(temp->nextlink!=NULL) {
			temp1=temp;
			temp=temp->nextlink;
		}
		temp1->nextlink=NULL;
		free(temp);
	}
}

void delete_at_position() {
	struct node *temp=head;
	struct node *temp1;
	int pos;
	printf("Enter position to Delete: ");
	scanf("%d",&pos);
	
	if(head==NULL){
	    printf("List is Empty!");
	}else if(pos==0){
	    temp=head;
	    head=temp->nextlink;
	    free(temp);
	}else{
	    for(int i=0; i<pos-1; i++) {
		    temp=temp->nextlink;
	    }
	    temp1=temp->nextlink;
	    temp->nextlink=temp1->nextlink;
	    free(temp1);
	}
}


void traversal() {
	struct node*temp=head;
	if(temp==NULL) {
		printf("empty list!");
	} else {
		while(temp!=NULL) {
			printf("%d->",temp->data);
			temp=temp->nextlink;
		}
	}
}


void searching() {
	struct node*temp=head;
	int value;
	printf("enter value to search: ");
	scanf("%d",&value);
	if(head==NULL) {
		printf("List is null");
	} else {
		while(temp->nextlink!=NULL) {
			temp=temp->nextlink;
			if(temp->data==value) {
				printf("%d  was in the SSL..",value);
			}
		}
	}
}


int main() {
	int option;
	while(1) {
		printf("\nChoose operation: \n1.insert_at_beginning\n2.insert_at_ending\n3.insert_at_position\n4.delete_at_beginning\n5.delete_at_ending\n6.delete_at_position\n7.traversal\n8.search\n");
		scanf("%d",&option);
		switch (option) {
		case 1:
			insert_at_beginning();
			break;
		case 2:
			insert_at_ending();
			break;
		case 3:
			insert_at_position();
			break;
		case 4:
			delete_at_beginning();
			break;
		case 5:
			delete_at_ending();
			break;
		case 6:
			delete_at_position();
			break;
		case 7:
			traversal();
			break;
		case 8:
			searching();
			break;
		default:
			printf("Invalid option!\n");
		}
	}
}
