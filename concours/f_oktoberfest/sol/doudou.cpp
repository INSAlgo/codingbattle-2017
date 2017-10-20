#include <iostream>
#include <string>
#include <cmath>

using namespace std;

long long V;
long long maxi = -1;
bool ** matrix;

void next(long long va, long long vb) {

    if (va + vb > V) return;

    if (matrix[va][vb]) return;

    matrix[va][vb] = true;
    matrix[vb][va] = true;
    if (va + vb > maxi) maxi = va + vb;

    long long va3 = va*va*va;
    long long vb2 = vb*vb;
    if (va3 + vb2 <= V) next(va3, vb2);

    long long va2 = va*va;
    long long vb3 = vb*vb*vb;
    if (va2 + vb3 <= V) next(va2, vb3);

    next(floor(sqrt(va)), floor(sqrt(vb)));
}

int main() {
    long long VA, VB;
    cin >> V >> VA >> VB;

    matrix = new bool*[V + 1];
    for (int i = 0; i <= V; ++i) {
        matrix[i] = new bool[V + 1];
        for (int j = 0; j <= V; ++j) {
            matrix[i][j] = false;
        }
    }

    next(VA,VB);

    cout << maxi << endl;
    
    return 0;
}

