bool compare_b( const Mokinys& first, const Mokinys& second )
{
    return first.gVid < second.gVid ;
}
void AtspausdintiL2(list<Mokinys>& M, string a)
{
    int Vardodydis{}, Pavardesdydis{};
    list<Mokinys> Kiet, M2 = M;
    Vardodydis = SizeVL(M2);
    Pavardesdydis = SizePL(M2);
    M2.pop_back();
    M2.sort(compare_b);
    for (auto& i : M2){
        if(i.gVid >= 5){
            Kiet.push_back(i);
            M2.pop_back();
        }


    }
    Kiet.sort(compare_a);
    M2.sort(compare_a);
    ofstream fr("./rezultatai/List/2/mokiniai-" + a + ".txt");
    fr << setw(Pavardesdydis+2) << left << "Pavarde" << setw(Vardodydis+2) << left << "Vardas" << setw(20) << left << "Galutinis-vidurkis" << setw(19) << left << "Galutinis-mediana" << setw(12) << left << "Kategorija" << endl;
    fr << endl << "Kietiakai : " << endl << endl;
    for(auto const& i : Kiet)
        fr << setw(Pavardesdydis+2) << left << i.pavarde << setw(Vardodydis+2) << left << i.vardas << setw(20) << left << fixed << setprecision(2) << i.gVid << setw(19) << left << fixed << setprecision(2) << i.gMed << setw(12) << left << i.kategorija << endl;
    fr << endl << "Vargseliai : " << endl << endl;
    for(auto const& i : M2)
        fr << setw(Pavardesdydis+2) << left << i.pavarde << setw(Vardodydis+2) << left << i.vardas << setw(20) << left << fixed << setprecision(2) << i.gVid << setw(19) << left << fixed << setprecision(2) << i.gMed << setw(12) << left << i.kategorija << endl;

    fr.close();
}
