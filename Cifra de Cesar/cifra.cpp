#include <string>
#include "cifra.h"

std::string encrypt(std::string msg, int n) {
	int i;
	std::string encode = "";
	
	for (i = 0; i < msg.size(); i++) {
		encode += msg[i] + n;
	}
	
	return encode;
}

std::string decrypt(std::string msg, int n) {
	int i;
	std::string decode = "";
	
	for (i = 0; i < msg.size(); i++) {
		decode += msg[i] - n;
	}
	
	return decode;
}

