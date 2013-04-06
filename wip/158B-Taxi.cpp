#include <iostream>
#include <vector>
using namespace std;
int main() {
	int size; cin >> size;
	vector<int> xs(size);
	for (int i = 0; i < size; ++i)
		cin >> xs[i];
	int answer = 0;
	while (xs.size() > 0) {
		int remaining = 4 - xs[0];
		cerr << "\tate " << xs[0] << " remaining=" << remaining << endl;
		xs.erase(xs.begin());
		if (remaining != 0) {
			while (xs.size() > 0 && remaining > 0) {
				int best = -1;
				int besti = -1;
				for (int i = 0; i < xs.size(); ++i)
					if (xs[i] > best && remaining >= xs[i]) {
						best = xs[i];
						besti = i;
					}
				remaining -= best;
				cerr << "\tbest i=" << besti << " val=" << xs[besti] << " remaining=" << remaining << endl;
				xs.erase(xs.begin() + besti);
			}
		}
		++answer;
		cerr << "\ttaxi! (now " << answer << ")" << endl;
	}
	cout << answer << endl;
}