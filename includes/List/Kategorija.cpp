void GrupeL(list<Mokinys>& M)
{
    for (auto& i : M){
        if(i.gVid >= 5)
            i.kategorija = "kietiakas";
        else
            i.kategorija = "vargsiukas";
    }

}
