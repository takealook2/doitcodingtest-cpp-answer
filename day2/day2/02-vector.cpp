#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> A; // vector<�ڷ���> ���� �̸�;

	// ���� ����
	A.push_back(1);				// �������� 1 �߰�
	A.insert(A.begin(), 7);		// �� �տ� 7�� ����
	A.insert(A.begin() + 2, 10);// index 2�� ��ġ�� 10 ����
	A.push_back(0);
	A.push_back(0);

	// �� ���� ����
	A[4] = -5;

	// ���� ����
	//A.pop_back();				// ������ �� ����
	//A.erase(A.begin() + 3);		// index 3�� �ش��ϴ� �� ����
	//A.clear();					// ��� �� ����
	// A.shrink_to_fit(); ���� capacity�� ���ְ� �޸� ����

	// ���� ��������
	if (!A.empty()) { // ���Ͱ� ������� ���� ��쿡�� ����
		int size = A.size();
		int first = A.front();
		int back = A.back();
		int idx_three = A[3];
		int idx_five = A.at(4); // A.at(5)�� ���� ũ�⸦ �ʰ��� �� �����Ƿ� ����
		vector<int>::iterator it = A.begin();
		int first_data = *it;

		// ���
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

	return 0; // ��������� 0 ��ȯ
}
