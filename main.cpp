#include <iostream>
using namespace std;

int main() {
	string alpha {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ "};
	string key {"ZkPWebuEgAUqLXchzSsxHrifyNwBapRYIoTmOjdKQFtGVnvClJMD "};
	string userMessage {};
	string encrypt {};
	string decrypt {};

	cout << "Enter your message" << endl;
	getline(cin, userMessage);

	//encrypt
	for (char current : userMessage){
		size_t position = alpha.find(current);
		if (position != string::npos){
			char newChar {key.at(position)};
			encrypt += newChar;
		}
		else{
			encrypt += current;
		}
	}

	cout << "Encrypted message: " << encrypt << endl;

	//decrypt
	for (char current : encrypt){
		size_t position = key.find(current);
		if (position != string::npos){
			char newChar {alpha.at(position)};
			decrypt += newChar;
		}
		else{
			encrypt += current;
		}
	}

	cout << "Decrypted message: " << decrypt << endl;

	
  return 0;
}