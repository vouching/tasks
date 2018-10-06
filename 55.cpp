#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
	double a,s,k;
	cin>>a;
	cin>>s;
	k=0;

	while(a<s)
	{
		k++;
		a=a*1.1;
	}
	cout<<k+1;
}
