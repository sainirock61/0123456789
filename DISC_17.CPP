#include<iostream>
using namespace std;

int main()
{

	int arr[10][10];
	int i,j,n;
	char ch;
	do
	{
	cout<<"\n\n      ******  PROGRAM TO COMPUTE IN-DEGREE AND OUT-DEGREE OF EACH VERTEX ******";
	cout<<"\n\n";
	for(int z=0;z<79;z++)
		cout<<"^";
	cout<<"\n\n Enter the vertices of the directed graph : ";
	cin>>n;
	cout<<"\n Enter the elements of the matrix : ";
	cout<<"\n";
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>arr[i][j];
		}
		cout<<endl;
	}
	cout<<"\n The adjacency matrix of the directed graph is : ";
	cout<<endl;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<"\t\t\t"<<arr[i][j]<<"    ";
		}
		cout<<endl;
	}

  //To calculate the out-degree   of the graph
	int outdeg=0;
	int v=1;
	cout<<"\n\n            ********  CALCULATION OF OUT-DEGREE OF THE VERTICES  ******* \n\n";
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			outdeg+=arr[i][j];
		}
	cout<<"\n The Out-Degree of "<<v<<" vertex is : "<<outdeg;
	++v;
	outdeg=0;
	}

  //to calculate the in-degree
	int indeg=0;
	int p=1;
	cout<<"\n\n            ********  CALCULATION OF IN-DEGREE OF THE VERTICES  ******* \n\n";
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			indeg+=arr[j][i];
		}
	cout<<"\n In-Degree of "<<p<<" vertex is : "<<indeg;
	++p;
	indeg=0;
	}
	cout<<"\n\n Do you want to continue...(y/n) : ";
	cin>>ch;
	}while(ch=='y'||ch=='Y');


}

