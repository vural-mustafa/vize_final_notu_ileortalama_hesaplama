#include <iostream>

using namespace std;

int main() {
    // Kullan�c�dan vize ve final notlar�n� alal�m
    double vizeNotu, finalNotu;
    cout << "Vize notunu girin: ";
    cin >> vizeNotu;
    cout << "Final notunu girin: ";
    cin >> finalNotu;

    // Vize ve final a��rl�klar�n� belirleyelim (�rne�in %40 vize, %60 final)
    const double VIZE_AGIRLIK = 0.4;
    const double FINAL_AGIRLIK = 0.6;

    // Notlar� hesaplayal�m
    double ortalama = (vizeNotu * VIZE_AGIRLIK) + (finalNotu * FINAL_AGIRLIK);

    cout << "Ortalama: " << ortalama << endl;

    // Ortalamaya g�re ge�me durumunu kontrol edelim
    if (ortalama >= 60) {
        cout << "Dersi gectiniz!" << endl;
    } else {
        cout << "Dersi gecemediniz." << endl;
    }

    return 0;
}

