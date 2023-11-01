#include<iostream>
using namespace std;

int main()
{
	int num1=1;
	int num2=1;
	int num3=1;
	
	//Using nested while
	while(num1<=5)
	{
		//This loop will print spaces
		while(num2<=5-num1)
		{
			cout<<" ";
			num2++;
		}
		num2=1;
		//This loop will print numbers
		while(num3<=num1)
		{
			cout<<num1;
			num3++;
		}
		cout<<endl;
		num3=1;
		num1++;
	}
	return 0;
}

//Thank you:)
