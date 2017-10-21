#include <iostream>
#include <string>
#include <cmath>
#include <set>

using namespace std;
typedef pair<long long, long long> pairl;

long long V;
long long maxi = -1;
set<pairl> vus;

void next(long long va, long long vb){
    
    if(va + vb > V){return;}
    
    if(vus.find(pairl(va,vb)) != vus.end()){return;}

    vus.insert(pairl(va,vb));
    
    if(va+vb > maxi){maxi = va+vb;}

    long long va3 = va*va*va;
    long long vb2 = vb*vb;
    if(va3+vb2 <= V ){next(va3, vb2);}
    
    long long va2 = va*va;
    long long vb3 = vb*vb*vb;
    if(va2+vb3 <= V){next(va2, vb3);}

    next(floor(sqrt(va)), floor(sqrt(vb)));

}

int main(){
    long long VA, VB;
    cin >> V >> VA >> VB;
    
    next(VA,VB);


    cout << maxi<<endl;
    return 0;
}
