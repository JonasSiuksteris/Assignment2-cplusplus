int SizePL(list<Mokinys>& M)
{
    int did = 7;
    for (auto const& i : M) {
        if(i.pavarde.length() > did)
            did = i.pavarde.length();
    }
    return did;
}
