


#include <string>
#include <iostream>
#include <algorithm>

using namespace std;
int compress(vector<char>& chars) {
    
    int i=0;
    int vecSize =0;

    while (i<chars.size()){

        int j =i+1;

        while (j<chars.size() && chars[i] == chars[j]){
            j++;
        }
        chars[vecSize] = chars[i];
        vecSize++;

        int count = j-i;

        if (count >1){
            string dcount = to_string(count);

            for (auto s:dcount){
                chars[vecSize] = s;
                vecSize++;
            }
        }
        i=j;

    }
    return vecSize;
}

int main(){
    vector<char> chars = {'a','a','b','b','c','c','c'};
    compress(chars);
}
