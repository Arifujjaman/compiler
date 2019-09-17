#include<stdio.h>
char str[100];

int isdigit(char ch){
    if(ch>='0' && ch<='9')return 1;
    return 0;
}
int ischar(char ch){
    if(ch>='a' && ch<='z'||ch>='A' && ch<='Z')return 1;
    return 0;
}
int isvowel(char ch){
    if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U')return 1;
    return 0;
}

void count(){
    int cnt=1,l=0,d=0,o=0,v=0,c=0,i,j;
    for(i=0;str[i];i++){
        if(ischar(str[i]))l++;
        if(isdigit(str[i]))d++;
        if(!isdigit(str[i]) && !ischar(str[i]))o++;
        if(ischar(str[i])){
            if(isvowel(str[i]))
                v++;
            else
                c++;

        }
        if(str[i]==' ')cnt++;
    }
    printf("\nnumer of letter : %d\n",l);
    printf("\nnumer of digit : %d\n",d);
    printf("\nnumer of word : %d\n",cnt);
    printf("\nnumer of other : %d\n",o-(cnt-1));
    printf("\nnumer of vowel : %d\n",v);
    printf("\nnumer of consonant : %d\n",c);

}

char letter[100],digit[100],other[100],vowel[100],consonant[100];
int l=0,d=0,o=0,v=0,c=0,i,x;
int ml[200],md[200],mo[200],mv[200],mc[200];

void separate(){
    for(i=0;str[i];i++){
        x=(int)str[i];

        if(ischar(str[i]) && !ml[x]){
            letter[l++]=str[i];
            letter[l++]=' ';
            ml[x]=1;
        }
        if(isdigit(str[i]) && !md[x]){
            digit[d++]=str[i];
            digit[d++]=' ';
            md[x]=1;
        }
        if(isvowel(str[i]) && !mv[x]){
            vowel[v++]=str[i];
            vowel[v++]=' ';
            mv[x]=1;
        }
         if(!isvowel(str[i]) &&ischar(str[i]) && !mc[x]){
            consonant[c++]=str[i];
            consonant[c++]=' ';
            mc[x]=1;
        }
        if(!isdigit(str[i])&& !ischar(str[i]) && !mo[x]){
            other[o++]=str[i];
            other[o++]=' ';
            mo[x]=1;
        }

        letter[l]='\0';
        digit[d]='\0';
        vowel[v]='\0';
        consonant[c]='\0';
        other[o]='\0';
    }

        printf("\n\nSeperated letter : %s\n",letter);
        printf("\nSeperated digit : %s\n",digit);
        printf("\nSeperated vowel : %s\n",vowel);
        printf("\n\nSeperated consonant : %s\n",consonant);
        printf("\n\nSeperated other : %s\n",other);

}


int main()
{

    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    scanf("%[^\n]",str);

    count();
    separate();
    char vw[300],cw[300];
    int j=0,vv=0,cc=0;

    if(isvowel(str[0])){
        for(j=0;str[j]!=' ';j++){
            vw[vv++]=str[j];
        }
        vw[vv++]=' ';
    }

    for(i=j;str[i];i++){
        if(str[i]==' '){
            if(isvowel(str[i+1])){
                for(j=i+1;str[j]!=' ';j++){
                    vw[vv++]=str[j];
                }
                vw[vv++]=' ';
            }

            else if(!isvowel(str[i+1])  &&  ischar(str[i+1])){
                for(j=i+1;str[j]!=' ';j++){
                    cw[cc++]=str[j];
                }
                cw[cc++]=' ';
            }
        }
    }

    printf("\n\nvowel word : %s\n",vw);
    printf("\nconsonant word : %s\n",cw);
    return 0;

}
