int SizeVL(list<Mokinys>& M)
{
    int did = 6;
    for (auto const& i : M) {
        if(i.vardas.length() > did)
            did = i.vardas.length();
    }
    return did;
}
