#include<bits/stdc++.h>
using namespace std;

char str[100];

bool isAllDigit(){
    for(int i=0;str[i];i++){
        if(str[i]<'0' || str[i]>'9')return 0;
    }
    return 1;
}

int isfloat(){
    int cn=0,i;
    for(i=0;str[i]!='.';i++){
        if(str[i]=='.')continue;
        if(str[i]<'0' || str[i]>'9')return 0;
    }
    for(i++;str[i];i++){
        if(str[i]<'0' || str[i]>'9')return 0;
        cn++;
    }
    return cn;
}

int varChar(){
    if(str[0]!='c'|| str[1]!='h'||str[2]!='_')return 0;
    for(int i=3;str[i];i++){
        if(!isalnum(str[i]))return 0;
    }
    return 1;
}
int binaryVar(){
    if(str[0]!='b'|| str[1]!='n'||str[2]!='_')return 0;
    for(int i=3;str[i];i++){
        if(!isalnum(str[i]))return 0;
    }
    return 1;
}

int binary(){
    if(str[0]!='0')return 0;
    for(int i=1;str[i];i++){
        if(str[i]!='0' && str[i]!='1')return 0;
    }
    return 1;
}

int main()
{
    cin>>str;
    int ln=strlen(str);
    /*exp 4
    if((str[0]>='i' && str[0]<='n')||(str[0]>='I' && str[0]<='N'))
        puts("integer variable");
    else if(isAllDigit() && (str[0]>='1' && str[0]<='9' )&&ln<=4)
        puts("sort integer");
    else if(isAllDigit() && (str[0]>='1' && str[0]<='9' ))
        puts("long integer");
    else
        puts("undefined");
    */

    /* exp5
    if((str[0]>='a'&&str[0]<='h')||(str[0]>='A'&&str[0]<='H')||(str[0]>='o'&&str[0]<='z')||(str[0]>='O'&&str[0]<='Z')){

        puts("Float Variable");

    }
    else if((isfloat()==2||isfloat()==1)&&(str[0]>='1' && str[0]<='9'||str[0]=='.')){
        puts("float number");
    }
    else if((isfloat()>2)&&(str[0]>='1' && str[0]<='9'||str[0]=='.')){
        puts("double number");
    }
    else{
        puts("undefined");
    }
    */
    if(varChar())
        puts("character variable");
    else if(binaryVar())
        puts("binary variable");
    else if(binary())
        puts("binary");
    else
        puts("undefined");
    return 0;
}
