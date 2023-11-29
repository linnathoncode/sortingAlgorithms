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

void selectionSort(int arr[], int n)
{
	printArray(arr, n);
	
	int i, j, min_idx;
	
	for(i = 0; i < n-1; i++)
	{
		min_idx = i;
		for(j = i+1; j < n; j++)
		{
			if(arr[j]< arr[min_idx]) min_idx = j;
		}
		swap(&arr[min_idx], &arr[i]);
		printArray(arr, n);
	}
}

int main (){
	int arr[] = {2, 4, 6, 0, 1, 3, 12, 9, 5, 7, 13};
	int n = sizeof(arr) / sizeof(arr[0]);
	
	selectionSort(arr, n);
	printArray(arr, n);
	
	return 0;
}
