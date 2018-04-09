void MokinioInfoAtest(vector<Mokinys>& M, int& sk, int a)
{

    string eilute;
    int pasirinkimas{};
    ifstream fd("kursiokai-" + to_string(a) + ".txt");
    getline(fd, eilute);
    while(!fd.eof())
    {
        M.push_back(Mokinys());
        fd >> M[sk].pavarde >> M[sk].vardas;
        getline(fd, eilute);
        for(int i = 0; i < eilute.length(); i++){
            if(eilute.length()-2 == i && eilute[i] == '1'){
                M[sk].egz = 10;
                i++;
            }
            else if(eilute.length()-1 == i)
                M[sk].egz = eilute[i] - '0';
            else if(!(eilute[i] == ' ')){
                if(eilute[i] == '1' && eilute[i+1] == '0'){
                    M[sk].Paz.push_back(10);
                    i++;
                }
                else
                    M[sk].Paz.push_back(eilute[i]- '0');
                M[sk].pSk ++;
            }
        }
        M[sk].gVid = 0.4 * Vidurkis(M, sk) + 0.6 * M[sk].egz;
        M[sk].gMed = 0.4 * Mediana(M, sk) + 0.6 * M[sk].egz;
        sk++;
    }
    M.pop_back();
    sk--;
}
