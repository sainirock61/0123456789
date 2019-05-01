#include<iostream>
using namespace std;
int series(int);
void validate( int &a)
{
	while(1)
	{
		if(cin.fail()||a<0)
		{
			cin.clear();
			cin.ignore(100,'\n');
			cout<<"\n\n Wrong input, please enter a positive integer... ";
			cin>>a;
		}
		else
		break;
	}
 }
int main()
{
	int n,ch;
	char cho;
	top:
	for(int t=0; t<80; t++)
		cout<<"*";
	textcolor(GREEN);
	cprintf("\n                                  *** MAIN MENU ***");
	cout<<endl<<endl;
	for(int z=0; z<80; z++)
		cout<<"^";
	cout<<"\n\n\n 1. Enter 1 to print the ' FIBONACCI SERIES '  ";
	cout<<"\n\n 2. EXIT ";
	cout<<"\n\n Enter your choice.....";
	cin>>ch;
	validate(ch);
	if(ch==1)
	{
		cout<<endl<<endl;
		textcolor(YELLOW);
		cprintf("               ***   PROGRAM TO PRINT THE FIBONACCI SERIES ***  ");
		cout<<endl<<endl;
		cout<<"\n\n Enter the number of terms of the fibonacci series....";
		cin>>n;
		validate(n);
		cout<<"\n\n The fibonacci series upto "<<n<< " term is  ";
		for(int i=0; i<n; i++)
		       cout<<	series(i)<<"  ";
	}
	else if(ch==2)
		exit(0);
	else if(ch!=1 || ch!=2)
		cout<<"\n\n !!!  INVALID CHOICE  !!!";
	cout<<" \n\n Do you want to continue (y/n)  :";
	cin>>cho;
	cout<<endl;
	 if(cho=='y' || cho=='Y')
		goto top;


}
int series(int n)
{
	if(n==0)
		return 0;
	if(n==1)
		return 1;
	else
		return (series(n-1)+series(n-2));


}
