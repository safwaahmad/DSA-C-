#include<iostream>
using namespace std ;
int main ()
{
	int size;
	cout<<"Enter size of array: \t";
	cin>>size;

	int arr[size];
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<size-1;i++)
{
		
     for(int j=i+1;j<size;j++)
	{
		if(arr[j]<arr[i])
		{
			int temp=arr[j];
			arr[j]=arr[i];
			arr[i]=temp;
		}
	}
}
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<"\t";
	}
	cout<<endl;
	return 0;
}
