#include<iostream>
using namespace std;

int main()
{
int ch=0;
int a=0, b=0;
bool flag = 1;

while(flag)
{

cout<<"Enter value for a: "<<endl;
cin>>a;
cout<<"Enter Value for b: "<<endl;
cin>>b;

cout<<"MENU"<<endl;
cout<<"1.Addition"<<endl;
cout<<"6.Exit"<<endl;
cout<<"Enter Your Choice: ";
cin>>ch;

switch(ch)
{

case 1:
	cout<<"Addition of a and b is: "<<a+b<<endl;
	break;
case 6:
	flag=0;
	break;
}

}

return 0;

}
