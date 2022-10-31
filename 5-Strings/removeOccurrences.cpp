#include <string>
#include <iostream>
using namespace std;



string removeOccurrences(string s, string part) {
    

    while ( s.empty()==0 && s.find(part)!=-1 ){
        int ind = s.find(part);
        s.erase(ind, part.length() );
        
    }
    return s;
    
}


int main(){
    string s = "eemckxmckx";
    string part = "emckx";
    cout<<removeOccurrences(s, part) ;


}