#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node*link;
};
struct node*head=NULL;

void insertion_at_beginning(){
    struct node*newnode=(struct node*)malloc(sizeof(struct node*));
    int element;
    if(newnode==NULL){
        printf("memory insuffient\n");
    }else{
        printf("Enter element: ");
        scanf("%d",&element);
        newnode->data=element;
        newnode->link=head;
        head=newnode;
    }
}

void insertion_at_ending(){
    struct node*newnode=(struct node*)malloc(sizeof(struct node*));
    struct node*temp=head;
    int element;
    
    if(newnode==NULL){
        printf("memory insuffient");
    }else{
        printf("Enter element: ");
        scanf("%d",&element);
        newnode->data=element;
        if(head==NULL){
            newnode->data=element;
            head=newnode;
        }else{
            while(temp->link!=NULL){
                temp=temp->link;
            }
            temp->link=newnode;
            newnode->link=NULL;
        }
    }
}



void insertion_at_position(){
    struct node*newnode=(struct node*)malloc(sizeof(struct node*));
    struct node*temp=head;
    int element,pos;
    
    if(newnode==NULL){
        printf("memory insuffient");
    }else{
        printf("Enter position:");
        scanf("%d",&pos);
        printf("Enter element: ");
        scanf("%d",&element);
        newnode->data=element;
        newnode->link=NULL;
        while(pos!=1){
            newnode=newnode->link;
            pos--;
        }
        newnode->link=temp->link;
        temp->link=newnode;
    }
}



void traverse(){
    struct node *temp;
    temp=head;
    if(temp==NULL){
        printf("list is empty.\n");
    }else{
        while(temp!=NULL){
            printf("->%d",temp->data);
            temp=temp->link;
        }
    }
}

int main()
{
    int option;
    while(1){
        printf("\nSelect option: \n1.Insertion at beginning\n2.Insertion at ending\n3.Insert at Specific position\n4.traverse\n");
        scanf("%d",&option);
        switch(option){
            case 1:
                insertion_at_beginning();
                break;
            case 2:
                insertion_at_ending();
                break;
            case 3:
                insertion_at_position();
                break;
            case 4:
                traverse();
                break;
            default:
                printf("\ninvalid option\n");
        }
    }
}