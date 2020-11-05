#include<iostream>
#include<string>

using namespace std ;

int main()
{
int x=1,f,a=1;
cout<<"enter your facturial \n";
cin>>f;
while (x<=f){
    a*=x;
    x++;

}
cout<<"factorial of "<<f<<" is "<<a<<endl;

            return 0;
}
