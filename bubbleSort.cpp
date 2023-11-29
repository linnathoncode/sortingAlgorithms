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
void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void bubbleSort(int arr[], int n)
{
	printArray(arr, n);
	
	int i, j;
	
	for(i = 0; i < n-1; i++)
	{
		for(j = 0; j < n - i - 1; j++)
		{
			if(arr[j]> arr[j+1]) swap(&arr[j], &arr[j+1]);
		}
		
		printArray(arr, n);
	}
}

int main (){
	int arr[] = {13, 2, 4, 6, 0, 1, 3, 12, 9, 5, 7};
	int n = sizeof(arr) / sizeof(arr[0]);
	
	bubbleSort(arr, n);
	printArray(arr, n);
	
	return 0;
}
