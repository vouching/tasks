#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include<vector>
using namespace std;
int main()
{
    int a,d,counter;
    counter=0;
    cin>>a;
    int g;
    int i=0;
    vector <int> as;
    while(i<a)
    {
       cin>>g;
     
       as.push_back(g);
       
      
       i++;
    }
    i=1;
    cin>>d;
    g=as.size();

    i=0;
    while(i<g)
    {
        if(as[i]==d)
        {
            counter++;
        }
        i++;
    }
    cout<<counter;
}
