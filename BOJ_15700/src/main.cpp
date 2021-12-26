#include <iostream>

using namespace std;

using ll = long long;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	ll n, m;
	cin >> n >> m;

	if (0 == n % 2 ||
		0 == m % 2) {
		cout << n * m / 2;
	}
	else {
		auto v1 = n * (m / 2) + (n / 2);
		auto v2 = (n / 2) * m + (m / 2);

		cout << (v1 < v2 ? v2 : v1);
	}

	return 0;
}