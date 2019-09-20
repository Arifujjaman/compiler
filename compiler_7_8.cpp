
#include<bits/stdc++.h>

using namespace std;



string keywords[32] = {"auto","double","int","struct","break","else","long",

       "switch","case","enum","register","typedef","char",

       "extern","return","union","const","float","short",

       "unsigned","continue","for","signed","void","default",

       "goto","sizeof","voltile","do","if","static","while"};



string str;

int i = 0,x,cnt=0;

int isKey()

{

    for(i = 0;i<32;i ++){

        if(str == keywords[i] ){

            return 1;

        }

    }

    return 0;

}



int isArith(string sh)

{

        if(sh == "+" || sh == "-" || sh == "*"

            || sh == "/" || sh == "=" || sh == "%") return 1;

        else

            return 0;





}

bool isRelational(string s)

{



        if(s == ">" || s == "<" || s == ">="

            || s == "<=" || s == "==" || s == "!=") return 1;

            else

                return 0;



}

int number(string s)

{

    for(i = 0;i < s.size();i ++){

        if(s[i] == '.')

            cnt ++;

        else if(!isdigit(s[i])){

            return -1;

        }

    }

    if(cnt == 0) return 1;

    if(cnt == 1) return 2;



    return 0;

}

int main()

{

    freopen("program7&8.cpp","r",stdin);

    freopen("outt.txt","w",stdout);

    while(cin>>str){

        //cout<<str;

        if(isKey()){

            cout<<str<<" :keyword\n";

        }

        else if(str[0] == '_' || isalpha(str[0])){

                 cout<<str<<" :identifier\n";

        }

       else if(isArith(str)){

             cout<<str<<" :Arithmetic\n";

        }

        else if(isRelational(str)){

             cout<<str<<" :Relational operator\n";

        }

        else{

           x = number(str);

           if(x == -1)

            puts("undefined");

           else if(x == 1){

            puts("integer");

           }

           else if(x == 2){

            puts("float");

           }

           else

            puts("undefined");

        }

    }

    return 0;

}
