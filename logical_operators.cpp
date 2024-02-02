#include <iostream>

using namespace std;

int main()
{
    int a;
    cout<<"enter number of a:";
    cin>>a;
    
    int b;
    cout<<"enter the number of b:";
    cin>>b;
    cout<<((a>b)&&(b<a))<<endl;
    cout<<((a==b)||(b<=a))<<endl;
    cout<<(a!=a);
    return 0;
}
