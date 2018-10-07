#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
	int a,i,k,k1,k3;
	cin>>a;
	i=0;
	k=0;
	k1=1;
	while(i<a)
	{
		k3=k1;
		k1=k3+k;
		k=k3;
		i++;
	}
	cout<<k;
}
