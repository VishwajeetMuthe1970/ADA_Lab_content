#include<stdio.h>
#include<conio.h>
int main(){
int i, j, n,temp=0, a[20];

printf("Enter the elements of array: ");
scanf("%d",&n);

for(i=0; i<n; i++){
    scanf("%d", &a[i]);
}

for(i=0; i<n-1;i++){
    for(j=0; j<n-1-i; j++){
        if(a[j]<a[j+1]){
            temp = a[j];
            a[j] = a[j+1];
            a[j+1] = temp;
        }
    }
}

for(i=0; i<n; i++){
    printf("%d\t", a[i]);
}
return 0;
}
