#include <iostream>

using namespace std;

int getQuotient(int numerator, int denom){
    if (numerator < denom)
    {
	return 0;
    }
    else
    {
	return 1 + getQuotient(numerator - denom, denom);
    }
}

int main()
{
    cout << getQuotient(102, 5) << endl;
}
