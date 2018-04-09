#include <iostream>
#include <algorithm>
#include <iomanip>
#include <random>
#include <vector>
#include <fstream>
#include <string>
#include <time.h>
#include <list>
#include <deque>

using namespace std;

#include "includes/Includes.cpp"

int main()
{
    vector<Mokinys> M;
    int sk = 0, loop = 1, choice{};
    cout << "Kaip norite ivesti duomenis?(1 - Rankiniu budu, 2 - Nuskaityti is failo, 3 - Greicio testas)" << endl;
    cin >> choice;
    while(!(choice == 1 || choice == 2 || choice == 3) || !cin){
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Bloga ivestis, kartokite!" << endl;
        cin >> choice;
    };
    switch(choice){
        case 1:
            while(loop == 1){
                MokinioInfoM(M, sk);
                cout << "Ar norite prideti dar viena mokini?(1 - Taip, 0 - Ne)" << endl;
                cin >> loop;
                while(!(loop == 1 || loop == 0))
                {
                    cout << "Bloga ivestis, kartokite!";
                    cin >> loop;
                }
            }
            break;
        case 2:
            MokinioInfoA(M, sk);
            break;
        case 3:
            Skaityti();
            Vektoriai(M, sk);
            Listai(sk);
            Deque(sk);
    }
    if(M.size() > 0)
        Atspausdinti(M,"pagr");
    else
        return 0;
}
