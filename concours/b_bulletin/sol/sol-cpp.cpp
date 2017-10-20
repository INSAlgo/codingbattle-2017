#include <iostream>
#include <cmath>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    double note, min_i, max_i, moy_i;
    int nb;
    cin >> note >> min_i >> max_i >> moy_i >> nb;

    double * notes = new double[nb];
    double mini, maxi, moy;
    mini = note;
    maxi = note;
    moy = note;

    for (int i = 0; i < nb; ++i) {
        cin >> notes[i];

        mini = min(notes[i], mini);
        maxi = max(notes[i], maxi);
        moy += notes[i];
    }
    moy /= (nb + 1);

    if (abs(moy - moy_i) >= 0.02 ||  abs(mini - min_i) >= 0.02 || abs(maxi - max_i) >= 0.02) {
        cout << "Jack ! Viens ici !" << endl;

    } else {
        cout << "RAS" <<endl;
    }

    delete[] notes;
    return 0;
}

