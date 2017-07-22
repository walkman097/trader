#include <fcntl.h>
#include <unistd.h>
#include <iostream>
#include "jsonparser.h"
using namespace rapidjson;

#define MAX_SIZE (4*1024*1024)

int main() {
	int fd = open("recomand.json", O_APPEND, O_RDONLY);
	if (fd != -1) {
		int length = lseek(fd, 0, SEEK_END);
		lseek(fd, 0, SEEK_SET);
		if (length != -1) {
			char buffer[MAX_SIZE];
			memset(buffer, 0, MAX_SIZE);
			int ret = read(fd, buffer, length);
			if (ret != -1) {
				Parser parser;
				parser.addData(buffer);
				MyHandler handler;
				parser.doParser(handler);
			}
		}
	}

	return 0;
}

