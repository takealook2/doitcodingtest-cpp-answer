#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> A; // vector<자료형> 변수 이름;

	// 삽입 연산
	A.push_back(1);				// 마지막에 1 추가
	A.insert(A.begin(), 7);		// 맨 앞에 7을 삽입
	A.insert(A.begin() + 2, 10);// index 2의 위치에 10 삽입
	A.push_back(0);
	A.push_back(0);

	// 값 변경 연산
	A[4] = -5;

	// 삭제 연산
	//A.pop_back();				// 마지막 값 삭제
	//A.erase(A.begin() + 3);		// index 3에 해당하는 값 삭제
	//A.clear();					// 모든 값 삭제
	// A.shrink_to_fit(); 남은 capacity를 없애고 메모리 해제

	// 정보 가져오기
	if (!A.empty()) { // 벡터가 비어있지 않은 경우에만 접근
		int size = A.size();
		int first = A.front();
		int back = A.back();
		int idx_three = A[3];
		int idx_five = A.at(4); // A.at(5)는 벡터 크기를 초과할 수 있으므로 주의
		vector<int>::iterator it = A.begin();
		int first_data = *it;

		// 출력
		cout << "Size: " << size << endl;
		cout << "First element: " << first << endl;
		cout << "Last element: " << back << endl;
		cout << "Element at index 3: " << idx_three << endl;
		cout << "Element at index 4: " << idx_five << endl;
		cout << "First element (using iterator): " << first_data << endl;
	}
	else {
		cout << "The vector is empty." << endl;
	}

	return 0; // 명시적으로 0 반환
}
