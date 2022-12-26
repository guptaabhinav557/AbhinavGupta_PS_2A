int connectingTowns(int n, int routes_count, int* routes) {
    int i;
    int res=1;
    for(i=0;i<routes_count;i++)
    {
        res=(res*routes[i]%1234567);
    }
    return res;
}
