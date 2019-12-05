#include<iostream>
#include<exception>
#include<cstdlib>
using namespace std;

int main(int argc, char *argv[])
{
int ch=0;
int a=0, b=0;

a = atoi(argv[1]);
b = atoi(argv[2]);

ch = atoi(argv[3]);
cout<<ch;
switch(ch)
{

case 1:
	cout<<"Addition of a and b is: "<<a+b<<endl;
	break;
case 2:
    cout<<"Subtraction of a and b is: "<<a-b<<endl;
    break;
case 3:
    cout<<"Multiplication of a and b is: "<<a*b<<endl;
    break;
case 4:
    try{
        cout<<"Division of a and b is: "<<a/b<<endl;
    }
    catch(exception e)
    {
        cout<<e.what();
    }
    break;
}


return 0;

}
