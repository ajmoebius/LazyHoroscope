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
  
  char fl = first[0];
  char ll = last[last.length()-1];
  
  cout<<"Welcome, "<<first[0]<<"."<<last[0]<<"., here is your fortune..."<<endl; 
  
  //tell fortune
  lucky = first.length();
 
  cout<<"Your lucky number is "<<lucky<<"."<<endl;

  if(fl=='A'||fl=='a'||fl=='E'||fl=='e'||fl=='I'||fl=='i'||fl=='O'||fl=='o'||fl=='U'||fl=='u')
  {
   cout<<"You are destined to be famous."<<endl;
  }
  else
  {
   cout<<"You should keep a low profile."<<endl;
  }

  
  if(ll=='A'||ll=='a'||ll=='E'||ll=='e'||ll=='I'||ll=='i'||ll=='O'||ll=='o'||ll=='U'||ll=='u')
  {
   cout<<"You have already met your true love."<<endl;
  }

  cout<<"Have a nice day."<<endl;
  return 0;
}
