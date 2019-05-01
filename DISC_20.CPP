#include<iostream>
using namespace std;
int main()
{
	char ch;
	do
	{
		cout<<"\n\n                Program to find the number of leaves in a full m-ary tree,\n                           with i internal vertices";
		cout<<"\n\n";
		for(int z=0;z<79;z++)
			cout<<"^";
		int n,i,m,leaves;
		cout<<"\n\n Enter the value of m, m = ";
		cin>>m;
		cout<<"\n\n Enter the value of i, i = ";
		cin>>i;
		n=(m*i + 1);
		cout<<"\n\n Total number of vertices, n = "<<n<<endl;
		leaves =((m-1)*n + 1)/m;
		cout<<"\n\n Number of leaves : "<<leaves<<endl;
		cout<<"\n\n Do you want to continue...? (y/n) : ";
		cin>>ch;
	}while(ch=='y'||ch=='Y');

}
