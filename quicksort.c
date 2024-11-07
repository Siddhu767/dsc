#include <stdio.h>

void swap(int* a, int* b) {
int temp = *a;
*a = *b;
*b = temp;
}

int par(int arr[], int low, int high) {
int p = arr[low];
int i = low;
int j = high;
while (i < j) {
while (arr[i] <= p && i <= high - 1) {
i++;
}
while (arr[j] > p && j >= low + 1) {
j--;
}
if (i < j) {
swap(&arr[i], &arr[j]);
}
}
swap(&arr[low], &arr[j]);
return j;
}

void qs(int arr[], int low, int high) {
if (low < high) {
int pi = par(arr, low, high);
qs(arr, low, pi - 1);
qs(arr, pi + 1, high);
}
}

int main() {
int n;
printf("Enter Size of an array: ");
scanf("%d",&n);
int arr[n];
printf("Enter elements:\n" );
for(int i=0;i<n;i++){
int x;
scanf("%d",&x);
arr[i]=x;
}
qs(arr, 0, n - 1);
for (int i = 0; i < n; i++){
printf("%d ", arr[i]);
}
return 0;
}
