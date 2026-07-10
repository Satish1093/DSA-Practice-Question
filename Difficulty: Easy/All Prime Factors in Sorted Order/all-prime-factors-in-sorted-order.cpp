void printPrimeFactorization(int n) {
    for(int i =2;i<=n;i++){
        while(n%i == 0){
            int factorial =1;
            factorial = factorial*i;
            cout<<factorial<<" ";
            n = n/i;
        }
    }
    
}