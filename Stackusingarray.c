#include <stdio.h>
#define n 10

int stak[n];
int top=-1;

void push(){
    int value;
    if(top==n-1){
        printf("Stack is full.\n");
    }else{
        top++;
        printf("ENTER AN ELEMENT TO INSERT : ");
        scanf("%d",&value);
        stak[top]=value;
    }
}

void pop(){
    if(top==-1){
        printf("Stack is empty.\n");
    }else{
        stak[top]=0;
        top--;
    }
}

void peek(){
    if(top==-1){
        printf("Stack is empty. \n");
    }else{
        printf("%d",stak[top]);
    }
}

void display(){
    if(top==-1){
        printf("STACK IS EMPTY\n");
    }else{
        for(int i=0;i<n-1;i++){
            printf("%d ",stak[i]);
        }
        printf("\n");
    }
}



int main()
{
    int option, value;
    while(1){
        printf("\n\n\nSELECT OPTION:\n1.push()\n2.pop()\n3.peek()\n4.display()\n");
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
                printf("\nCHOOSE THE VALID OPTION!\n");
                
        }
    }
    
}
