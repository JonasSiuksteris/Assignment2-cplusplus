Skaityti()
{
    random_device rd;
    mt19937 mt(rd());
    uniform_int_distribution<int> dist(1, 10);

    for(int i = 10;i < 100001; i = i * 10){
        ofstream fd("kursiokai-" + to_string(i) + ".txt");
        fd << "Pavarde     Vardas      ND1  ND2   ND3  ND4  ND5  Egzaminas" << endl;
        for(int j = 0; j < i; j++){
            fd << "Pavarde" << j+1 << "  Vardas" << j+1;
            for(int l = 0; l < 6; l++){
                fd << " " << dist(mt);
            }
            fd << endl;
        }
        fd.close();
    }
}
