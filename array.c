#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int arr[MAX];
int n=0;

void insert_at_beginning(){
    int element;
    printf("Enter element to insert: ");
    scanf("%d",&element);
    if(n==MAX){
        printf("Array is full!\n");
    }else{
        for(int i=n;i>0;i--){
            arr[i]=arr[i-1];
        }
        arr[0]=element;
        n++;
    }
}

void insert_at_ending(){
    int element;
    printf("Enter element to insert: ");
    scanf("%d",&element);
    if(n==MAX){
        printf("Array is full!\n");
    }else{
        arr[n]=element;
        n++;
    }
}

void insert_at_position(){
    int element;
    int position;
    printf("Enter element to insert: ");
    scanf("%d",&element);
    printf("Enter position to insert: ");
    scanf("%d",&position);
    if(n==MAX){
        printf("Array is full!\n");
    }else if(position<0 || position>n){
        printf("Invalid position!\n");
    }else{
        for(int i=n;i>position;i--){
            arr[i]=arr[i-1];
        }
        arr[position]=element;
        n++;
    }
}

void delete_at_beginning(){
    if(n==0){
        printf("Array is empty!\n");
    }else{
        for(int i=0;i<n;i++){
            arr[i]=arr[i+1];
        }
        n--;
    }
}


void delete_at_ending(){
    if(n==0){
        printf("Array is empty!\n");
    }else{
        arr[n]=0;
        n--;
    }
}

void delete_at_position(){
    int position;
    printf("Enter position to insert: ");
    scanf("%d",&position);
    if(n==0){
        printf("Array is empty!\n");
    }else{
        for(int i=position;i<n;i++){
            arr[i]=arr[i+1];
        }
        n--;
    }
}



void traversal(){
    if(n==0){
        printf("Array is empty!");
    }else{
        for(int i=0;i<n;i++){
            printf("%d ",arr[i]);
        }
    }
}

void searching(){
    int element;
    printf("Enter element to search: ");
    scanf("%d",&element);
    for(int i=0;i<n;i++){
        if(arr[i]==element){
            printf("%d found at %d index.",element,i);
        }
    }
}



int main() {
    int option;
    while (1) {
        printf("\nChoose operation: \n");
        printf("1. Insert at Beginning\n2. Insert at Ending\n3. Insert at Position\n4. Delete at Beginning\n");
        printf("5. Delete at Ending\n6. Delete at Position\n7. Traversal\n8. Search\n");
        scanf("%d", &option);
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
    return 0;
}
