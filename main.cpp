#include <iostream>
#include <algorithm>
#include <iomanip>
#include <random>
#include <vector>
#include <fstream>
#include <string>

using namespace std;

#include "includes/Mokinys.h"
#include "includes/SizeV.cpp"
#include "includes/SizeP.cpp"
#include "includes/Atspausdinti.cpp"
#include "includes/Vidurkis.cpp"
#include "includes/Mediana.cpp"
#include "includes/MokinioInfoM.cpp"
#include "includes/MokinioInfoA.cpp"

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
    switch(choice){
        case 1:
            while(loop == 1){
                MokinioInfoM(M, sk);
                cout << "Ar norite prideti dar viena mokini?(1 - Taip, 0 - Ne)" << endl;
                cin >> loop;
                system("CLS");
                while(!(loop == 1 || loop == 0))
                {
                    cout << "Bloga ivestis, kartokite!";
                    cin >> loop;
                }
            }
            break;
        case 2:
            MokinioInfoA(M, sk);
    }
    Atspausdinti(M);
}
