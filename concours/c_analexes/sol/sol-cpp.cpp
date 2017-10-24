#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include <set>
#include <algorithm>

int main() {
    std::set<std::string> w;
    std::string a;
    std::string b;

    std::getline(std::cin, a);
    std::getline(std::cin, b);


    std::replace_if(a.begin(), a.end(), (int(*)(int))std::ispunct, ' ');
    std::replace_if(b.begin(), b.end(), (int(*)(int))std::ispunct, ' ');

    std::transform(a.begin(), a.end(), a.begin(), tolower);
    std::transform(b.begin(), b.end(), b.begin(), tolower);

    std::stringstream ss(a);
    std::string c;
    while (ss >> c) {
        w.insert(c);
    }

    std::stringstream ss2(b);
    while (ss2 >> c) {
        if (w.find(c) == w.end()) {
            std::cout << "NON" << std::endl;
            return 0;
        }
    }

    std::cout << "ANALEXES" << std::endl;
    return 0;
}

