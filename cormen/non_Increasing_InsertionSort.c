#include <stdio.h>

int main()
{
	int i, j, key, size;

	printf ("\nEnter the size of Array : ");
	scanf ("%d", &size);

	int Array[size];
	printf ("Enter Array elements : ");

	for (int k=0; k<size; k++)
	{
		scanf ("%d", &Array[k]);
	}

	for (j = size - 2; j>=0; j--)
	{
		key = Array[j];
		i = j + 1;

		while (i < size && Array[i] > key)
		{
			Array[i-1] = Array[i];
			i = i + 1;
			Array[i-1] = key;
		}
	}

	printf ("The sorted Array : ");

	for (int k=0; k<size; k++)
	{
		printf ("%d ", Array[k]);
	}

	printf ("\n\n");
}

