#include <stdio.h>
#include <stdlib.h>

void enqueue(int n,int *top,int q[]){
    int element;
    printf("Enter element: ");
    scanf("%d",&element);
    if(*top>=n){
        printf("can't insert!");
    }else{
        (*top)++;
        q[*top]=element;
    }
}

void dequeue(int n,int *top,int q[]){
    if(*top==0){
        printf("queue is empty!");
    }else{
        *top=*top-1;
        for(int i=0;i<=(*top);i++){
            q[i]=q[i+1];
        }
    }
}

void display(int n,int *top,int q[]){
    if(*top==-1){
        printf("empty queue!");
    }else{
        printf("top == %d\n",*top);
        for(int i=0;i<=(*top);i++){
            printf("%d ",q[i]);
        }
    }
}

int main()
{
    int n=20;
    int q[n];
    int top=-1;
    int option;
    while(1){
        printf("\nChoose option:\n1.enqueue\n2.dequeue\n3.display\n");
        scanf("%d",&option);
        switch(option){
            case 1:
                enqueue(n,&top,q);
                break;
            case 2:
                dequeue(n,&top,q);
                break;
            case 3:
                display(n,&top,q);
                break;
            default:
                printf("invalid option!");
        }
    }
}