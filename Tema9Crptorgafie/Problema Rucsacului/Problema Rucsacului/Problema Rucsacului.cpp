#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> pbRucsacului(vector<int>& numere, int n) {
    sort(numere.begin(), numere.end(), greater<int>()); 

    vector<int> rezultat;
    int suma = 0;
    for (int numar : numere) {
        if (suma + numar <= n) {
            suma += numar;
            rezultat.push_back(numar);
        }
    }
    return rezultat;
}

int main() {
    vector<int> numere = { 30, 20, 10, 5, 3 }; 
    int n = 18; 

    vector<int> rezultat = pbRucsacului(numere, n);

    cout << "Vectorul rezultat este: ";
    for (int numere : rezultat) {
        cout << numere << " ";
    }
    cout << endl;

    return 0;
}

