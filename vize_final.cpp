#include <iostream>

using namespace std;

int main() {
    // Kullanýcýdan vize ve final notlarýný alalým
    double vizeNotu, finalNotu;
    cout << "Vize notunu girin: ";
    cin >> vizeNotu;
    cout << "Final notunu girin: ";
    cin >> finalNotu;

    // Vize ve final aðýrlýklarýný belirleyelim (örneðin %40 vize, %60 final)
    const double VIZE_AGIRLIK = 0.4;
    const double FINAL_AGIRLIK = 0.6;

    // Notlarý hesaplayalým
    double ortalama = (vizeNotu * VIZE_AGIRLIK) + (finalNotu * FINAL_AGIRLIK);

    cout << "Ortalama: " << ortalama << endl;

    // Ortalamaya göre geçme durumunu kontrol edelim
    if (ortalama >= 60) {
        cout << "Dersi gectiniz!" << endl;
    } else {
        cout << "Dersi gecemediniz." << endl;
    }

    return 0;
}

