#include <stdio.h>

int main()
{
	int a, b;
	a = 1; b = 10;
	for (int i=1; i<=4; i++){
	b = a - 1;
	a = i;}
	printf ("\nb : %d\n", b);
	int A[4], B[]={1,2,3,4}, C[4];
	for (int k=-1; k<7; k++){
	       printf("B[%d] : %d ", k, B[k]);
	}	       
	printf ("\n");
	printf("Enter 4 elements in A");
	for (int k=1; k<=4; k++){
	       scanf("%d", &A[k]);
	}	       
	for (int k=-3; k<=8; k++){
	       printf("A[%d] : %d ", k, A[k]);
	}	       
	printf ("\n");
	printf("Enter 4 elements in C");
	for (int k=5; k<=8; k++){
	       scanf("%d", &C[k]);
	}	       
	for (int k=1; k<=8; k++){
	       printf("C[%d] : %d ", k, C[k]);
	}	       
	printf ("\n");
	
	for (int i = 1; i<=4; i++){
		int j = i + 5;
		A[i] = j;
		printf ("\nA[%d] : %d ", i, A[i]);
		A[j] = i;
		printf ("\nA[%d] : %d ", j, A[j]);}
	printf ("\n");

	for (int k=1; k<=10; k++){
	       printf("A[%d] : %d ", k, A[k]);
	}	    
	printf ("\n\n");
}

