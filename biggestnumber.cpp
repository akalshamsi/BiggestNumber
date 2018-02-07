//Author:
#include<iostream>

using namespace std; //so we don't need the prefix std::

int main()
{
  
int first;

int second;

int Biggest;




  cout<<"Please enter a whole number:\n";
  
  cin>>first;
  
  cout<<"Please enter another whole number:\n";
cin>>second;

if(first > second){Biggest = first;}
else {Biggest = second;}

  cout<<"Of those two numbers, the biggest is: "<<Biggest<<endl;

cout<<"Thank you for playing."<<endl;

  return 0;
}
