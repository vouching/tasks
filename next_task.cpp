#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
	int s,a;
	cin>>a;
	s=2;
	while(s<a)
	s=s*2;
	if(s==a)cout<<"YES";
	else cout<<"NO";
}
