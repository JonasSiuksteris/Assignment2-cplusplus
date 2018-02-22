#include <iostream>
#include <algorithm>
#include <iomanip>
#include <random>
#include <vector>

using namespace std;

double Vidurkis(vector<int>& Paz, int pSk)
{
    int suma = 0;
    for(int i = 0; i < pSk; i++)
        suma += Paz[i];
    return suma/pSk;
}

double Mediana(vector<int>& Paz, int pSk)
{
    sort (Paz.begin(), Paz.end());
    for(int i = 0; i < pSk; i++)
        cout << Paz[i] << endl;
    if(pSk % 2 == 0)
        return double(Paz[pSk/2])/double(Paz[pSk/2-1]);
    else
        return Paz[(pSk-1)/2];
}

int main()
{
    string vardas, pavarde;
    vector<int> Paz;
    int nDarbas{}, pSk = 0, egz{}, pasirinkimas{};
    double galBalas{};

    random_device rd;
    mt19937 mt(rd());
    uniform_int_distribution<int> dist(1, 10);

    cout << "Iveskite varda : ";
    cin >> vardas;
    cout << "Iveskite pavarde : ";
    cin >> pavarde;
    cout << "1 - Generuoja atsitiktini pazymi\n2 - baigti generuoti" << endl;
    cin >> nDarbas;
    while(nDarbas != 2)
    {
        if(nDarbas == 1)
        {
            Paz.push_back(dist(mt));
            cout << "Pazymys - " << Paz[pSk] << endl;
            pSk ++;
        }
        else
        {
            cout << "Blogai ivesta komanda, kartokite!" << endl;
        }
        cin >> nDarbas;
    }
    egz = dist(mt);
    cout << "Egzamino balas - " << egz << endl;
    cout << "Kaip skaiciuoti galutini bala? (1 - vidurkis, 2 - mediana) : ";
    cin >> pasirinkimas;
    switch(pasirinkimas){
    case 1:
        galBalas = 0.4 * Vidurkis(Paz, pSk) + 0.6 * egz;
        break;
    case 2:
        galBalas = Mediana(Paz, pSk) + 0.6 * egz;
        break;
    }
    cout << "Galutinis balas : " << setprecision(3) << galBalas;

}
