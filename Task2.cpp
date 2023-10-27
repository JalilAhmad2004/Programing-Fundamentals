/*M.Jalil Ahmad
  22i-1635
  Assignment#3 (q2)*/

#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
	int num;
	int color;
	
	//Using for loop
	for(int i=1;i<=5;i++)
	{
		cout<<"Enter a number:";
		cin>>num;
		//Using if condition
		if(num>0 || num<30)
		{
			//Using for loop
			for(int rnum=1;rnum<=num;rnum++)
			{
				srand(time(0));
				color=rand()%8+30;  //taking random color
				
				//Output in random color
				cout<<"\033[1;"<<color<<"m"<<"*";
			}
			
		}
		//if user enters an invalid input
		else
		{
			cout<<"Please enter number between range 0-30"<<endl;
		}
	cout<<endl;
	//Returning back to default color
	cout << "\033[0m";
	}
	
	return 0;
}

//Thank you:)
