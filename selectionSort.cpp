#include <iostream>
using namespace std;

void swap(int *xp, int * yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void selectionSort(int arr[], int size)
{
	int i, j, min_index;
	
	//traverse through every element but the last one
	for(i = 0; i < size - 1; i++)
	{
		min_index = i;
		//finding the min element
		//compare the selected min element with the
		//every remaining element on the list 
		//find the one thats smallest among them
		for(j = i + 1; j < size; j++)
		{	
			if(arr[j] < arr[min_index])
			{
				min_index = j;
			}
		}
		swap(&arr[min_index], &arr[i]);
	}
}

void printArray(int arr[], int size)
{
	for(int i = 0; i < size; i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int main()
{
	int arr[] = {7,3,5,8,2,9,4,15,6};
	
	//sizeof function returns in bytes
	//so to find the actual size of an array you either have to
	//divide it by its first index's size or type's size
	int size_arr = sizeof(arr) / sizeof(int);
	
	selectionSort(arr, size_arr);
	printArray(arr, size_arr);
}
