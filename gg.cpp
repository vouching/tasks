#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>
using namespace std;
int main()
{
	int a;
	int s;
	int d;
	int f;
	cin>>a>>s>>d>>f;
	vector <int> as;
	as.push_back(a);
	as.push_back(s);
	as.push_back(d);
	as.push_back(f);
	sort(as.begin(),as.end());
	cout<<as[0];
}
