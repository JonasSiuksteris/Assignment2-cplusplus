int SizeP(vector<Mokinys>& M)
{
    int did = 7;
    for(int i = 0; i < M.size(); i++)
        if(M[i].pavarde.length() > did)
            did = M[i].pavarde.length();
    return did;
}
