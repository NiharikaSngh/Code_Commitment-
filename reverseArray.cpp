/* Iterative C++ program to reverse an array */
   #include <bits/stdc++.h>
   using std::cout;

/* Function to reverse array from start to end */
void reverseArray(int arr[], int start, int end)
{
	while (start < end)
	{
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}
}	

/* Utility function to print an array */
void printArray(int arr[], int size)
{
   for (int i = 0; i < size; i++)
   cout << arr[i] << " ";

   //cout << endl;
}

/* Driver function to test above functions */
int main()
{
    int *a,*b,i=1,p;  //b for storing address of 1st number
    
	cout << "Enter Array elements (-1 to stop reading) : " ;
 
    a=(int*)malloc(sizeof(int));
    using namespace std;
    cin>>a[0];
 
    while(a[i-1]!=-1) //read until -1 is entered
    {
        i++;
        a=(int*)realloc(a,sizeof(int)*i);
        b=a;
        cin>>a[i-1];
    }
    cout << "\n" << "The Array Stored in the memory (Now) :" ;
    
	for (p=0;p<i-1;++p) 
    {
        cout << " " << a[p] ;
    }
	cout << "\n\n" << "The Size of the Dynamic Array is : " << i-1 ;
	
	// Function calling
	reverseArray (a, 0, i-2) ;   
	
	cout << "\n\n" << "The Reversed Array : " ;
	
	// To print the reversed array
	printArray (a, i-1) ;
	return 0 ;
}

