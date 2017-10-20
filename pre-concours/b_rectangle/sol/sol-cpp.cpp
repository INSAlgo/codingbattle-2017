#include <iostream>

using namespace std;

int main() {
    int n, m;
    char c;

    cin >> n >> m >> c;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) cout << c;
        cout << endl;
    }

    return 0;
}

