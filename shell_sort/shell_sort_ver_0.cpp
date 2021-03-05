#include <iostream>
using namespace std;
void sort();
void swap();
void printo();

int arr[] = {7,5,17,2,15,4,3,11,1,9,13,8,6};

int main()
{
	sort();
	printo();
}

//shell sort
void sort()
{
	for(int h=4;h>0;h/=2)//gap
	{
		for(int k=h;k<(sizeof(arr)/sizeof(int));k++)
			{
				for(int j=k;j>h-1;j-=h)
					if(arr[j] < arr[j-h])
						{
							swap(arr[j],arr[j-h]);
						}		
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
