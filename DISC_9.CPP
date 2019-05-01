#include<iostream>
using namespace std;
int main()
{
	int n,i,j,temp=0,flag=0,com=0,arr[100];
	char cho;
	do
	{
	cout<<"\n\n                           ********  INSERTION SORT  ********";
	cout<<"\n\n ";
	for(int z=0;z<79;z++)
		cout<<"^";
	cout<<"\n\n Enter the number of elements in array...";
	cin>>n;
	cout<<"\n Enter the elements in array...";
	for(i=0;i<n;i++)
		cin>>arr[i];
	cout<<"\n The elements in the array are...";
	for(i=0;i<n;i++)
		cout<<arr[i]<<"  ";
	cout<<"\n\n The array during insertion sort....";
	cout<<"\n\n";
	for(i=0;i<n;i++,com++)
	{
		temp=arr[i];
		j=i-1;
		while((temp<arr[j]) && (j>=0))
		{
			arr[j+1]=arr[j];
			j=j-1;
		}
		arr[j+1]=temp;
		for(int y=0;y<n;y++)
			cout<<arr[y]<<"  ";
		cout<<endl;
		com+=flag;
	}
	cout<<"\n\n The array after sorting is....";
	for(i=0;i<n;i++)
		cout<<arr[i]<<"  ";
	cout<<"\n\n The number of comparisons required are...."<<com;
	cout<<"\n\n Do you want to continue...? (y/n) :";
	cin>>cho;
	}while(cho=='y'||cho=='Y');
}

