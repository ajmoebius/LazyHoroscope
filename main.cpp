//Authors: Aaron Moebius
#include<iostream>
#include<string>

using namespace std;

int main()
{
  //declare variables
  string first;
  string last;
  int lucky;
  //get user input
  cout<<"Enter first name."<<endl;
  cin>>first;
  cout<<"Enter last name."<<endl;
  cin>>last;
  
  cout<<"Welcome, "<<first[0]<<"."<<last[0]<<"., here is your fortune..."<<endl; 
  
  //tell fortune
  lucky = first.length();
  
  cout<<"Your lucky number is "<<lucky<<"."<<endl;

  return 0;
}
