#include <iostream> ///Standard Input / Output Streams Library
///program c++
using namespace std;
int main() {
	int numOdd = 0;
	int num[20] = { 2, 3, 5, 7, 11, 23, 19 ,8, 34, 45, 14, 37, 57, 20, 26, 17, 
		24, 44, 78, 35 };
	for (int i = 0; i < 20; i++)
	{
		if (num[i] % 2 != 0) {
			numOdd++;
		}
	}
	cout <<"The number of odd numbers is:"<<numOdd << endl;
	return 0;
}