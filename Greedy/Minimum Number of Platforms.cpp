int calculateMinPatforms(int at[], int dt[], int n) {
    sort(at,at+n);
    sort(dt,dt+n);
    int i=0, j=0;
    int maxi=0;
    int pf=0;
    while(i<n && j<n){
        if(at[i]<=dt[j]){
            i++; 
            pf++;
        }
        else{
            j++;
            pf--;
        }
        maxi = max(pf,maxi);       
    }
    return maxi;
}
