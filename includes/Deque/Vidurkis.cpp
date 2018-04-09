double VidurkisD(deque<Mokinys>& M, int& sk)
{
    double suma = 0;
    for(int i = 0; i < M[sk].pSk; i++)
        suma += M[sk].Paz[i];
    return suma/M[sk].pSk;
}
