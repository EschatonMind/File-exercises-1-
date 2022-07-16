#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {

	fstream outfile;
	string outfilename;
	cin >> outfilename;
	outfile.open(outfilename, ios::out);
	if (outfile.is_open()) {
		outfile << " the 1st file. 2500 " << endl;
		outfile << " the 2nd file. 3500 " << endl;
		outfile << " the 3rd file. 4500 " << endl;
		outfile << " the 4th file. 5500 " << endl;
		outfile.close();
		
	}
	else {
		cout << " file could not open " << endl;
	}
	outfile.open(outfilename, ios::in);
	if(outfile.is_open()){
		string line;
		while (outfile) {

			getline(outfile, line);
			cout << line << endl;
		}
		outfile.close();
	}
	else {
	cout << " could not read file  " << endl;
	}

	return 0;
}