
#include <iostream>
using namespace std;

// int arrangeCoins(int n) {
//     int steps=0;
//     int remaining =n;
//     for (int i =1;i<=n;i=i+1){
//         //cout<< (i*(i+1)) /2<<endl;
//         if (remaining - i >= 0){
//             remaining = remaining -i;
//             steps++;
//         }
//         else{
//             return steps;
//         }

//     } 
//     return -1;    
    
// }


/// Using Binary search

int sumOfSeries(int n){
    return (n*(n+1))/2;
}

int arrangeCoins(int n) {
    int l =1;
    int h = n;
    int mid;

    while (l<=h){
        mid = l + (h -l )/2;
        int temp = sumOfSeries(mid);
        if (temp ==n){
            return mid;
        }
        else if (temp > n)
        {
            h = mid -1;
        }
        
        else{
            l = mid +1;
        }

    }  
    return h; 
    
}




int main(){
    cout<<arrangeCoins(2);


}
