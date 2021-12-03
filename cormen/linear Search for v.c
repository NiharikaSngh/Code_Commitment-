#include <stdio.h>

int main()
{
	int i, size, v;
	printf ("\nEnter the size of Array and another integer : ");
	scanf ("%d %d", &size, &v);
	int Array[size];
	printf ("Enter the Array elements : ");

	for (int k=0; k<size; k++)
	{
		scanf("%d", &Array[k]);
	}

	for (i=0; i<size; i++)
	{
		if (Array[i] == v)
		{
			printf ("v is found at the index %d in the Array\n\n", i);
			break;
		}

	}

	if (i==size)
	{
		printf ("v is found at the index NIL in the Array\n\n");
	}
	return 0;
	}
	

