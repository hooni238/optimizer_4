#include <bits/stdc++.h>
using namespace std;
const int N = 119651+100;
long double x[N], y[N], z[N];

long double dist(long double a,long double b,long double c,long double d,long double e,long double f)
{
	long double anis = (a-d)*(a-d);
	anis += (b-e)*(b-e);
	anis += (c-f)*(c-f);
	return sqrt(anis);
}

int main()
{
	for (int i = 0; i < 119651; ++i)
		cin >> x[i] >> y[i] >> z[i];
	//cout << dist (x[0], y[0], z[0], x[1], y[1], z[1]);
	//return 0;
	long double dis = 144;
	bool flag = false;
	for (int i = 0; i < 119651; ++i)
	{
		//if (i%1000==0)
		//	cout << float(i)/119651*100 << '%'<<endl;
		flag = false;
		for (int j = i+1; j < 119651; ++j)
			if ( dist(x[i],y[i],z[i],x[j],y[j],z[j]) < dis)
			{
				flag = true;
				break;
			}
		if (!flag)
		{
			cout << i << endl;
		}
	}

}
