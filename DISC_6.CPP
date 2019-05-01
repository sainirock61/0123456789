#include<iostream.h>
#include<conio.h>
void towofhan(int n,char a,char b,char c)
{
	if(n==1)
	{
		cout<<"\n Move disk "<<n<<" from "<<a<<" to "<<c<<endl;
		return;
	}
	towofhan(n-1,a,c,b);
	cout<<"\n Move disk "<<n<<" from "<<a<<" to "<<c<<endl;
	towofhan(n-1,b,a,c);
}
void main()
{
	 clrscr();
	 int  n;
	 char ch='y';
	 do
	 {
	 cout<<"\n\n                  ********* TOWER OF HANOI **********\n\n";
	 for(int z=0;z<80;z++)
		cout<<"^";
	 cout<<"\n Enter the number of disks...";
	 cin>>n;
	 towofhan(n,'A','B','C');
	 cout<<"\n\n Do you want to continue ?..(y/n):";
	 cin>>ch;
	 }while(ch=='y'||ch=='Y');
	 getch();
}