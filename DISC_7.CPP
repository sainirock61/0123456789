#include<iostream>
using namespace std;
int binary_search(int arr[],int,int,int);
void sort(int arr[],int);
void main()
{
	char ch;
	do
	{
	int arr[100],size,ele,beg,end;
	cout<<"\n\n                      ************  BINARY SEARCH  **************\n\n";
	for(int z=0;z<80;z++)
		cout<<"^";
	cout<<"\n Enter the size of the array....";
	cin>>size;
	cout<<"\n Enter the elements in the array...";
	for(int i=0;i<size;i++)
		cin>>arr[i];
	cout<<"\n The elements in the array are...";
	for(int j=0;j<size;j++)
		cout<<arr[j]<<"  ";
	cout<<"\n\n The array after sorting is :";
	sort(arr,size);
	cout<<"\n\n Enter the element you want to search....";
	cin>>ele;
	beg=0;
	end=size-1;
	binary_search(arr,ele,beg,end);
	cout<<"\n\n Do you want to continue...(y/n) :";
	cin>>ch;
	}while(ch=='y'||ch=='Y');
}

int binary_search(int arr[],int num,int beg,int end)
{
       int mid;
       if (beg>end)
       {
		cout<< "\n\n Number is not found...";
		return 0;
	}
	else
	{
		mid= (beg+end)/2;
		if(arr[mid]==num)
		{
			cout<< "\n\n Number is found at " << mid << " index \n";
			return 0;
		}
		else if (num > arr[mid])
		{
			binary_search(arr, num, mid+1, end);
		}
		else if(num < arr[mid])
		{
			binary_search(arr, num, beg, mid-1);
		}
	}

}
void sort(int arr[], int n)
{

	int  temp=0;
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n-1-i; j++)
		{

			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	cout<<"\n\n The sorted array is...";
	for(int y=0; y<n; y++)
		cout<<arr[y]<<"  ";
}
