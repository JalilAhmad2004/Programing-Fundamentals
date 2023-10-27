/*M.Jalil Ahmand
  22i-1635
  Assignment#3 (q3)*/

#include<iostream>
using namespace std;

int main()
{
	int num1;
	int num2=1;
	int num3=1;
	
	//Using nfor loop
	for(num1=1;num1<=6;num1++)
	{
		//This loop will print back slash
		while(num2<=num1-1)
		{
			cout<<"\\\\";
			num2++;
		}
		num2=1;
		//This loop will print mark
		while(num3<=7-num1)
		{
			cout<<"!!";
			num3++;
		}
		num3=1;
		//This loop will print mark
		while(num3<=6-num1)
		{
			cout<<"!!";
			num3++;
		}
		num3=1;
		//This loop will print slash
		while(num2<=num1-1)
		{
			cout<<"//";
			num2++;
		}
		num2=1;
		cout<<endl;
	}
	
	return 0;
}
