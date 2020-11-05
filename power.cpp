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
/*
#include<iostream>
#include<string>

using namespace std ;

int main()
{
    int n,p,s=1;
    cout<<"hello human,insert number for calcul \n";
    cin>>n;
    cout<<"insert power\n ";
    cin>>p;
    for(int i=1;i<=p;i++){
        s*=n;



    }
      cout << s<<endl;
*/
