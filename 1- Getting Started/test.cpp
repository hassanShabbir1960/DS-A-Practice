#include <iostream>
using namespace std;


void print_fibseries(int n){
    int a = 0;
    int b= 1;

    for (int i=0;i<=n;i++){

        if (i==0 || i==1){
            cout<<i<<endl;
        }
        else{
            int temp = a+b;
            cout<< temp <<endl;
            a = b;
            b=temp;
        }
    }
}

bool Is_Prime(int n){
    int count=0;
    bool isPrime = true;
    for (int i=2;i<n;i++){
        if (n % i ==0){
            isPrime=false;
            break;
        }
    }
    return isPrime
}



int main(){
    // print_fibseries(5);
    cout<<Is_Prime(5);
    return 0;
}
