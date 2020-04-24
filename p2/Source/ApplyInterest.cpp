#include<iostream>

using namespace std;

int main()
{
		double dblP, dblRate;
		dblP = dblRate = 0.0;

		cin >> dblP >> dblRate;
		
		double dblA = dblP*(1 + dblRate);
		
		cout << dblA << endl << dblRate << endl;

		return 0;
}
