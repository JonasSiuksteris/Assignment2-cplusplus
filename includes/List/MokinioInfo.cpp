void MokinioInfoAL(list<Mokinys>& M, int& sk, int a)
{

    string eilute, laikinas;
    int pasirinkimas{};
    ifstream fd("kursiokai-" + to_string(a) + ".txt");
    getline(fd, eilute);
    while(!fd.eof())
    {
        Mokinys Skait;
        fd >> Skait.pavarde >> Skait.vardas;
        getline(fd, eilute);
        for(int i = 0; i < eilute.length(); i++){
            if(eilute.length()-2 == i && eilute[i] == '1'){
                Skait.egz = 10;
                i++;
            }
            else if(eilute.length()-1 == i)
                Skait.egz = eilute[i] - '0';
            else if(!(eilute[i] == ' ')){
                if(eilute[i] == '1' && eilute[i+1] == '0'){
                    Skait.Paz.push_back(10);
                    i++;
                }
                else
                    Skait.Paz.push_back(eilute[i]- '0');
                Skait.pSk ++;
            }
        }
        Skait.gVid = 0.4 * VidurkisL(Skait) + 0.6 * Skait.egz;
        Skait.gMed = 0.4 * MedianaL(Skait) + 0.6 * Skait.egz;
        M.push_back(Skait);
        sk++;
    }
    sk--;
    fd.close();
}
