#include <iostream>
#include <string>
#include "cifra.h"

using namespace std;

int main(int argc, char** argv) {
	string msg, encode, decode;
	
    getline(cin, msg);
	
	encode = encrypt(msg, 3);
	decode = decrypt(encode, 3);
	
	cout << "Texto original: " << msg << endl;
	cout << "Texto codificado: " << encode << endl;
	cout << "Texto descodificado: " << decode << endl;
	
	system("pause");
	
	return 0;
}

