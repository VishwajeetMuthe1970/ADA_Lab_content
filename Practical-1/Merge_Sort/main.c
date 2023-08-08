#include <stdio.h>
#include <stdlib.h>
// Function declaration.
void mergesort(int a[], int, int);
void combine(int a[], int, int, int);
int main()
{
    int a[20], i, low, high, n;
    //clrscr();

    // Taking input from the user or array.
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    // Setting the  variables.
    low=0;
    high=n-1;

    mergesort(a,low,high);

    printf("The sorted elements");

    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }

    getch();
}
void mergesort(int a[20], int low, int high){
    int mid;

    void combine(int a[20], int low, int mid, int high);

    if(low<high){
        mid=(low+high)/2;
        mergesort(a,low,mid);
        mergesort(a,mid+1,high);
        combine(a,low,mid,high);
    }
}

void combine(int a[20], int low, int mid, int high){
int i,j,k, t[20];
i=k=low;
j=mid+1;

while((i<=mid) && (j<=high)){
    if(a[i]<a[j]){
        t[k] = a[i];
        i++;
        k++;
    }
    else{
        t[k] = a[j];
        j++;
        k++;
    }
}
    while(i<=mid){
        t[k] = a[i];
        i++;
        k++;
    }
    while(j<=high){
        t[k] = a[j];
        j++;
        k++;
    }
    for(k=low;k<=high;k++){
        a[k] = t[k];
    }
}

