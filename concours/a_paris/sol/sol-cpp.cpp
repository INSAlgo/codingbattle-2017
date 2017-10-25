#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    unsigned long P;
    unsigned long N;
    std::cin >> P >> N;

    std::vector<unsigned long> n;
    for (unsigned long i = 0; i < N; i++) {
        unsigned long a;
        std::cin >> a;
        n.push_back(a);
    }

    std::sort(n.begin(), n.end());

    if (N % 2) {
        if (n[N/2] < P)
            std::cout << "Parie !" << std::endl;
        else
            std::cout << "Jockey suivant !" << std::endl;
    } else {
        double c = (n[N/2-1] + n[N/2])/2.;
        if (c < P)
             std::cout << "Parie !" << std::endl;
         else
             std::cout << "Jockey suivant !" << std::endl;
    }

    return 0;
}
