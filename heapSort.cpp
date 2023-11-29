#include <iostream>

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

void heapify(int arr[], int n, int i)
{
	int largest  = i; //initialize largest as the root
	int l = 2 * i + 1;
	int r = 2 * i + 2;
	//if left child is larger than root
	if(l < n && arr[l] > arr[largest]) largest = l;
	if(r < n && arr[r] > arr[largest]) largest = r;
	if(largest != i)
	{
		swap(arr[i], arr[largest]);
		//recursively heapify the affected subtree
		heapify(arr, n, largest);
	}
}	

void heapSort(int arr[], int n)
{
	//building heap
	for(int i = n / 2 - 1; i >= 0; i--) 
	{
		heapify(arr, n, i);	
	}
	
	//extract elements from the heap one by one
	for(int i = n - 1; i >= 0; i--)
	{
		swap(arr[0], arr[i]); // swapping root with the leaf node
		heapify(arr, i, 0); // call max heapify on the reduced heap	
		
		printArray(arr, n);
	}	
}	
	
int main (){
	int arr[] = {5, 1, 3, 4, 10};
	int n = sizeof(arr) / sizeof(arr[0]);
	
	heapSort(arr, n);
	
	return 0;
}
