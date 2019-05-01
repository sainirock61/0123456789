#include<iostream>
using namespace std;

int main()
{

	int n,i;
	char ch;
	do
	{
	cout<<"\n\n     *****  PROGRAM TO CHECK WHETHER A GIVEN SET OF VERTICES FORMS \n   AN EULER PATH /EULER CIRCUIT  ***** ";
	cout<<"\n\n";
	for(int z=0;z<79;z++)
		cout<<"^";
	cout<<"\n\n Enter the number of vetrices :  ";
	cin>>n;
	cout<<"\n Enter the adjacency matrix ";
	int arr[10][10];

	for(i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>arr[i][j];
		}
		cout<<endl;
	}

	cout<<"\n The degree of the vertices are :\n ";
	int deg[10];
	for(i=0;i<n;i++)
		deg[i]=0;

	int y=0;
	for(i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			deg[y]+=arr[y][j];
		}
	 y++;
	}
	for(i=0;i<n;i++)
	{
		cout<<"\n Degree of vertex "<<(i+1)<<" is  : "<<deg[i] <<endl;
	}

	int even=0;
	int odd=0;

	for(i=0;i<n;i++)
	{
		if(deg[i]%2==0)
			++even;
		else
			++odd;
	}

	cout<<"\n Vertices with even degree : "<<"  "<<even;
	cout<<"\n\n Vertices with odd degree : "<<"  "<<odd;

	if(even==n)
	{
		cout<<"\n\n Euler circuit exists for given graph...";
	}
	else if(even==n-2 && odd==2)
	{
		cout<<"\n\n Euler path exists for given graph but Euler circuit doesn't exists...";
	}
	else
	{
		cout<<"\n\n Both Euler path and Euler circuit doesn't exists....";
	}
	cout<<"\n\n Do you want to continue...(y/n) : ";
	cin>>ch;
	}while(ch=='y'||ch=='Y');


}
