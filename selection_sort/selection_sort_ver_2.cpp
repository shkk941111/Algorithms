#include <iostream>
using namespace std;
void swap();
void printo();
int arr[] = {5,7,2,4,1,3,9,8,6};
int main()
{
	//int arr[] = {5,7,2,4,1,3,9,8,6};
	
	for(int i=0;i<(sizeof(arr)/sizeof(int)-1);i++)
	{
		int minPos = i;//The position of the i-th minimum value
		
		//sort
		for(int j=i+1;j<(sizeof(arr)/sizeof(int));j++)
		{
				minPos = arr[j] < arr[minPos] ? j : minPos;
		}
		cout << "\n";
		cout << "minPosition is: " << minPos << "\n";//Print the location of the minimum value

		swap(arr[i],arr[minPos]);
		cout << "After the " << i << "-th loop, the contents of the array are: \n" ;
		
		//Print sorted array		
		printo();
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
	for(int i=0;i<(sizeof(arr)/sizeof(int));i++)
		cout << arr[i] << " ";
	cout << "\n";
}
