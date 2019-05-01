#include<iostream>
using namespace std;
int main()
{
	int i,j,temp,com=0,flag=0,arr[100],n;
	char cho;
	do
	{
	cout<<"\n\n                     ******** BUBBLE SORT ********\n\n ";
	for(int z=0;z<79;z++)
		cout<<"^";
	cout<<"\n\n Enter the size of the array....";
	cin>>n;
	cout<<"\n Enter the elements in the array....";
	for(i=0;i<n;i++)
		cin>>arr[i];
	cout<<"\n The elements in the array are...";
	for (i=0;i<n;i++)
		cout<<arr[i]<<"  ";
	cout<<"\n\n";
	cout<<" Array during bubble sort....\n\n";
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
				for(int y=0;y<n;y++)
					cout<<arr[y]<<"   " ;
				cout<<endl;
				flag++;
				com+=flag;
			}
		}


	}
	cout<<"\n\n Array after sorting....";
	for(i=0;i<n;i++)
		cout<<arr[i]<<"  ";
	cout<<"\n\n Comparisons required were...."<<com;
	cout<<"\n\n Do you want to continue..? (y/n) :";
	cin>>cho;
	}while(cho=='y'||cho=='Y');
}
