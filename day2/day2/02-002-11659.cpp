#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);


	int N, M;
	cin >> N >> M;

	int S[100001] = {};

	for (int i = 1; i < N + 1; i++) {
		int num;
		cin >> num;
		S[i] = S[i - 1] + num;
	}
	for (int i = 1; i < M + 1; i++) {
		int start, end;
		cin >> start >> end;
		cout << S[end] - S[start - 1] << "\n";
	}



	return 0;
}