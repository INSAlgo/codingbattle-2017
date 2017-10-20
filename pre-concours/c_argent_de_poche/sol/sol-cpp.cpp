#include <iostream>
#include <string>
#include <algorithm>
#include <iomanip>

using namespace std;

int main(){
    int n;
    cin >> n;
    double * marks = new double[n];
    double mini, maxi, avg;
    mini = 21;
    maxi = -1;
    avg = 0;
    for(int i = 0; i< n; i++){
        cin >> marks[i];
        mini = min(marks[i], mini);
        maxi = max(marks[i], maxi);
        avg += marks[i];
    }
    avg /= n;

    cout << fixed << setprecision(2) << (20 -( maxi - mini)) * avg*avg /100 << endl;
}

