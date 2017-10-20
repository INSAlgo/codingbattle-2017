#include <iostream>
#include <string>
#include <cmath>

using namespace std;

long taille;
char ** matrix;

void draw(long x, long y, long ordre) {
    if (ordre == 0) {
        matrix[x][y] = 'X';
    }
    else {
        long decalage = pow(3, ordre - 1);
        draw(x, y, ordre - 1);
        draw(x, y + 2 * decalage, ordre - 1);
        draw(x + 2 * decalage, y, ordre - 1);
        draw(x + decalage, y + decalage, ordre - 1);
        draw(x + 2 * decalage, y + 2 * decalage, ordre - 1);
    }
}

int main() {
    int n;
    cin >> n;

    taille = pow(3, n);

    matrix = new char*[taille];
    for(int i = 0; i < taille; ++i) {
        matrix[i] = new char[taille];
        for(int j = 0; j < taille; ++j) {
            matrix[i][j] = ' ';
        }
    }

    draw(0, 0, n);

    for (int i = 0; i < taille; ++i) {
        for (int j = 0; j < taille; ++j) {
            cout << matrix[i][j];
        }
        cout << endl;
    }

    return 0;
}

