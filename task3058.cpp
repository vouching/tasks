#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
    int i,cond;
    int a;
    i=2;
    cin>>a;
    while(i<=a)
    {
        if(a%i==0)
        {
            cout<<i<<endl;
            cond=1;
            break;
        }
        i++;    
        if(cond==1)i=a+1; 
    }
}