
#include <iostream> // for cout
#include <string> // for cout
#include <cmath>
using namespace std;
int Ex1(int argc, char* argv[]);
int Ex2(int argc, char* argv[]);
int Ex3(int argc, char* argv[]);

int main(int argc, char* argv[])
{	
	Ex2(argc, argv);

}

int Ex2(int argc,char* argv[]) {
	// Declare and initialize variables
	cout << endl;
	string curNum;
	int decimalNum[3] = {0,0,0};
	// request user input
	cout << "User input " << argv[1] << " and " << argv[2] << " to check if they are binary number!" << endl;
	cout << "Checking ..." << endl;
	for (int i = 1; i < 3; i++) {
		if (strlen(argv[i]) != 8) {
			cout << argv[i] << " is not the 8-bit binary number!\n";
			continue;
		}
		else {
			for (int j = 7; j >=0; j--) {
				if (argv[i][j] != '0' && argv[i][j] != '1') {
					cout << argv[i] << " is not the 8-bit binary number!\n";
					break;
				}
				else {
					if (argv[i][j] == '1') {
						decimalNum[i] =decimalNum[i]+ pow(2,7-j);
					}
					if (i == 2 && j == 0) {
						cout << "Both " << argv[1] << " and " << argv[2] << " are 8-bit binary number\n";
						cout << "Decimal form of " << argv[1] << " 8-bit binary number is: " << decimalNum[1] << endl;
						cout << "Decimal form of " << argv[2] << " 8-bit binary number is: " << decimalNum[2] << endl;
						cout << "Sum of both numbers are: " << decimalNum[1] + decimalNum[2] << endl;
					}
				}
			}
		}
	
	}


	// std::copy(std::begin(numbers), std::end(numbers), std::ostream_iterator<int>(std::cout, ", "));
	cout << "\nFinished Programs";

	return 0;
}

int Ex1(int argc, char* argv[]) {
	if (argc != 2) {
		cout << "Invalid number of arguments" << endl;
		return 0;
	}


	if (strlen(argv[1]) == 4 &&(argv[1][0] == '0') &&(argv[1][1] == 'x' || argv[1][1] == 'X') &&((argv[1][2] >='0' && argv[1][2] <= '9' ) || (argv[1][2] >= 'A' && argv[1][2] <= 'F')) && ((argv[1][3] >= '0' && argv[1][3] <= '9') || (argv[1][3] >= 'A' && argv[1][3] <= 'F'))) {
		cout << argv[1] <<" is Valid Hexadecimal Number" << endl;
		return 0;
	}
	else {
		cout << "Wrong Format of Hexadecimal number" << endl;
		return 0;
	}
	return 0;
}


int Ex3(int argc, char* argv[]) {
	// Declare and initialize variables
	unsigned int numbers[10];
	int curNum = 0;
	// request user input
	for (int i = 0; i < 10; i++) {
		cout << "\nEnter the " << i << " integer: ";
		cin >> curNum;
		if (curNum > 10) {
			cout << "Error, Wrong Integer Format";
			break;
		}
		numbers[i] = curNum;
	}
	// std::copy(std::begin(numbers), std::end(numbers), std::ostream_iterator<int>(std::cout, ", "));
	cout << "\n Finished Programs";
	return 0;
}

