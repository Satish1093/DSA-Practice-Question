/*You are required to complete this function*/
void addFraction(int num1, int den1, int num2, int den2) {

    int lcm=(den1 / __gcd(den1,den2))*den2;
    
    int newNum1 =num1 * (lcm /den1);
    int newNum2 = num2 * (lcm /den2 );
    
    int sumNum = newNum1 + newNum2;
    
    int g=__gcd(sumNum,lcm);
    sumNum /= g;
    lcm /=g;
   cout << sumNum << "/" << lcm << endl;
}