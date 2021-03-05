#include <iostream>
using namespace std;

int main()
{
	int arr[] = {5,7,2,4,1,3,9,8,6};
	
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
		
		//exchange the position
		int temp = arr[i];
		arr[i] = arr[minPos];
		arr[minPos] =temp;
		
		cout << "After the " << i << "-th loop, the contents of the array are: \n" ;
		
		for(int k=0;k<(sizeof(arr)/sizeof(int));k++)
			cout << arr[k] << " ";
			cout << "\n";		
			
	}
	
	//Print sorted array
	cout << "\n";
	for(int i=0;i<(sizeof(arr)/sizeof(int));i++)
		cout << arr[i] << " ";
	cout << "\n";
	
}





