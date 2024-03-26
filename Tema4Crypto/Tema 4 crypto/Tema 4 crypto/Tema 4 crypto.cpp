

#include <iostream>
#include <cmath>
using namespace std;

bool PatratPerfect(int n) {
    int radacina = sqrt(n);
    return radacina * radacina == n;
}


void Fermat(int n) {
    if (n <= 1) {
        cout << "Numarul trebuie sa fie mai mare decat 1." << endl;
        return;
    }

    int a = std::ceil(std::sqrt(n));
    int b2 = a * a - n;
    while (!PatratPerfect(b2)) {
        a++;
        b2 = a * a - n;
        //std::cout << b2;
    }

    int b = std::sqrt(b2);
    int factor1 = a + b;
    int factor2 = a - b;

    std::cout << "Descompunerea in factori primi a lui " << n << " este: " << factor1 << " * " << factor2 << std::endl;
}

int main() {
    int n;

    cout << "Introduceti numarul n: ";
    cin >> n;

    Fermat(n);

    return 0;
}



