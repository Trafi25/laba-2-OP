#include <iostream>
#include <fstream> 
#include <string> 
using  namespace std;
int main() {
	string str[20];
	int chis[20];
	for (int i = 0; i < 20; i++) {
		chis[i] = rand() % 99 + 1;
	}
	for (int i = 0; i < 20; i++) {
		cout << chis[i] << " ";
	}
	cout << endl << "__________________________________" << endl;
	for (int i = 0; i < 20; i++) {
		getline(cin, str[i]);
	}
	for (int i = 0; i < 20; i++) {
		cout << str[i] << " ";
	}
	cout << endl << "__________________________________" << endl;
	for (int i = 0; i < 19; i++)
	{
		for (int j = i + 1; j < 20; j++)
		{
			if (chis[i] < chis[j])
			{
				swap(chis[i], chis[j]);
				swap(str[i], str[j]);
			}
		}
	}
	for (int i = 0; i < 10; i++) {
		cout << chis[i] << " ";
	}
	cout << endl << "__________________________________" << endl;
	for (int i = 0; i < 10; i++) {
		cout << str[i] << " ";
	}
	cout << endl << "__________________________________" << endl;
	ofstream f("results.csv");
	f << str[0] << ":12\n";
	f << str[1] << ":10\n";
	for (int i = 2; i < 10; i++) {
		f << str[i] << ":" << 10 - i << endl;
	}
	f.close();
		return 0;
}
