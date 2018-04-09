double MedianaL(Mokinys& M)
{
    sort (M.Paz.begin(), M.Paz.end());
    if(M.pSk % 2 == 0)
        return double(M.Paz[M.pSk/2])/double(M.Paz[M.pSk/2-1]);
    else
        return M.Paz[(M.pSk-1)/2];
}
