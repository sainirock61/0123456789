#include<iostream>
using namespace std;
class Relation
{
	public:
		int odr,arr[100][100];
		Relation()
		{
			 odr=2;

		}
		void order()
		{
			cin>>odr;
		}
		void enter();
		void display();
		int reflexive();
		int symmetric();
		int anti_symmetric();
		int transitive();
};

void Relation ::enter()
{
	for(int i=0;i<odr;i++)
		for(int j=0;j<odr;j++)
			cin>>arr[i][j];
}
void Relation ::display()
{
	for(int i=0;i<odr;i++)
	{
		for(int j=0;j<odr;j++)
			cout<<"\t\t\t"<<arr[i][j]<<"  ";
		cout<<"\n";
	}
}
int  Relation ::reflexive()
{
	int flag=0;
	for(int i=0;i<odr;i++)
		if(arr[i][i]==1)
			flag++;

	if(flag==odr)
		return 1;
	else
		return 0;
}
int Relation ::symmetric()
{
	int flag;
	for(int i=0;i<odr;i++)
	{
		flag=0;
		for(int j=0;j<odr;j++)
		{
			if(arr[i][j]==1 && arr[j][i]==1)
				flag++;
		}
	}
	if(flag==odr)
		return 1;
	else
		return 0;
}

int Relation ::anti_symmetric()
{
	int flag;
	for(int i=0;i<odr;i++)
	{
		flag=0;
		for(int j=0;j<odr;j++)
		{
			if(arr[i][j]==1 && arr[j][i]==1 && i!=j)
				flag=1;
		}
	}
	if(flag==1)
		return 1;
	else
		return 0;
}

int  Relation::transitive()
{
	int flag;
	for(int i=0;i<odr;i++)
	{
		flag=0;
		for(int j=0;j<odr;j++)
			for(int k=0;k<odr;k++)
				if(arr[i][j]==1 && arr[j][k]==1 && arr[i][k]==1)
					flag=1;
	}
	if (flag==1)
		return 1;
	else
		return 0;
}

int main()
{

	Relation r;
	char ch;
	do
	{
	cout<<"\n\n                       ********** Program 3  ***********";
	cout<<"\n\nTo check whether a relation is reflexive,symmetric,anti-symmetric and transitive ";
	cout<<"\n\n";
	for(int z=0;z<80;z++)
		cout<<"^";
	cout<<"\n Enter the order : ";
	r.order();
	cout<<"\n Enter the relation in the form of 0-1 matrix :";
	r.enter();
	cout<<"\n The relation is : ";
	cout<<"\n";
	r.display();
	cout<<"\n\n         Checking for Reflexive, Symmetric, Anti-Symmetric and Transitive   \n\n";
	for(int o=0;o<80;o++)
		cout<<"^";
	if(r.reflexive()==1)
		cout<<"\n Relation is Reflexive";
	else if(r.reflexive()==0)
		cout<<"\n Relation is not reflexive";
	cout<<"\n\n";
	if(r.symmetric()==1)
		cout<<"\n Relation is Symmetric";
	else if(r.symmetric()==0)
		cout<<"\n Relation is not Symmetric";
	cout<<"\n\n";
	if(r.anti_symmetric()==1)
		cout<<"\n Relation is Anti-Symmetric";
	else if(r.anti_symmetric()==0)
		cout<<"\n Relation is not Anti-Symmetric";
	cout<<"\n\n";
	if(r.transitive()==1)
		cout<<"\n Relation is Transitive";
	else if(r.transitive()==0)
		cout<<"\n Relation is not Transitive";
	cout<<"\n\n           Checking for Equivalance Relation and Partially Order Relation \n\n";
	for(int y=0;y<80;y++)
		cout<<"^";
	if(r.reflexive()==1 && r.symmetric()==1 &&r.transitive()==1)
		cout<<"\n\n Relation is Equivalance....";
	if(r.reflexive()==1 && r.anti_symmetric()==1 &&r.transitive()==1)
		cout<<"\n\n Relation is Partially Order....";
	if(!(r.reflexive()==1 && r.symmetric()==1 &&r.transitive()==1) && !(r.reflexive()==1 && r.anti_symmetric()==1 &&r.transitive()==1))
		cout<<"\n\n Nither Equivalance relation nor Partially order relation....";
	cout<<"\n\n Do you want to continue..? (y/n) :";
	cin>>ch;
	}while(ch=='y'||ch=='Y');

}










