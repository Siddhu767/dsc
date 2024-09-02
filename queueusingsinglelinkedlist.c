#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node*link;
};

struct node*head=NULL;
//insertion at ending
void enqueue(){
    struct node*newnode=(struct node*)malloc(sizeof(struct node));
    struct node*temp=head;
    int element;
    printf("Enter element: ");
    scanf("%d",&element);
    newnode->data=element;
    
    if(head==NULL){
        head=newnode;
    }else{
        while(temp->link!=NULL){
            temp=temp->link;
        }
        temp->link=newnode;
        newnode->link=NULL;
    }
}
//deletion at beginning
void dequeue(){
    struct node*temp=head;
    
    if(head==NULL){
        printf("queue is empty!");
    }else{
        head=temp->link;
        free(temp);
    }
}

void display(){
    struct node*temp=head;
    if(head==NULL){
        printf("queue is empty!");
    }else{
        while(temp!=NULL){
            printf("%d ",temp->data);
            temp=temp->link;
        }
    }
}



int main(){
    int option;
    int peek;
    while(1){
        printf("\nChoose option: \n1.enqueue\n2.dequeue\n3.display\n");
        scanf("%d",&option);
        switch(option){
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            default:
                printf("invalid option!");
        }
    }
}