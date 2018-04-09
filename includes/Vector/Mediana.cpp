double Mediana(vector<Mokinys>& M, int& sk)
{
    sort (M[sk].Paz.begin(), M[sk].Paz.end());
    if(M[sk].pSk % 2 == 0)
        return double(M[sk].Paz[M[sk].pSk/2])/double(M[sk].Paz[M[sk].pSk/2-1]);
    else
        return M[sk].Paz[(M[sk].pSk-1)/2];
}
