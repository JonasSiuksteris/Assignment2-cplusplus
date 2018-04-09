bool BySurnameD(const Mokinys& x, const Mokinys& y)
{
    return x.vardas < y.vardas;
}

void AtspausdintiD(deque<Mokinys>& M, string a)
{
    int Vardodydis{}, Pavardesdydis{};
    deque<Mokinys> M2 = M;
    Vardodydis = SizeVD(M2);
    Pavardesdydis = SizePD(M2);
    M2.pop_back();
    GrupeD(M2);
    sort (M2.begin(), M2.end(), BySurnameD);
    ofstream fr("./rezultatai/Deque/Pagr/mokiniai-" + a + ".txt");
    fr << setw(Pavardesdydis+2) << left << "Pavarde" << setw(Vardodydis+2) << left << "Vardas" << setw(20) << left << "Galutinis-vidurkis" << setw(19) << left << "Galutinis-mediana" << setw(12) << left << "Kategorija" << endl;
    for(int i = 0; i < M2.size(); i++)
        fr << setw(Pavardesdydis+2) << left << M2[i].pavarde << setw(Vardodydis+2) << left << M2[i].vardas << setw(20) << left << fixed << setprecision(2) << M2[i].gVid << setw(19) << left << fixed << setprecision(2) << M2[i].gMed << setw(12) << left << M2[i].kategorija << endl;
    fr.close();
}
