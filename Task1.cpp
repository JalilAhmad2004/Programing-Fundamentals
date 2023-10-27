/*M.Jalil Ahmad
  22i-1635
  Assignment#3 (q1)*/

#include<iostream>
using namespace std;

int main()
{
  int subject;
  int score;
  int average;
  int sum=0;
  int greater=0;           

  //Using foe loop
  for(subject=1;subject<=5;subject++)
  {
	cout<<"Enter score of suject "<<subject<<":";
	cin>>score;
	
	//Checking how many scores are greater then 80
	if(score>80)
	{
		greater+=1;
	}
	
	//Using if statement to sum all the scores entered by user
	if(score>=0 && score<=100)
	{
		sum+=score;
	}
	else
	{
		cout<<"Invalid score-score must be in range 0-100"<<endl;
		cout<<"Enter score of suject "<<subject<<":";
		cin>>score;
	
	}
  }
  //Calculating average
  average=(sum/5);
  cout<<"Average of score:"<<average<<endl;
  
  cout<<"There are "<<greater<<" scores which are more than 80"<<endl;
  
  return 0;
}
