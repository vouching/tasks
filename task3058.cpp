#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
    int i,cond;
    double a;
    i=2;
    int g= (int) sqrt(a);
    while(cond==1)
    {
        if(g%i==0)
        {
            cout<<i<<endl;
            cond=1;
        }
        i++;     
    }
}