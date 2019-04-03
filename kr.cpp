#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main() {
	ifstream fin;
	string *simv = new string[20];
	int *chis = new int[20];
	string *chr = new string[20];
	int n = 0;
	char ch[20];
	string A = "ABCDEFGHMNKHO";
	string a = "abcdefghmnkoh";
	fin.open("him.txt");
	if (!fin.is_open()) {
		cout << "error";
	}
	else {
		while (fin.eof());
		fin >> simv[n];
		n++;
		cout << simv[n];
	}
	fin.close();
	int k = 0;
	for (int i = 0; i < n + 1; i++) {
		for (int j = 0; j < simv[i].length; i++) {
			if (isalpha(simv[i][j])) {
				chr[j] = simv[i][j];
				;
			}
			if () {
				chr += simv[i][j];				
			}
			if (isdight(simv[i][j])) {
				chis[j] *= simv[i][j + 1];
				j+1
			}
			if (simv[i][j] = "(" || simv[i][j]="{" || simv[i][j] = "[" {
				chis[j] *= simv[i][j + 1];
			}
		}
		ofstream fout;
		fout.open("otvet.txt");
		for (int i = 0; i < n + 1; i++) {
			fout << chr[i] << ":" << chis[i] << ",";
		}
		fout.close();
	}
	return 0;
}
