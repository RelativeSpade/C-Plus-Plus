#include <iostream>
using namespace std;
int main() {
	double familyNum;
	string member;
	string relate;
	int count = 0;
	string family[10] = {};
	string relation[10] = {};
	bool done = false;
	cout << "How Many Members Do You Have?" << endl;
	cin >> familyNum;
	while (count < familyNum) {
		cout << "Enter Family Members Name" << endl;
		cin >> member;
		family[count] = member;
		cout << "What Relation Do You Have?" << endl;
		cin >> relate;
		relation[count] = relate;
		count++;
		if (count >= familyNum) {
			done = true;
		}
		while (done == true) {
			while (count >= 0) {
				cout << relation[count] << " " << family[count] << endl;
				count--;
			}
      return 0;
		}
	}
}
