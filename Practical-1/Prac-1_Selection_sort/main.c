#include<stdio.h>
#include<stdlib.h>
void main()
{
  int a[20], min,i,j,n, temp=0;
  printf("Please enter the size of array: ");
  scanf("%d", &n);

for(i=0;i<n;i++){
scanf("%d", &a[i]);
}
for(i=0;i<=n-2;i++){
    for(j=i+1; j<=n-1;j++){
        if(a[j]<a[min]){
            min = j;
        }
     }
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
}

  for(i=0;i<n;i++){
    printf("%d\t",a[i]);
  }
}

/*
#include <stdio.h>
#include<stdlib.h>
void swap(int *x,int *y)
{
 int temp=*x;
 *x=*y;
 *y=temp;
}
void SelectionSort(int A[],int n)
{
 int i,j,k;

 for(i=0;i<n-1;i++)
 {
 for(j=k=i;j<n;j++)
 {
 if(A[j]<A[k])
 k=j;
 }
 swap(&A[i],&A[k]);
 }
}
int main()
{
 int A[]={11,13,7,12,16,9,24,5,10,3},n=10,i;

 SelectionSort(A,n);

 for(i=0;i<10;i++)
 printf("%d ",A[i]);
 printf("\n");

}
*/
