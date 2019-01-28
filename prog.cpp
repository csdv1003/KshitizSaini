#include <iostream>

using namespace std;

int main()
{
  int choice;
  cout<<"1. Addition"<<endl<<"2. Subtraction"<<endl<<"3. Multiplication"<<endl<<"4. Division"<<endl;
  cout<<endl<<endl;
  cout<<"Enter you choice : "<<endl;
  cin>>choice;
  switch(choice)
  {
    case 1:
      cout<<"Addition";
    case 2:
      cout<<"Subtraction";
    case 3:
      cout<<"Multiplication";
    case 4:
      cout<<"Division";
  }
  return 0;
}
