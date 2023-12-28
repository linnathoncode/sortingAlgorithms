#include <iostream>

using namespace std;

void printArray(int s[], int len)
{
	for(int i = 0; i < len; i++)
	{
		cout<<s[i]<< " ";
	}
	cout<<endl;
}

void countSort(int s[], int len, int maxTerm)
{	
	int index = 0;
	int tempArray[maxTerm + 1];
	 for (int i = 0; i < maxTerm + 1; i++)
    {
        tempArray[i] = 0;
    }
	for(int i = 0; i < len; i ++)
	{
		tempArray[s[i]]++;
	}
	
	for(int i = 0; i < maxTerm + 1; i++)
	{
		while(tempArray[i] != 0)
		{
			s[index] = i;
			tempArray[i]--;
			index++;
		}
	}
	printArray(s, len);
}

int findMax(int s[], int len)
{	
	int maxTerm = 0;
	for(int i = 0; i < len; i++)
	{
		if(s[i] > maxTerm)
		{
			maxTerm = s[i];
		}
	}
	return maxTerm;
}

int main()
{
	int s[] = {3, 6, 4, 1, 3, 4, 1, 4, 3, 5, 3, 7, 1 ,2, 6, 6 ,6};
	int len = sizeof(s) / sizeof(s[1]);

	cout<<"unsorted array: ";
	printArray(s, len);
	int maxTerm = findMax(s, len);
	countSort(s, len, maxTerm);
	printArray(s, len);
}
