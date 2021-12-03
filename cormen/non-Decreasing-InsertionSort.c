#include <stdio.h>

int main(){

	int i, j, key, size;

	printf("\nEnter the size of Array : ");
 	scanf("%d", &size);

	int Array[size];
	printf("Enter Array elements : ");

	for (int k=1; k<=size; k++)
	{
		scanf("%d", &Array[k]);
	}

	for (j=2; j<=size; j++)
	{
		key = Array[j];            //?
		i = j-1;                   //changes in A[i] will reflect on A[j], as i=j-1 ?
		while (i > 0 && Array[i] > key){
		Array[i+1] = Array[i];
		i = i-1;
		Array[i+1] = key;}
	}

	printf("The Sorted Array : ");

	for (int k=1; k<=size; k++)
	{
		printf("%d ", Array[k]);
	}

	printf("\n\n");
	}
	
