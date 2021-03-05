#include <iostream>
using namespace std;

int main()
{
	int arr[] = {5,7,2,4,1,3,9,8,6};
	
	for(int i=0;i<(sizeof(arr)/sizeof(int));i++)
	{
		int minPos = i;//第i次最小值所在位置
		//排序
		for(int j=i+1;j<(sizeof(arr)/sizeof(int));j++)
		{
			if(arr[j] < arr[minPos])
				minPos = j;	
		}
		cout << "minPosition is: " << minPos << "\n";//打印最小值所在位置
		//交换
		int temp = arr[i];
		arr[i] = arr[minPos];
		arr[minPos] =temp;
	}
	//打印排序后数组
	for(int i=0;i<(sizeof(arr)/sizeof(int));i++)
		cout << arr[i] << " ";
	cout << "\n";
}
