//stack using single_linkedlist

#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node*link;
};

struct node*head=NULL;

void push(){
    //inserting at end.
    struct node*newnode=(struct node*)malloc(sizeof(struct node));
    struct node*temp=head;
    int element;
    printf("Enter data:");
    scanf("%d",&element);
    newnode->data=element;
    newnode->link=NULL;
    
    if(head==NULL){
        head=newnode;
    }else{
        while(temp->link!=NULL){
            temp=temp->link;
        }
        temp->link=newnode;
    }
}

void pop(){
    struct node*temp=head;
    struct node*temp1;
    if(temp==NULL){
        printf("empty stack!");
    }else{
        while(temp->link!=NULL){
            temp1=temp;
            temp=temp->link;
        }
        temp1->link=NULL;
        free(temp);
    }
}
void peek(){
    struct node*temp=head;
    if(head==NULL){
        printf("stack is empty!");
    }else{
        while(temp->link!=NULL){
            temp=temp->link;
        }
        printf("%d\n",temp->data);
    }
}

void display(){
    struct node*temp=head;
    if(head==NULL){
        printf("empty list!\n");
    }else{
        while(temp!=NULL){
            printf("%d->",temp->data);
            temp=temp->link;
        }
    }
}


int main()
{
    int option;
    while(1){
        printf("\nChoose option:\n1.push\n2.pop\n3.peek\n4.display\n");
        scanf("%d",&option);
        switch(option){
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            default:
                printf("invalid option!");
        }
    }
}