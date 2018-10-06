#include <iostream>
//#include <string>
#include <cmath>
///#include <algorithm>
using namespace std;
int main()
{
    int a,b,c;
    cin>>b;
    c=0;
    for (a=1;a<=sqrt(b);a++)
    {
    
        if(b%a==0){c=c+2;}      
    }
    int g= (int) sqrt(b); 
    if(g==sqrt(b))cout<<c-1;
    else
    cout<<c;
}