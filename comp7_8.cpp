#include<bits/stdc++.h>
using namespace std;

string str;

string keyword[32]={"auto","double","int","struct","break","else","long",

       "switch","case","enum","register","typedef","char",

       "extern","return","union","const","float","short",

       "unsigned","continue","for","signed","void","default",

       "goto","sizeof","voltile","do","if","static","while"};


int i=0,cnt=0;
int key(){
    for(i = 0 ; i < 32 ; i++){
        if(str == keyword[i])return 1;
    }
    return 0;
}

int digit()
{
    for(i=0;i<str.size();i++){
        if(!isdigit(str[i]))return 0;

    }
    return 1;
}

int ar(){
    if(str == "+"||str == "-"||str == "/"||str == "*"||str == "=")return 1;
    return 0;
}
int re(){
    if(str == "<"||str == ">"||str == "<=" || str == ">="||str == "=="||str == "||"||str == "&&")return 1;
    return 0;
}



int main(){
    freopen("comp7_8.cpp","r",stdin);
    freopen("ooo.txt","w",stdout);

    while(cin >> str){
        if(key())cout<<"keyword: "<<str<<endl<<endl;
        if(digit())cout<<"number: "<<str<<endl<<endl;
        if(ar())cout<<"arithmetic: "<<str<<endl<<endl;
        if(re())cout<<"relational: "<<str<<endl<<endl;
    };

    return 0;
}
