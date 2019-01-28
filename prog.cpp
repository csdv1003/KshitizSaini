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
      break;
    case 2:
      cout<<"Subtraction";
      break;
    case 3:
      cout<<"Multiplication";
      break;
    case 4:
      cout<<"Division";
      break;
  }
  return 0;
}
