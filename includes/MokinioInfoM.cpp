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
    while(nDarbas != 2 || !cin)
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
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
