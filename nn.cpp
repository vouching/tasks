#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
	int a,s,k;
	cin>>a;
	
	k=0;
	s=1;
	while(s<a)
	{
		k++;
		s*=2;
	}
	cout<<k;
}
