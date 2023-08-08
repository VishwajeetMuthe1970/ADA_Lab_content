#include<stdio.h>
#include<conio.h>
void main()
{
	int i , j , n, temp;
	printf("Enter The Value of n : ");
	scanf("%d",&n);
	
	int a[n];

	for(i=0;i<n;i++)
	{
		printf("Enter a[%d] : ",i);
		scanf("%d",&a[i]);
	}

	for(i=1; i<n; i++){
		temp = a[i];
		j=i-1;
		
		while((j>=0) && (a[j]>temp)){
			a[j+1] = a[j];
			j--;
		}
		
		a[j+1] = temp;
	}

	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
