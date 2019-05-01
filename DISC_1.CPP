#include<iostream>
using namespace std;
#include<math>
void duplicate(int arr[],int &a)
{
	for(int i=0;i<a;i++)
	{
		int temp=arr[i];
		for(int j=i+1;j<a;j++)
		{
			if(arr[j]==temp)
			{
				for(int k=j;k<a;k++)
					arr[k]==arr[k+1];
				a--;
			}
		}

	}
	for(int z=0;z<a;z++)
		cout<<arr[z]<<"  ";
	cout<<"} ";
}
void check(int arr[],int n,int num)
{
	int temp=0,i;
	for(i=0;i<n;i++)
	{
		if(arr[i]==num)
		{
			temp=1;
			cout<<"\n Element found at...."<<(i+1);
			break;
		}
	}
	if(temp==0)
		cout<<"\n Element not found ....";
}
void power(int arr[],int n)
{
	int size=pow(2,n);
	cout<<"\n\n Number of elements in power set of set A is..."<<size;
	cout<<"\n";
	cout<<"\n\n Power set is....";
	cout<<"{ ";
	cout<<"{ "<<"null"<<" }"<<" ";
	for(int i=1;i<size;i++)
	{

		int num=i,ar[100];
		for(int j=0;j<n;j++)
		{
			ar[j]=num%2;
			num/=2;
		}
		cout<<"{ ";
		for(int k=0;k<n;k++)
		{
			if(ar[k]==1)
				cout<<arr[k]<<"  ";
		}
		cout<<"}";
		cout<<"  ";

	}
	cout<<"}";
}


void main()
{
	clrscr();
	int arr[100],n,num;
	char ch='y';
	cout<<"\n\n                    ******** PROGRAM 1 **********\n\n        Showing cardinality,checking of member and power set ";
	cout<<"\n\n";
	for(int x=0;x<80;x++)
		cout<<"^";
	do
	{
		cout<<"\n\n";
		cout<<" Enter the number of elements you want to enter in the set A...";
		cin>>n;
		for(int i=0;i<n;i++)
			cin>>arr[i];
		cout<<"\n\n The elements in the set A are...{ ";
		duplicate(arr,n);
		cout<<"\n\n The cardinality of the set A is..."<<n;
		cout<<"\n\n Enter the number you want to check whether it is in set A or not....";
		cin>>num;
		check(arr,n,num);
		cout<<"\n\n                  ***** Power set of the given set A *****";
		power(arr,n);
		cout<<"\n\n Do you want to continue (y/n) :";
		cin>>ch;
	}while(ch=='y'||ch=='Y');
	getch();


}
