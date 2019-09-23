#include<bits/stdc++.h>
using namespace std;

char str[1000];

bool isother()
{
    for(int i=0;str[i];i++)
    {
        if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z')||(str[i]>='0'&&str[i]<='9')||str[i]=='.')
        {
            continue;
        }
        else
        {
            return 1;
        }
    }
    return 0;
}

int isfloat()
{
    int cn=0;
    for(int i=0;str[i]!='.';i++)
    {
        if(str[i]=='.')continue;
        if(str[i]<'0'||str[i]>'9')return 0;
    }
    int i;
    for(i++;str[i];i++)
    {
        if(str[i]<'0'||str[i]>'9')return 0;
        cn++;
    }
    return cn;
}
int main()
{
    cin>>str;

    int ln=strlen(str);

    if(isother())
    {
        puts("undefined");
    }
    else if((str[0]>='a'&&str[0]<='h')||(str[0]>='A'&&str[0]<='H')||(str[0]>='o'&&str[0]<='z')||(str[0]>='O'&&str[0]<='Z'))
    {
        puts("Float variable");
    }
    else if((isfloat()==2||isfloat()==1)&&((str[0]>='1'&&str[0]<='9')||str[0]=='.'))
    {
        puts("Float number");
    }
     else if((isfloat()>2)&&(str[0]>='1'&&str[0]<='9'||str[0]=='.'))
    {
        puts("Double number");
    }
    else
    {
        puts("Undefined");
    }
    return 0;

}
