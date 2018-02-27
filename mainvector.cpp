#include <iostream>
#include <algorithm>
#include <iomanip>
#include <random>
#include <vector>
#include <fstream>

using namespace std;

struct Mokinys
{
    string vardas;
    string pavarde;
    vector<int> Paz;
    double egz{};
    double gVid{};
    double gMed{};
    int pSk{};
};

double Vidurkis(vector<Mokinys>& M, int& sk)
{
    double suma = 0;
    for(int i = 0; i < M[sk].pSk; i++)
        suma += M[sk].Paz[i];
    return suma/M[sk].pSk;
}

double Mediana(vector<Mokinys>& M, int& sk)
{
    sort (M[sk].Paz.begin(), M[sk].Paz.end());
//    for(int i = 0; i < M[sk].pSk; i++)
//        cout << Paz[i] << endl;
    if(M[sk].pSk % 2 == 0)
        return double(M[sk].Paz[M[sk].pSk/2])/double(M[sk].Paz[M[sk].pSk/2-1]);
    else
        return M[sk].Paz[(M[sk].pSk-1)/2];
}
///Mokinio info manually
void MokinioInfoM(vector<Mokinys>& M, int& sk)
{
    int nDarbas{}, pasirinkimas{};

    random_device rd;
    mt19937 mt(rd());
    uniform_int_distribution<int> dist(1, 10);

    M.push_back(Mokinys());
    cout << "Iveskite varda : ";
    cin >> M[sk].vardas;
    cout << "Iveskite pavarde : ";
    cin >> M[sk].pavarde;
    cout << "1 - Generuoja atsitiktini pazymi\n2 - baigti generuoti" << endl;
    cin >> nDarbas;
    while(nDarbas != 2)
    {
        if(nDarbas == 1)
        {
            M[sk].Paz.push_back(dist(mt));
            cout << "Pazymys - " << M[sk].Paz[M[sk].pSk] << endl;
            M[sk].pSk ++;
        }
        else
        {
            cout << "Blogai ivesta komanda, kartokite!" << endl;
        }
        cin >> nDarbas;
    }
    M[sk].egz = dist(mt);
    cout << "Egzamino balas - " << M[sk].egz << endl;
    M[sk].gVid = 0.4 * Vidurkis(M, sk) + 0.6 * M[sk].egz;
    M[sk].gMed = 0.4 * Mediana(M, sk) + 0.6 * M[sk].egz;
    sk ++;
}
/////Mokinio info Auto(nuskaito is failo)
//void MokinioInfoA(vector<Mokinys> M);
//{
//
//    string laikinas1, laikinas2, eilute;
//    int nDarbas{}, pasirinkimas{};
//    pSk = 0;
//
//    random_device rd;
//    mt19937 mt(rd());
//    uniform_int_distribution<int> dist(1, 10);
//
//    ofstream fd("kursiokai.txt");
//    fd >> laikinas1 >> laikinas1 >> laikinas1;
//    while(laikinas1 != "Egzaminas")
//    {
//        fd >> laikinas1
//        if(laikinas1 == "Egzaminas")
//            break;
//        laikinas2 = laikinas1;
//        pSk++;
//    }
//    while(fd.eof())
//    {
//
//    }
//    fd >> vardas >> pavarde >>
//    cout << "Iveskite varda : ";
//    cin >> vardas;
//    cout << "Iveskite pavarde : ";
//    cin >> pavarde;
//    cout << "1 - Generuoja atsitiktini pazymi\n2 - baigti generuoti" << endl;
//    cin >> nDarbas;
//    while(nDarbas != 2)
//    {
//        if(nDarbas == 1)
//        {
//            Paz.push_back(dist(mt));
//            cout << "Pazymys - " << Paz[pSk] << endl;
//            pSk ++;
//        }
//        else
//        {
//            cout << "Blogai ivesta komanda, kartokite!" << endl;
//        }
//        cin >> nDarbas;
//    }
//    egz = dist(mt);
//    cout << "Egzamino balas - " << egz << endl;
//    cout << "Kaip skaiciuoti galutini bala? (1 - vidurkis, 2 - mediana) : ";
//    cin >> pasirinkimas;
//    switch(pasirinkimas){
//    case 1:
//        galBalas = 0.4 * Vidurkis(Paz, pSk) + 0.6 * egz;
//        break;
//    case 2:
//        galBalas = Mediana(Paz, pSk) + 0.6 * egz;
//        break;
//    }
//    cout << "Galutinis balas : " << setprecision(3) << galBalas;
//}
int main()
{
    vector<Mokinys> M;
    int sk = 0, loop = 1, choice{};
    cout << "Kaip norite ivesti duomenis?(1 - Rankiniu budu, 2 - Nuskaityti is failo)" << endl;
    cin >> choice;
    while(!(choice == 1 || choice == 2))
    {
        cout << "Bloga ivestis, kartokite!";
        cin >> choice;
    }
    switch(choice)
    case 1:
        while(loop == 1){
            MokinioInfoM(M, sk);
            cout << "Ar norite prideti dar viena mokini?(1 - Taip, 0 - Ne)" << endl;
            cin >> loop;
            system.cls();
            while(!(loop == 1 || loop == 0))
            {
                cout << "Bloga ivestis, kartokite!";
                cin >> loop;
            }
        }

}
