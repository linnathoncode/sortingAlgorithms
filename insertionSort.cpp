#include <stdio.h>
#include <iostream>
#include <math.h>

using namespace std;

void printArray(int arr[], int n)
{
	int i;
	for(i = 0; i < n; i++)
	{
		cout<<arr[i]<< ' ';
		
	}
	cout<<endl;
}

void insertionSort(int arr[], int n)
{
	printArray(arr, n);

	int i, j, key;
	
	for(i = 1; i < n; i++)
	{
		key = arr[i];
		j = i -1;
		while(j >= 0 && arr[j]> key)
		{
			arr[j+1] = arr[j];
			j = j-1;
		}
		arr[j+1] = key;
		printArray(arr, n);
	}
}


int main (){
	int arr[] = {2, 4, 6, 0, 1, 3, 12, 9, 5, 7, 13};
	int n = sizeof(arr) / sizeof(arr[0]);
	
	insertionSort(arr, n);
	printArray(arr, n);
	
	return 0;
}
