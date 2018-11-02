#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    vector <int> as{};
    vector <int> nk{};
    int i=1;
    while(i<=n)
    {
        as.push_back(0);
        cin>>as[i];
        i++;
    }
    i=1;
    while(i<=k)
    {
        nk.push_back(0);
        cin>>nk[i];
        i++;
    }
    i=1;
    vector <int> m1;
    int l=as[1];
    int r=as[as.size()];
    while(i<nk.size())
    {
        int m;
       while(fabs(l-r)>0)
        {
             m=(l+r)/2;
            if(fabs(nk[i]-fabs(m))<fabs(nk[i]+fabs(m)))
            l=m;
            else r=m;
        }
       m1.push_back(m); 
    }
     i=1;
    for(auto i:m1)
    {cout<<m1[i];}
}
