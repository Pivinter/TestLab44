#include "pch.h"
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double x, xp, xk, dx, R, y;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "r = "; cin >> R;

	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "R" << " |" << endl;
	cout << "---------------------------" << endl;
	x = xp;
	while (x <= xk)
	{
		if (x <= -6)
			y = R;
		else
			if (-6 < x && x <= -R)
				y = (R + x) / (-R + 6);
			else
				if (-R < x && x <= 0)
					y = R - sqrt(R * R - (x + R) * (x + R));
				else
					if (0 < x && x <= R)
						y = sqrt(R * R - x * x);
					else
						y = -(x - R);
		x += dx;
		cout << "|" << setw(7) << setprecision(2) << y << " |" << endl;
	}
	cout << "---------------------------" << endl;
	return 0;
}

