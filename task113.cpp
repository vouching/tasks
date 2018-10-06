#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
    int a,g;
    double i;
    cin>>a;
    i=1;
    while(i<=a)
    {
        g= (int) sqrt(i);
        if(g==sqrt(i)) cout<<g*g<<endl;
        i++;
    }
}