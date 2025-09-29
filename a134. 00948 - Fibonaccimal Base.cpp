#include <iostream>
#include <vector>
using namespace std;
vector<int>f;
void fib();
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	fib();
	int n;
	cin >> n;
	while (n--) {
		int dec, i = 0, val = 0;
		bool stop = false;
		cin >> dec;
		while (!stop) {
			if (f[i] > dec) stop = true;
			else i++;
		}
		i--;
		cout << dec << " = ";
		while ( i > 1) {
			if (dec >= f[i]) {
				dec -= f[i];
				i--;
				cout << "1";
			}
			else {
				i--;
				cout << "0";
			}
		}
		cout << " (fib)" << (n?"\n":"");
	}
	return 0;
}
void fib() {
	int sum = 0, i = 2;
	f.push_back(0);
	f.push_back(1);
	while (sum <= 100000000) {
		f.push_back(f[i - 1] + f[i - 2]);
		sum = f[i];
		i++;
	}
}