double VidurkisL(Mokinys& M)
{
    double suma = 0;
    for(int i = 0; i < M.pSk; i++)
        suma += M.Paz[i];
    return suma/M.pSk;
}
