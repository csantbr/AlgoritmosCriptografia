#include <iostream>
#include <string>
#include "cifra.h"

using namespace std;

int main(int argc, char** argv) {
	string msg, encode, decode;
	char key = 'S';
	
    getline(cin, msg);
	
	encode = crypt(msg, key);
	decode = crypt(encode, key);
	
	cout << "Texto original: " << msg << endl;
	cout << "Texto codificado: " << encode << endl;
	cout << "Texto descodificado: " << decode << endl;
	
	system("pause");
	
	return 0;
}
