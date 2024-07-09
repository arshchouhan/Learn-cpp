#include<iostream>
using namespace std;
int main()
{
    int n,c=0;
    cout << "Enter the number: ";
    cin >> n;
    if(n==0 || n==1)
    {
        cout <<"Not a prime Number";
    }
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    if(c>2)
    {
        cout <<"Not a prime Number";
    }
    else{
        cout << "Prime Number";
    }
    return 0;
}