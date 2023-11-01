#include<iostream>
using namespace std;

int main()
{
	int num1;
	int num2;
	
	//Using for loop
	for(num1=1;num1<=40;num1++)
	{
		cout<<"-";
	}
	cout<<endl;
	//Using for loop
	for(num1=1;num1<=10;num1++)
	{
		cout<<"_-^-";
	}
	cout<<endl;
	//Using for loop
	for(num1=1;num1<=2;num1++)
	{
		//using nested loop
		for(num2=1;num2<=9;num2++)
		{
			cout<<num2<<num2;
			if(num2==9)
			{
				cout<<"00";
			}
		}
	}
	cout<<endl;
	//Using for loop
	for(num1=1;num1<=40;num1++)
	{
		cout<<"-";
	}
	cout<<endl;
	
	return 0;
}

//Thank you:)
