#include<iostream>
#include<string>

using namespace std ;

int main()
{
   double x1,x2,x3;
    char c;
    do{
            cout<<"enter 3 numbers \n";
            cin>>x1>>x2>>x3;
            cout<<"the sum of 3 numbers is "<<x1+x2+x3<<endl;
            cout<<"for calcul another 3 numbers enter (a) and (n) for exit \n";
            cin>>c;
         }while(c=='a');
 return 0;
}
