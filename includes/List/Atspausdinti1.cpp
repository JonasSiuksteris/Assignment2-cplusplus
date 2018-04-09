void AtspausdintiL1(list<Mokinys>& M, string a)
{
    int Vardodydis{}, Pavardesdydis{};
    list<Mokinys> Varg, Kiet, M2 = M;
    Vardodydis = SizeVL(M2);
    Pavardesdydis = SizePL(M2);
    M2.pop_back();
    for (auto& i : M2){
        if(i.gVid >= 5)
            Kiet.push_back(i);
        else
            Varg.push_back(i);
    }
    Kiet.sort(compare_a);
    Varg.sort(compare_a);
    ofstream fr("./rezultatai/List/1/mokiniai-" + a + ".txt");
    fr << setw(Pavardesdydis+2) << left << "Pavarde" << setw(Vardodydis+2) << left << "Vardas" << setw(20) << left << "Galutinis-vidurkis" << setw(19) << left << "Galutinis-mediana" << setw(12) << left << "Kategorija" << endl;
    fr << endl << "Kietiakai : " << endl << endl;
    for(auto const& i : Kiet)
        fr << setw(Pavardesdydis+2) << left << i.pavarde << setw(Vardodydis+2) << left << i.vardas << setw(20) << left << fixed << setprecision(2) << i.gVid << setw(19) << left << fixed << setprecision(2) << i.gMed << setw(12) << left << i.kategorija << endl;
    fr << endl << "Vargseliai : " << endl << endl;
    for(auto const& i : Varg)
        fr << setw(Pavardesdydis+2) << left << i.pavarde << setw(Vardodydis+2) << left << i.vardas << setw(20) << left << fixed << setprecision(2) << i.gVid << setw(19) << left << fixed << setprecision(2) << i.gMed << setw(12) << left << i.kategorija << endl;

    fr.close();
}
