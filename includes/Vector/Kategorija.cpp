void Grupe(vector<Mokinys>& M)
{
    for(int i = 0; i < M.size(); i++){
        if(M[i].gVid >= 5)
            M[i].kategorija = "kietiakas";
        else
            M[i].kategorija = "vargsiukas";
    }
}
