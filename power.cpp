#include<iostream>
#include<string>

using namespace std ;

int main()
{
int n,p,s=1;
cout <<"enter your number \n";
cin>>n;
cout <<"enter your power\n";
cin>>p;
int i=1;
while( p>=i)
{
    s*=n;
    i++;

}
cout<<n<<"**"<<p<<"="<<s;
            return 0;
}
