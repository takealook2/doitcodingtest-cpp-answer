#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); // cin, cout 성능을 높이려고 C 표준 입출력과 싱크를 끊음. 속도 개선에 좋다.
    cin.tie(NULL); 
    cout.tie(NULL);

    int N;
    cin >> N;
    vector<int> A(N, 0);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    // 버블 정렬
    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - 1 - i; j++) {
            if (A[j] > A[j+1]) {
                int temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }
        }
    }

    for (int i = 0; i < N; i++) {
        cout << A[i] << "\n";
    }
}