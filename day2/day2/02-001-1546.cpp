#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int N = 0;
	vector<int> A;
	double sum = 0;

	cin >> N;
	A.resize(N);
	
	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}

	auto M = max_element(A.begin(), A.end());
	int M_score = *M;

	for (int i = 0; i < N; i++) {
		sum += A[i];
	}

	double score = sum * 100 / M_score / N;
	cout << score;

	return 0;
}