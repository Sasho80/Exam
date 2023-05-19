#include <iostream>
#include <math.h> ///modf
using namespace std;
int main() {
	double  fractpart, intpart;;
	double num[] = {1.5, 2, 3, 7.4, 5, 6, 23.8, 16, 19, 
		44.5, 24 ,5.7, 13, 22, 4};
	for (int i = 0; i < 15; i++ )
	{
		fractpart = modf(num[i], &intpart);
		if (fractpart==0) {
			cout << num[i] << endl;
		}
	}
	return 0;
}