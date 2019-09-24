#include<bits/stdc++.h>
using namespace std;

char str[100];

bool isOther(){
    for(int i=0; str[i];i++){
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z') || (str[i]>='0' && str[i]<='9') || str[i]=='_'){
            continue;
        }
        else{
            return 1;
        }
    }
    return 0;
}

bool isChar(){
    if(str[0]=='c' && str[1]=='h' && str[2]=='_'){
        for(int i=3;str[i];i++){
            if(isalnum(str[i])){
                continue;
            }
            else{
                return 0;
            }
        }
        return 1;
    }
    return 0;

}

bool isBinaryVar(){
    if(str[0]=='b' && str[1]=='n' && str[2]=='_'){
        for(int i=3;str[i];i++){
            if(isalnum(str[i])){
                continue;
            }
            else{
                return 0;
            }
        }
        return 1;
    }
    return 0;
}

bool isBinaryNumber(){
    if(str[0]=='0' && (str[1]=='0' || str[1]=='1')){
        for(int i=2;str[i];i++){
            if(str[i]=='0' || str[i]=='1'){
                return 1;
            }
            else{
                return 0;
            }
        }
        return 1;
    }
    return 0;
}

int main(){

    cin >> str;

    if(isOther()){
        puts("Invalid Input or Undefined");
    }
    else if(isChar()){
        puts("Character Variable");
    }
    else if(isBinaryVar()){
        puts("Binary Variable");
    }
    else if(isBinaryNumber()){
        puts("Binary Number");
    }
    else{
        puts("Invalid Input or Undefined");
    }

    return 0;
}
