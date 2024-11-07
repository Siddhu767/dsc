#include<stdio.h>
void merge(int [],int ,int ,int );
void partition(int [],int ,int );



void main(){
int a[30],i,n;
printf("\nEnter no. of elements : ");
scanf("%d",&n);
printf("\nEnter Elements:\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
partition(a,0,n-1);
printf("\nsorted elements are: \n");
for(i=0;i<n;i++)
printf("%d ",a[i]);
printf("\n");
}



void partition(int a[],int first,int last)
{
int mid;
if(first<last)
{
mid=(first+last)/2;
partition(a,first,mid);
partition(a,mid+1,last);
merge(a,first,mid,last);
}}



void merge(int a[],int first,int mid,int last)
{
int b[30],i,j,k,l,size;
i=first;
j=mid+1;
k=0;
size=last-first+1;
while(i<=mid&&j<=last)
{
if(a[i]<a[j])
b[k++]=a[i++];
else
b[k++]=a[j++];
}
while(i<=mid)
b[k++]=a[i++];
while(j<=last)
b[k++]=a[j++];
for(l=0; l<size; l++){
a[first+l]=b[l];
}}
