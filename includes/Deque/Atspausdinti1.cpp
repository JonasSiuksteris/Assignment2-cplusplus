void AtspausdintiD1(deque<Mokinys>& M, string a)
{
    deque <Mokinys> M2 = M, Kiet, Varg;
    int Vardodydis{}, Pavardesdydis{};
    Vardodydis = SizeVD(M);
    Pavardesdydis = SizePD(M);
    M2.pop_back();
    for(int i = 0; i < M2.size(); i++){
        if(M2[i].gVid >= 5)
            Kiet.push_back(M2[i]);
        else
            Varg.push_back(M2[i]);
    }
    sort (Kiet.begin(), Kiet.end(), BySurname);
    sort (Varg.begin(), Varg.end(), BySurname);
    ofstream fr("./rezultatai/Deque/1/mokiniai-" + a + "_1.txt");
    fr << setw(Pavardesdydis+2) << left << "Pavarde" << setw(Vardodydis+2) << left << "Vardas" << setw(20) << left << "Galutinis-vidurkis" << setw(19) << left << "Galutinis-mediana" << endl;
    fr << endl << "Kietiakai : " << endl << endl;
    for(int i = 0; i < Kiet.size(); i++)
        fr << setw(Pavardesdydis+2) << left << Kiet[i].pavarde << setw(Vardodydis+2) << left << Kiet[i].vardas << setw(20) << left << fixed << setprecision(2) << Kiet[i].gVid << setw(19) << left << fixed << setprecision(2) << Kiet[i].gMed << endl;
    fr << endl << "Vargseliai : " << endl << endl;
    for(int i = 0; i < Varg.size(); i++)
        fr << setw(Pavardesdydis+2) << left << Varg[i].pavarde << setw(Vardodydis+2) << left << Varg[i].vardas << setw(20) << left << fixed << setprecision(2) << Varg[i].gVid << setw(19) << left << fixed << setprecision(2) << Varg[i].gMed << endl;
    fr.close();
}
