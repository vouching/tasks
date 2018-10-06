#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
    int a,i,cond;
    i=2;
    while(cond==1)
    {
        if(a%i==0)
        {
            cout<<i<<endl;
            cond=1;
        }
        i++;
        
    }
}