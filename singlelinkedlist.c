#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* link;
};
struct node*head=NULL;

void insert_at_beginning(){
    struct node*newnode=(struct node*)malloc(sizeof(struct node));
    int element;
    if(newnode==NULL){
        printf("memory insuffient!\n");
    }else{
        printf("Enter data: ");
        scanf("%d",&element);
        newnode->data=element;
        newnode->link=head;
        head=newnode;
    }
}

void insert_at_ending(){
    struct node*newnode=(struct node*)malloc(sizeof(struct node));
    struct node*temp=head;
    int element;
    printf("Enter data: ");
    scanf("%d",&element);
    
    if(newnode==NULL){
        printf("memory insuffient!\n");
    }else{
        newnode->data=element;
        while(temp->link!=NULL){
            temp=temp->link;
        }
        temp->link=newnode;
        newnode->link=NULL;
    }
}

void insert_at_position(){
    struct node*newnode=(struct node*)malloc(sizeof(struct node));
    struct node*temp=head;
    int position,element;
    printf("Enter position: ");
    scanf("%d",&position);
    printf("Enter data: ");
    scanf("%d",&element);
    
    if(newnode==NULL){
        printf("memory insuffient!\n");
    }else{
        for(int i=1;i<position;i++){
            temp=temp->link;
        }
        newnode->data=element;
        newnode->link=temp->link;
        temp->link=newnode;
    }
}

void traversal(){
    struct node*temp=head;
    if(temp==NULL){
        printf("empty list!");
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
        printf("\nChoose operation: \n1.insert_at_beginning\n2.insert_at_ending\n3.insert_at_position\n4.traversal\n");
        scanf("%d",&option);
        switch (option){
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
            traversal();
            break;
        default:
            printf("Invalid option!\n");
    }
    }
}
