#include <stdio.h>
#include <stdlib.h>


void push(int n,int *top,int stac[]){
    if(*top>=n-1){
        printf("can't insert stack is full!");
    }else{
        int data;
        printf("enter data to push: ");
        scanf("%d",&data);
        (*top)++;
        stac[*top]=data;
    }
}

void pop(int n,int *top,int stac[]){
    if(*top==-1){
        printf("stack is empty");
    }else{
        (*top)--;
    }
}

void peek(int n,int *top,int stac[]){
    if(*top==-1){
        printf("stack is empty");
    }else{
        printf("%d\n",stac[*top]);
    }
}

void dislay(int n,int *top,int stac[]){
    if(*top==-1){
        printf("stack is empty\n");
    }else{
        for(int i=0;i<=*top;i++){
            printf("%d ",stac[i]);
        }
    }
}

int main()
{
    int n=5;
    int stac[n];
    int top=-1;
    int option;
    
    while(1){
        printf("\nchoose option:\n1.push\n2.pop\n3.peek\n4.dislay\n");
        scanf("%d",&option);
        switch(option){
            case 1:
                push(n,&top,stac);
                break;
            case 2:
                pop(n,&top,stac);
                break;
            case 3:
                peek(n,&top,stac);
                break;
            case 4:
                dislay(n,&top,stac);
                break;
            default:
                printf("invalid option!");
            
        }
    }
}
