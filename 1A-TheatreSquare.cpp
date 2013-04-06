#include <cmath>
#include <iostream>
using namespace std;
int main() {
	long double n, m, a; cin >> n >> m >> a;
	if (n <= a || m <= a)
		cout << (long long)ceil(max(n, m) / a) << endl;
	else
		cout << (long long)ceil(n / a) * (long long)ceil(m / a) << endl;
	return 0;
}