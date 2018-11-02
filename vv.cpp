#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>
using namespace std;
int main()
{
	int h,m;
	char g,d;
	cin>>h>>g>>m>>d;
	if(d=='a')
	{h=h;}
	else
	{h=h+12;}
	cout<<h<<":"<<m;
}
