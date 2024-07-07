#include <iostream>
using namespace std;
int main()
{
    cout << "Enter two numbers: "<< endl;
    int a,b;
    cin >>a>>b;
    if(a>b)
    {
        cout<<a<<" is larger";
    }
    else{
        cout <<b<< " is larger";
    }
}