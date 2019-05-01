#include<iostream>
int main()
{
	char ch;
	int arr[][];
	int i,j,n;

	cout<<"  \n\n PROGRAM TO REPRESENT GRAPHS USING THE ADJACENCY MATRICES AND \n CHECKING FOR COMPLETE GRAPH";
	cout<<"\n\n";
	for(int z=0;z<79;z++)
                cout<<"^";
	cout<<"\n\n Enter the number of vertices...";
	cin>>n;
	cout<<"\n\n Enter the elements of the matrix...";
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>arr[i][j];
		}
	cout<<endl;
	}
	cout<<"\n\n The adjacency matrix of the graph is...\n\n";
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<arr[i][j]<<"   ";
		}
		cout<<endl;
	}

  //To check whether the graph is a complete graph  or not
	int c=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i!=j && arr[i][j]==0)
				++c;
		}
	}
	if(c==0)
		cout<<"\n\n The given graph is a complete graph...";
	else
		cout<<"\n\n The given graph is not a complete graph...";
	cout<<"\n\n Do you want to continue...(y/n) :";
	cin>>ch;
	}while(ch=='y'||ch=='Y');

}

