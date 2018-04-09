int SizeV(vector<Mokinys>& M)
{
    int did = 6;
    for(int i = 0; i < M.size(); i++)
        if(M[i].vardas.length() > did)
            did = M[i].vardas.length();
    return did;
}
