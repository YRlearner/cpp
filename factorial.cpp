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
/*#include<iostream>
#include<string>

using namespace std ;

int main()
{
    int n,s=1;
    cout<<"hello human,insert number for calcul \n";
    cin>>n;
    for(int i=1;i<=n;i++){
        s*=i;



    }
      cout << s<<endl;
            return 0;
}
*/
