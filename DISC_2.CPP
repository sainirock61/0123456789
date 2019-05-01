#include<iostream>
using namespace std;

void duplicate(int arr[],int &a)
{
	for(int i=0; i<a; i++)
	{
		int temp=arr[i];
		for(int j=i+1;j<a;j++)
		{
			if(arr[j]==temp)
			{
				for(int k=j;k<a;k++)
					arr[k]=arr[k+1];
				a--;
			}
		}
	}
}

class Set
{
	public:
		int size;
		int arr[100];
		void enter();
		void display();
		int subset(Set &);
		void setdifference(Set);
		void complement(Set);
		void symmetricdiff(Set);
		void cartesianpro(Set);
};
void Set::enter()
{
	cout<<"\n\n Enter the size of the set ...";
	cin>>size;
	cout<<"\n Enter the elments in the set...";
	for(int i=0;i<size;i++)
		cin>>arr[i];
	duplicate(arr,size);
}
void Set:: display()
{
	cout<<"\n The elements of the set are....{ ";
	for(int i=0;i<size;i++)
		cout<<arr[i]<<"  ";
	cout<<"}";
}

int Set:: subset(Set &set)
{
	int temp=0;
	for(int i=0;i<size;i++)
	{
		for(int j=0;j<set.size;j++)
		{
			if(arr[i]==set.arr[j])
				temp++;
		}
	}
	if(temp==set.size-1)
		return 0;
	else
		return 1;
}

void unint( Set &s1,Set &s2)
{
	Set s;
	s.size=s1.size+s2.size;
	for(int i=0;i<s1.size;i++)
	{
		s.arr[i]=s1.arr[i];
	}
	for(int j=s1.size,k=0;j<s.size,k<s2.size;j++,k++)
	{
		s.arr[j]=s2.arr[k];
	}
	cout<<"\n\n Union of the sets : { ";
	duplicate(s.arr,s.size);
	for(int x=0;x<s.size;x++)
		cout<<s.arr[x]<<"  ";
	cout<<"}";
	cout<<"\n\n Intersection of the sets : { ";
	int temp=0;
	for(int u=0;u<s1.size;u++)
	{
		for(int v=0;v<s2.size; v++)
		{
			if(s1.arr[u]==s2.arr[v])
			{
				cout<<s1.arr[u]<<" ";
				temp=1;
			}
		}


	}
	if(temp<1)
		cout<<" No element in the intersection... ";
	cout<<"}";
}

void Set::complement(Set u)
{
	cout<<"\n The complement of the set is = { ";
	int j,temp=0;
	for(int i=0;i<u.size;i++)
	{
		temp=0;
		for(j=0;j<size;j++)
		{
			if(arr[j]==u.arr[i])
			{
				temp=1;
				break;
			}
		}

		if(temp==0)
			cout<<u.arr[i]<<"  ";

	}

	cout<<"}";
}


void Set::setdifference(Set s)
{
	int k=0,flag=0,ar[100];
	for(int i=0;i<size;i++)
	{
		for(int j=0;j<s.size;j++)
		{
			if(arr[i]==s.arr[j])
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		ar[k++]=arr[i];
		flag=0;
	}
	if(k>0)
	{       cout<<"{ " ;
		for(int x=0;x<k;x++)
			cout<<ar[x]<<" ";
		cout<<"}";
	}
	else
		cout<<"{ "<<(char)237<<" }";
}

void Set:: symmetricdiff(Set s)
{
	int i,j,y=0,temp=0, ar[100];
	for(i=0;i<size;i++)
	{
		while(j<s.size)
			if(arr[i]==s.arr[j++])
			{
				temp=1;
				break;
			}
		if(temp==0)
			ar[y++]=arr[i];
		j=temp=0;
	}
	i=0;
	for(j=0;j<s.size;j++)
	{
		while(i<size)
			if(s.arr[j]==arr[i++])
			{
				temp=1;
				break;
			}
		if(temp==0)
			ar[y++]=s.arr[j];
		i=temp=0;
	}
	cout<<"\n\n Symmetric difference of the two sets is = { ";
	for(int x=0;x<y;x++)
		cout<<ar[x]<<"  ";
	cout<<"}";
}

void Set :: cartesianpro(Set s)
{
	cout<<"\n\n The Cartesian product of the two sets = { ";
	for(int i=0;i<size;i++)
		for(int j=0;j<s.size;j++)
		{
			cout<<"( "<<arr[i]<<","<<s.arr[j]<<" )";
			if(j!=s.size-1)
				cout<<",";
		}
	cout<<" }";
}

int main()
{
	int ch;
	char cho;
	Set set1,set2,U;
	do
	{
	cout<<"\n\n                     *********  MAIN MENU  ***********";
	cout<<"\n\n";
	for(int z=0;z<80;z++)
		cout<<"^";
	cout<<"\n\n 1.To check whether one set is subset of other...";
	cout<<"\n\n 2.Union and intersection of two sets...";
	cout<<"\n\n 3.Complement of a set...";
	cout<<"\n\n 4.Set difference of a set...";
	cout<<"\n\n 5.Symmetric difference of a set...";
	cout<<"\n\n 6.Cartesian product of sets...";
	cout<<"\n\n 7.Exit...";
	cout<<"\n\n Enter your choice...";
		cin>>ch;
	if(ch<7)
	{
	cout<<"\n\n Enter the set 1 :";
	set1.enter();
	set1.display();
	cout<<"\n\n Enter the set 2 :";
	set2.enter();
	set2.display();
	}
	switch(ch)
	{
		case 1:
			cout<<"\n\n Two options are available....\n\n 1.Set1 is a subset of set2...\n\n 2.Set2 is a subset of set1...";
			cout<<"\n\n Enter your choice..";
			cin>>ch;
			if(ch==1)
			{
				if(set1.subset(set2)==0)

					cout<<"\n\n Set1 is a subset of Set2..";

				else

					cout<<"\n\n Set1 is not a subset of Set2...";

			}

			else if(ch==2)
			{
			       if(set2.subset(set1)==0)
			       {
					cout<<"\n\n Set2 is a subset of Set1..";
			       }
				else
					cout<<"\n\n Set2 is not a subset of Set1...";
			}
			else
				cout<<"\n Please enter a valid choice !!!";
			break;
		case 2:
			unint(set1,set2);
			break;
		case 3:
			cout<<"\n\n Provide the universal set...";
			U.enter();
			U.display();
			cout<<"\n\n Two options are available....\n\n 1.Complement of Set1...(U-Set1)\n\n 2.Complement of Set2...(U-Set2)";
			cout<<"\n\n Enter your choice...";
			cin>>ch;
			if(ch==1)
			{
				set1.complement(U);
			}
			else if(ch==2)
			{
				set2.complement(U);
			}
			else
				cout<<"\n Please enter a valid choice !!!";
			break;
		case 4:
			cout<<"\n\n Two options are available...\n\n 1.Set1-Set2\n\n 2.Set2-Set1";
			cout<<"\n\n Enter your choice...";
			cin>>ch;
			cout<<"\n Former set - Latter set = ";
			if(ch==1)
			{
				set1.setdifference(set2);
			}
			else if(ch==2)
			{
				set2.setdifference(set1);
			}
			else
				cout<<"\n Please enter a valid choice !!!";
			break;
		case 5:
			set1.symmetricdiff(set2);
			break;
		case 6:
			cout<<"\n\n Two options are available...\n\n 1.set1 X set2 \n\n 2.set2 X set1";
			cout<<"\n\n Enter your choice...";
			cin>>ch;
			if(ch==1)
			{
				set1.cartesianpro(set2);
			}
			else if(ch==2)
			{
				set2.cartesianpro(set1);
			}

			else
				cout<<"\n Please enter a valid choice !!!";
			break;
		case 7:
			exit(0);
		default:
			cout<<"\n\n INVALID CHIOICE !!!";

	}
	cout<<"\n\n Do you want to continue..?(y/n): ";
	cin>>cho;
	}while(cho=='y'||cho=='Y');


}
