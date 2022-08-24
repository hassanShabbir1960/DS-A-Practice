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

void Notes_Conversion(int amount){
    /// We need to calculate the number of currency notes to meet the total amount
    /// We have option of these notes : [100,50,20,1]
    /// Using a greedy approach
    int notes[] ={100,50,20,1};
    for (int i=0;i<4;i++){
        int num = amount/notes[i];
        if (num !=0){
            cout <<num <<" of " <<notes[i]<<endl;
            amount =amount - (num*notes[i]) ;
        }
    }
}

int factorial(int n){
    // Function to calculate factorial
    int fact=1;
    for (int i=1;i<=n;i++){
        fact = fact * i; 
    }
    return fact;
}

int nCr(int n, int r){
    // Function to calculate total number of combinations
    return factorial(n)/ (factorial(r) * factorial(n-r));
}

int Count_Setbits(int a , int b){
    // Function to count set bits in binary numbers
    int result= 0;
    while(a!=0){
        int bit = a%10;
        if (bit==1){
            result++;
        }
        a = a/10; 
    }
    while(b!=0){
        int bit = b%10;
        if (bit==1){
            result++;
        }
        b = b/10; 
    }
    return result;
}


void Print_Array(int array[], int size){
    // Function to print array
    for( int i=0;i<size;i++){
        cout<<array[i]<<" , "; 
    }
    cout<<endl;
}
void Reverse_Array(int array[], int size){
    // Function to reverse an array
    int start = 0;
    int end = size-1;

    while (start < end){

        /// Swapping values
        int temp = array[start];
        array[start] = array[end];
        array[end] = temp;
        start++;
        end--;
    }

}

void Alternate_swap(int array[],int size){
    // Function to swap alternate indexes of array
    for (int i =0;i<size -1 ;){
        int temp = array[i];
        array[i] = array[i+1];
        array[i+1] = temp;
        i+=2;
    }

}

int findUnique(int *arr, int size){
    
    // for (int i=0;i<size;i++){
    //     int count = 0;
    //     for (int j=0;j<size;j++){
    //         if (arr[i]==arr[j]){
    //             count++;
    //         }
        
    //     }
    //     if (count==1){
    //         return arr[i];
    //     }
    // }
    // return -1;


    /// Using XOR aaproach
    int ans=0;

    for (int i=0;i<size;i++){
        ans = ans^arr[i];
        cout<<ans<<endl;
    }

    
    return ans;


}

int main(){
    // print_fibseries(5);
    int array1[7] = {2, 3, 2, 6, 3 ,6 ,1};
    cout<<findUnique(array1,7);

    
    return 0;
}
