bool BySurname(const Mokinys& x, const Mokinys& y)
{
    return x.vardas < y.vardas;
}

void Atspausdinti(vector<Mokinys>& M)
{
    int Vardodydis{}, Pavardesdydis{};
    Vardodydis = SizeV(M);
    Pavardesdydis = SizeP(M);
    sort (M.begin(), M.end(), BySurname);
    cout << setw(Pavardesdydis+2) << left << "Pavarde" << setw(Vardodydis+2) << left << "Vardas" << setw(20) << left << "Galutinis-vidurkis" << setw(19) << left << "Galutinis-mediana" << endl;
    for(int i = 0; i < M.size(); i++)
        cout << setw(Pavardesdydis+2) << left << M[i].pavarde << setw(Vardodydis+2) << left << M[i].vardas << setw(20) << left << fixed << setprecision(2) << M[i].gVid << setw(19) << left << fixed << setprecision(2) << M[i].gMed << endl;
}
