#include<iostream>
using namespace std;

long factorial(long n);
void permute(long n,long r);
void comb(long n,long r,long m);

int main()
{
	int n,r;
	char cho;
	do
	{
	cout<<"\n\n                  *********  PERMUTATION AND COMBINATION  ********\n\n";
	for(int z=0;z<79;z++)
		cout<<"^";
	cout<<"\n\n Enter the value of n....";
	cin>>n;
	cout<<"\n Enter the value of r....";
	cin>>r;
	long fact_n=factorial(n);
	long fact_r=factorial(r);
	long m=n-r;
	long fact_m=factorial(m);
	cout<<"\n\n The value of nPr = ";
	permute(fact_n,fact_m);
	cout<<"\n\n The value of nCr = ";
	comb(fact_n,fact_r,fact_m);
	cout<<"\n\n Do you want to continue..? (y/n) : ";
	cin>>cho;
	}while(cho=='y'||cho=='Y');
}

long factorial(long n)
{
	if(n==0)
		return 1;
	else
		return n*factorial(n-1);
}

void permute(long n,long r)
{
	long m;
	m=n/r;
	cout<<m;
}

void comb(long n,long r,long m)
{
	long k;
	k=n/(r*m);
	cout<<k;
}
