#include <iostream>
using namespace std;
void sort();
void swap();
void printo();

int arr[] = {7,5,2,4,3,1,9,8,6};

int main()
{
	sort();
	printo();
}

//bubble sort
void sort()
{
	for(int k=(sizeof(arr)/sizeof(int));k>0;k--)
	{
		for(int j=0;j<k-1;j++)
			if(arr[j] > arr[j+1])
				{
					swap(arr[j],arr[j+1]);
				}		
	}		
}

//exchange the position
void swap()
{
	int p,q,temp;
	temp = arr[p];
	arr[p] = arr[q];
	arr[q] =temp;
}

//Print sorted array
void printo()
{
	cout << "\n";
	for(int i=0;i<=(sizeof(arr)/sizeof(int)-1);i++)
		cout << arr[i] << " ";
	cout << "\n";
}
