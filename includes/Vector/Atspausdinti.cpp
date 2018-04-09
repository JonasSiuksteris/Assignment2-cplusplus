bool BySurname(const Mokinys& x, const Mokinys& y)
{
    return x.vardas < y.vardas;
}

void Atspausdinti(vector<Mokinys>& M, string a)
{
    int Vardodydis{}, Pavardesdydis{};
    vector<Mokinys> M2 = M;
    Vardodydis = SizeV(M2);
    Pavardesdydis = SizeP(M2);
    Grupe(M2);
    sort (M2.begin(), M2.end(), BySurname);
    ofstream fr("./rezultatai/Vektoriai/Pagr/mokiniai-" + a + ".txt");
    fr << setw(Pavardesdydis+2) << left << "Pavarde" << setw(Vardodydis+2) << left << "Vardas" << setw(20) << left << "Galutinis-vidurkis" << setw(19) << left << "Galutinis-mediana" << setw(12) << left << "Kategorija" << endl;
    for(int i = 0; i < M2.size(); i++)
        fr << setw(Pavardesdydis+2) << left << M2[i].pavarde << setw(Vardodydis+2) << left << M2[i].vardas << setw(20) << left << fixed << setprecision(2) << M2[i].gVid << setw(19) << left << fixed << setprecision(2) << M2[i].gMed << setw(12) << left << M2[i].kategorija << endl;
    fr.close();
}
