#include <stdio.h>

int pow3(int exp){
	int base = 3, result = 1;
	while (exp){
		if (exp & 1)
			result *= base;
		exp >>= 1;
		base *= base;
	}
	return result;
}

char fractal(int x,int y,int layer){
	for (int i = layer - 1; i >= 0; i--){
		int p = pow3(i);
		if ((x / p + (y / p) * p) & 1)
			return ' ';
	}
	return 'x';
}

int main(int argc,char**argv){
	int layer = getchar() - '0';
	int size = pow3(layer);
	for(int y = 0; y < size; y++){
		for(int x = 0; x < size; x++)
			putchar(fractal(x, y, layer));
		putchar('\n');
	}
	return 0;
}
