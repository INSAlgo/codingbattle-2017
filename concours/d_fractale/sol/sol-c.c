#include <stdio.h>

int main(int argc,char**argv) {
	int layer = getchar() - '0';
	int size = 1;
	for (int i = 0; i < layer; i++) size *= 3;
	for (int y = 0; y < size; y++) {
		for (int x = 0; x < size; x++) {
			int p3i = 1;
			char ch = 'X';
			for (int i = layer - 1; i >= 0; i--) {
				if ((x / p3i + (y / p3i) * p3i) & 1) {
					ch = ' ';
					break;
				}
				p3i *= 3;
			}
			putchar(ch);
		}
		putchar('\n');
	}
	return 0;
}
