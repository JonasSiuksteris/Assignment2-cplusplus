Listai(int& sk)
{
    clock_t t1, t2, t3, t4, t5;
    list<Mokinys> M;

    cout << "Su List:" << endl << endl;
    for(int i = 10;i < 100001; i = i * 10){
        t1 = clock();
        MokinioInfoAL(M, sk, i);
        t2 = clock();
        AtspausdintiL(M, to_string(i));
        t3 = clock();
        AtspausdintiL1(M, to_string(i));
        t4 = clock();
        AtspausdintiL2(M, to_string(i));
        t5 = clock();
        cout << "Su " << i << " failu trunka " << endl;
        cout << "1. Be konteineriu - "<< ((float)t3 - (float)t1)/1000 << " s" << endl;
        cout << "2. Su 2 konteineriais - " << ((float)t4 - (float)t3 + (float)t2 - (float)t1)/1000 << " s" << endl;
        cout << "3. Su 1 konteineriu - " << ((float)t5 - (float)t4 + (float)t2 - (float)t1)/1000 << " s" << endl << endl;
        M.clear();
        sk = 0;
    }

}
