#include <iostream>
using namespace std;

#include <iostream>
using namespace std;


void printingN(int i , int n  ){
    if(n<0) return;

    cout<< n << endl;

    printingN(n , --n);
}

// Print from N to 1 using back tracking

void printNto1(int i , int n){
    if(i > n)return ;

    printNto1(i+1 , n);

    cout << i << endl;
}



int Factorialrecursion(int n){
    if(n==0){
        return 1;
    }

    return n * Factorialrecursion(n-1);
}


int main(){
    int n = 5;

    // cout << "Print 1 to n " ; printingN(n); 

    // cout << "Printing N to 1"<< "\n" ;
    //   printNto1(1 , n)  ;
      
      cout << "Printing factorial" << endl << Factorialrecursion(n);
      
    return 0;
}