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

//insert sort
void sort()
{
	for(int k=1;k<(sizeof(arr)/sizeof(int));k++)
	{
		for(int j=k;j>0;j--)
			if(arr[j] < arr[j-1])
				{
					swap(arr[j],arr[j-1]);
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
