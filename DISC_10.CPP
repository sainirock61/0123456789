#include<iostream>
using namespace std;

int arr[10]={0};

void swap(int x,int y)
{
	int temp=arr[x];
	arr[x]=arr[y];
	arr[y]=temp;
}

void printArray(int length)
{
	for(int i=0;i<length;i++)
	{
		cout<<"  ";
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

void permute(int k,int length)
{
	if(k==0)
		printArray(length);
	else
	{
		for(int i=k-1;i>=0;i--)
		{
			swap(i,k-1);
			permute(k-1, length);
			swap(i,k-1);
		}
	 }
}

int main()
{
	char ch;
	do
	{
	cout<<"\n\n          Program to find the permutations of a given string of numbers ";
	cout<<"\n\n";
	for(int z=0;z<79;z++)
		cout<<"^";
	cout<<"\n\n Enter the number of Elements : ";
	int n;
	cin>>n;
	cout<<"\n Enter the numbers : ";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"\n The entered numbers are...";
	printArray(n);
	cout<<"\n Total number of permutations of the entered numbers are...";
	int p=1;
	int t=n;
	for(int y=n;y>0;y--,t--)
		p*=t;
	cout<<p;
	cout<<"\n\n Permutations of the given numbers are...\n";
	permute(n,n);
	cout<<"\n\n Do you want to continue...? (y/n) :";
	cin>>ch;
	}while(ch=='y'||ch=='Y');


}
