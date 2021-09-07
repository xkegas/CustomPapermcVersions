#include <iostream>
using namespace std;

int main() {
	string version;
	cout << "Custom PaperMC version installer" << endl;
	cout << "Type papermc version ";
	cin >> version;
	cout << endl;
	cout << "Link: https://papermc.io/api/v1/paper/" << version << "/latest/download";
	cout << endl;
	cout << "Paste link to the web browser";
	cout << endl;
	cout << "Make sure the version is correct" << endl;
	
	system("pause");
	return 0;
}
