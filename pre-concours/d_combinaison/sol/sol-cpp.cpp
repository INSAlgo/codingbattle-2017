#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
    long long n, l;
    cin >> n >> l;

    string sol;

    long long sqrt_n = (long long) (ceil(sqrt(n)));
    long long b;
    vector<string> v_sol;
    for (long long a = 1; a < sqrt_n; a++) {
        b = (n - a*a) / 2;
        double db = (n - a*a) / 2.;
        if (db > 0. && abs(b - db) < 0.001 &&  a*a + 2*b == n) {
            sol = to_string(a) + to_string(b);
            if (sol.length() == l) {
                v_sol.push_back(sol);	
            }
        }
    }

    sort(v_sol.begin(), v_sol.end());
    if (v_sol.size() > 0) {
        for (auto const& x : v_sol) {
            cout << x << endl;
        }
    }
    else {
        cout << "Zut !" << endl;
    }
}

