bool ByGrade(const Mokinys& x, const Mokinys& y)
{
    return x.gVid < y.gVid;
}

void Atspausdinti2(vector<Mokinys>& M, string a)
{
    int Vardodydis{}, Pavardesdydis{};
    vector<Mokinys> Kiet, M2 = M;
    Vardodydis = SizeV(M2);
    Pavardesdydis = SizeP(M2);
    sort(M2.begin(), M2.end(), ByGrade);
    for(int i = M2.size() - 1; i >= 0; i--){
        if(M2[i].gVid >= 5){
            Kiet.push_back(M2[i]);
            M2.pop_back();
        }
    }
    sort (Kiet.begin(), Kiet.end(), BySurname);
    sort (M2.begin(), M2.end(), BySurname);
    ofstream fr("./rezultatai/Vektoriai/2/mokiniai-" + a + "_2.txt");
    fr << setw(Pavardesdydis+2) << left << "Pavarde" << setw(Vardodydis+2) << left << "Vardas" << setw(20) << left << "Galutinis-vidurkis" << setw(19) << left << "Galutinis-mediana" << endl;
    fr << endl << "Kietiakai : " << endl << endl;
    for(int i = 0; i < Kiet.size(); i++)
        fr << setw(Pavardesdydis+2) << left << Kiet[i].pavarde << setw(Vardodydis+2) << left << Kiet[i].vardas << setw(20) << left << fixed << setprecision(2) << Kiet[i].gVid << setw(19) << left << fixed << setprecision(2) << Kiet[i].gMed << endl;
    fr << endl << "Vargseliai : " << endl << endl;
    for(int i = 0; i < M2.size(); i++)
        fr << setw(Pavardesdydis+2) << left << M2[i].pavarde << setw(Vardodydis+2) << left << M2[i].vardas << setw(20) << left << fixed << setprecision(2) << M2[i].gVid << setw(19) << left << fixed << setprecision(2) << M2[i].gMed << endl;
    fr.close();
}
