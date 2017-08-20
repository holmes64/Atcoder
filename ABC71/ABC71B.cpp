#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main(){

    bool dic[26]={false};

    string S;
    cin >> S;
    int result;

    for(int i=0; i<S.size(); i++){
        dic[S[i]-97] = true;
    }

    int cnt=0;

    for(int i=0; i<26; i++){
        if(dic[i] == true) cnt++;

        if(dic[i] == false){
            result = i;
            break;
        }
    }

    if(cnt == 26){
        printf("None\n");
    }else{
        printf("%c\n", result+97);
    }
    return 0;
}