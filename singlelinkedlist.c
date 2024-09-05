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

void delete_at_beginning(){
struct node*temp=head;
if(head==NULL){
printf("list is empty");
}else{
head=temp->link;
}
}

void delete_at_ending(){
struct node*temp=head;
struct node*temp1;
if(head==NULL){
printf("list is empty");
}else{
while(temp->link!=NULL){
temp1=temp;
temp=temp->link;
}
temp1->link=NULL;
free(temp);
}
}

void delete_at_pos(){
struct node* temp=head;
struct node*temp1;
int pos;
if(head==NULL){
printf("list is empty");
}else{
printf("enter position: ");
scanf("%d",&pos);
for(int i=0;i<pos;i++){
temp1=temp;
temp=temp->link;
}
temp1->link=temp->link;
free(temp);
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


void searching(){
struct node*temp=head;
int value;
printf("enter value to search: ");
scanf("%d",&value);
if(head==NULL){
printf("List is null");
}else{
while(temp->link!=NULL){
temp=temp->link;
if(temp->data==value){
printf("%d  was in the SSL..",value);
}}}}


int main(){
int option;
while(1){
printf("\nChoose operation: \n1.insert_at_beginning\n2.insert_at_ending\n3.insert_at_position\n4.delete_at_beginning\n5.delete_at_ending\n6.delete_at_position\n7.traversal\n8.search\n");
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
delete_at_beginning();
break;
case 5:
delete_at_ending();
break;
case 6:
delete_at_pos();
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
