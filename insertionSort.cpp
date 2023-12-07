#include <iostream>
using namespace std;

void insertionSort(int arr[], int size)
{
	int i, j, key;
	
	//starting from the second index because
	//there is no element to compare with the first index
	for(i = 1; i < size; i++)
	{	
		//key is the index thats being added to the 'sorted list'
		key = arr[i];
		//j is the index that going to be compared with the new element
		j = i - 1;
		//until j reaches the start of the list and
		//key finds its place in the sorted list
		//swap j with the key element
		while(j >= 0 && arr[j] > key)
		{
			arr[j + 1] = arr[j];
			j = j - 1;
 		}
 		arr[j + 1] = key;
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
	
	insertionSort(arr, size_arr);
	printArray(arr, size_arr);
}
