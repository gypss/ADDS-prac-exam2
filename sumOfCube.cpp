#include <cmath>
using namespace std;

int sumOfCube(int n) {

	if (n == 1) {
		return 1;
	}

	return pow(n, 3) + sumOfCube(n - 1);
}