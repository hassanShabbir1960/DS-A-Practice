#include <iostream>
#include <math.h>

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
    return isPrime;
}


/// Function to calculate binary of positve integer
int Decimal_to_Binary(int n){   
    int answer=0;
    int i =0;
    while(n!=0){
        int bit = n & 1;
        answer = ( pow(10,i) * bit ) + answer ;
        n = n>> 1;  
        i+=1;
    }
    return answer;
}

/// Function to calculate binary of negative integer
int Binary_of_Negative(int n){
    n = abs(n);
    int bin = Decimal_to_Binary(n);
    
    //storing binary in an array
    int arr[32]={0};
    int i=1;
    while(n!=0){
        int bit = n & 1;
        n = n>> 1;  
        arr[32-i] = bit;
        i+=1;
    }
    // Taking 2s compliment
    bool check=false;
    int first_bit =-1;
    // Starting loop from right to left
    for (int i=31;i>=0;i--){
        if (check ==false && arr[i] ==1){ // look for the first 1
            check =true;
            first_bit =i;
        }
        if (first_bit!=i && check==true){ // First 1 has been found, invert all the other bits
            if (arr[i]==0){ // Inverting bits
                arr[i]=1;
            }
            else{
                arr[i]=0;
            }
        }
    }
    int ans =0;
    for (int i=24;i<32;i++)// Representing answer in 8 bit format, because we cannot store full number in integer
       ans = ans *10 + arr[i];

    return ans;
}

// Function to convert binary to decimal
int Binary_to_Decimal(int n){
    int i =0;
    int sum =0;
    while (n!=0){
        int bit =  n%10;
        sum =sum + (bit * pow(2,i) );
        //cout<<bit<<endl;
        i+=1; 
        n = n/10;
    }
    return sum;
}

bool isPowerOfTwo(int n) {
    int result =0;
    int i =0;
    while(result<n){
        result = pow(2,i);
        if (result ==n){
            return true;
        }
        i++;
    }

    return false;
}


int main(){
    // print_fibseries(5);
    cout<<isPowerOfTwo(0);
    return 0;
}
