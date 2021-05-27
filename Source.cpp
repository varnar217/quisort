#include<iostream>
#include<conio.h>
#include <vector>
#include <string>

using namespace std;
void swap(int* V, int perv, int vtoroe) {
	int temp = 0;
	temp = V[perv];
	V[perv]= V[vtoroe];
	V[vtoroe] = temp;
};
void quiersort(int V[], int number) {
	int i, last;
	if (number <= 1)
		return;
	last = 0;
	swap(V, 0, rand() % number);
	for (i = 1; i < number; i++)
		if (V[i] < V[0])
			swap(V, ++last, i);
	swap(V, 0, last);
	quiersort(V, last);
	quiersort(V+last+1, number-last-1);
}; 

int main() {
	int V[4];
	string s;
	//cout << "vesti chisla (cherez probel) int \n";
	//for (int i = 0; i < 4; i++) {
	//	V[i]=
	//}
	V[0] = 123;
	V[1] = 11;
	V[2] = 110;
	V[3] = 0;
	quiersort(V, 4);
	for (auto iter = 0; iter < 4; iter++) {
		cout << "V["<<iter<<"] =" << V[iter] << endl;
	}
	//getline(std::cin, s);
	//cout << s << endl;
	//stringstream ert(s);

	//for (std::string::iterator it = s.begin(); it != s.end(); ++it) {
		
		//cout << "iter=" << *it << endl;
	//}

	//cin.get();
	_getch();

}