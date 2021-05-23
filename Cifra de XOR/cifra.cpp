#include <string>
#include "cifra.h"

std::string crypt(std::string msg, char key) {
	int i;
	std::string encode = "";
	
	for (i = 0; i < msg.size(); i++) {
		encode += msg[i] ^ key;
	}
	
	return encode;
}
