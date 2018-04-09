bool compare_a( const Mokinys& first, const Mokinys& second )
{
    return first.vardas < second.vardas ;
}
void AtspausdintiL(list<Mokinys>& M, string a)
{
    int Vardodydis{}, Pavardesdydis{};
    list<Mokinys> M2 = M;
    Vardodydis = SizeVL(M2);
    Pavardesdydis = SizePL(M2);
    M2.pop_back();
    GrupeL(M2);
    M2.sort(compare_a);
    ofstream fr("./rezultatai/List/Pagr/mokiniai-" + a + ".txt");
    fr << setw(Pavardesdydis+2) << left << "Pavarde" << setw(Vardodydis+2) << left << "Vardas" << setw(20) << left << "Galutinis-vidurkis" << setw(19) << left << "Galutinis-mediana" << setw(12) << left << "Kategorija" << endl;
    for(auto const& i : M2)
        fr << setw(Pavardesdydis+2) << left << i.pavarde << setw(Vardodydis+2) << left << i.vardas << setw(20) << left << fixed << setprecision(2) << i.gVid << setw(19) << left << fixed << setprecision(2) << i.gMed << setw(12) << left << i.kategorija << endl;
    fr.close();
}
