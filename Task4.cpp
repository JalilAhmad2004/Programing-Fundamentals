/*M.Jalil Ahmad
  22i-1635
  Assignment#3 (q4)*/

#include<iostream>
#include<iomanip>        
using namespace std;

int main()
{
  int hash1=1;
  int hash2=1;
  
  //Using while loop
  //Loop will complete 6 iterations
  while(hash1<=6)
  {
	cout<<"#";
	//Using nested while to print space
	while(hash2<=hash1-1)
	{
		cout<<" ";
		hash2++;
	}
	hash2=1;
	cout<<"#";
	hash1++;
	cout<<endl;
  }
  cout<<endl;
  return 0;
}


//Thank you:)
