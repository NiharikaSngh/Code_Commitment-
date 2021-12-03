#include <stdio.h>

int main ()
{
	int size, i, j, key, l;

	printf ("\nEnter the size of Array : ");
	scanf ("%d", &size);

	if (size <=0){
		return 0;}

	int Array[size];
	printf ("Enter Array elements : ");

	for (int k=1; k<=size; k++)
	{
		scanf("%d", &Array[k]);
	}

	for (i = 1; i <= size; i++)
	{
		j = i + 1;
		key = Array [i];
		while (j<=size)
		{
			if (Array[j] < key)
			{
				key = Array [j];
				l = j;
			}
			j++;
		}
		Array [l] = Array [i];
		Array [i] = key;
	}

	printf ("The Sorted Array : ");

	for (int k=1; k<=size; k++)
	{
		printf("%d ", Array[k]);
	}
	printf ("\n\n");
}	
		


