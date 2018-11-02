#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <iomanip>
using namespace std;
void step (int n, double a)
{
	double g=a;
	int i=2;
	while(i<=n)
	{
		a=a*g;
		i++;
	}
	cout<<a;
}
int main()
{
int n;
double a;
cin>>a>>n;
step(n,a);

}
