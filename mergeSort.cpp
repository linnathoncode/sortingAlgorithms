#include <iostream>
using namespace std;


void printArray(int arr[], int size)
{
	for(int i = 0; i < size; i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

void merge(int arr[], int l, int m, int r)
{
	int i, j, k;
	int n1 = m - l + 1;
	int n2 = r - m;
	
	int L[n1], R[n2];
	
	for(i = 0; i < n1; i++)
	{
		L[i] = arr[l + i];
	}
	
	for(j = 0; j < n2; j++)
	{
		R[j] = arr[j + 1 + m];
	}
	
	i = 0;
	j = 0;
	k = l;
	while(i < n1 && j < n2)
	{
		if(L[i] <= R[j])
		{
			arr[k] = L[i];
			i++;
		}
		else
		{
			arr[k] = R[j];
			j++;
		}
		k++;
	}
	
	while(i < n1)
	{
		arr[k] = L[i];
		i++;
		k++;
	}
	
	while(j < n2)
	{
		arr[k] = R[j];
		j++;
		k++;
	}
}

void mergeSort(int arr[], int l, int r)
{
	if(l < r)
	{
		int m = l+(r - l)/2;
		
		mergeSort(arr, l, m);
		mergeSort(arr, m+1, r);
		
		merge(arr, l, m, r);
	}

}

int main()
{
	int arr[] = {7,3,5,8,2,9,4,15,6};
	
	//sizeof function returns in bytes
	//so to find the actual size of an array you either have to
	//divide it by its first index's size or type's size
	int size_arr = sizeof(arr) / sizeof(int);
	
	mergeSort(arr, 0, size_arr - 1);
	printArray(arr, size_arr);
	
	return 0;
}
