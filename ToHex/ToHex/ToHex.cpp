// ToHex.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <Windows.h>


int main(int argc, char** argv)
{
	unsigned char c[1];
	FILE *fp = NULL;
	if (argc < 2) {
		fprintf(stderr, "please input file");
		return -1;
	}
	fopen_s(&fp, argv[1], "rb");
	if (fp) {
		while (fread_s(c, 1, 1, 1, fp) != 0) {
			printf("\\x%02x", c[0]);
		};
		fclose(fp);
	}
	else {
		fprintf(stderr, "open file fail\n");
	}
	return 0;
}

