#include <iostream>
#include <stdio.h>
using namespace std;

void printArray(int arr[], int n)
{
	for(int i= 0; i < n; i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

void quickSort(int arr[], int left, int right)
{
	int i = left;
	int j = right;
	
	int temp; 
	int pivot = (arr[(left + right) / 2]);
	
	while(i <= j)
	{
		while(arr[i] < pivot) i++;
		while(arr[j] > pivot) j--;
		
		if(i <= j)
		{
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
			i++;
			j--; 
		}
	}
	
	printArray(arr, 10);
	cout<<endl;
	
	if(left < j) quickSort(arr, left, j);
	if(i < right) quickSort(arr, i, right);
	
	return;
}
int main()
{	
	int arr[] = {2, 17, -4, 42, 9, 26, 11, 3, 5, 28};
	int sizeArr = sizeof(arr) / sizeof(arr[0]);
	
	cout<<"unsorted: ";
	printArray(arr, sizeArr);
	
	quickSort(arr, 0, sizeArr - 1);
	
	cout<<"sorted: ";
	printArray(arr, sizeArr);
	
	return 0;
}
