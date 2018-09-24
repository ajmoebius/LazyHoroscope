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
  cout<<"What is your first name?"<<endl;
  cin>>first;
  cout<<"What is your last name?"<<endl;
  cin>>last;
  
  char fl = first[0];
  char ll = last[last.length()-1];
  
  cout<<"Welcome, "<<first[0]<<"."<<last[0]<<"., here is your fortune..."<<endl; 
  
  //tell fortune
  lucky = first.length();
 
  cout<<"your lucky number is "<<lucky<<"."<<endl;

  if(fl=='A'||fl=='a'||fl=='E'||fl=='e'||fl=='I'||fl=='i'||fl=='O'||fl=='o'||fl=='U'||fl=='u')
  {
   cout<<"you are destined to be famous!"<<endl;
  }
  else
  {
   cout<<"you should keep a low profile."<<endl;
  }

  
  if(ll=='A'||ll=='a'||ll=='E'||ll=='e'||ll=='I'||ll=='i'||ll=='O'||ll=='o'||ll=='U'||ll=='u')
  {
   cout<<"you have already met your true love."<<endl;
  }

  cout<<"have a good day!"<<endl;
  return 0;
}
