#include"txtfind.h"
#include<stdio.h>
#include<string.h>
int GetLine(char s[]){
    char c;
    int count = 0;
    while ((scanf("%c", &c)) >0 )
    {
        if (count == LINE){
            break;
        }
        if (c == '\n'){
            break;
        }
        s[count] = c;

        count++;
    }
    
    s[count] = '\0';

    return count;
}
int getword(char w[]){
    char c;
    int count = 0;
    while((scanf("%c",&c ))> 0){
        if(count == WORD){
            break; 
        }
        if ((c == '\n') || (c == '\t') || (c == ' ') || (c == EOF)){
            break;
        }
        
        w[count]=c;
  
        count++;
    } 

    w[count] = '\0';
    return count;
}
int getlen(char s[]){
    int counter=0;
    while(s[counter]!= '\n' && s[counter]!= '\0' ){
        counter++;
    }
    return counter;
}
int get_similar_len(char s[]){
    int counter=0;
    while(s[counter]!= '\0' && s[counter]!= '\n' && s[counter]!= '\t' && s[counter]!= ' '){
        counter++;
    }
    return counter;
}
int substring(char* str1,char* str2){
       int m,n;
       m=getlen(str2);
       n=getlen(str1);
       for(int i=0;i<=n-m;i++){
           int j;
           for(j=0;j<m;j++){
               if(str1[i+j]!=str2[j]){
                   break;
               }
               
           }
           if(j==m){
                       return 1;
                   }
           
       }
       return 0;
}

int similar(char *s, char *t,int n){
    int wrong = 0;
    int j = 0;
    if(get_similar_len(s) - n > get_similar_len(t)){
        return 0;
    }
    if(get_similar_len(s)<get_similar_len(t)){
        return 0;
    }
    for(int i = 0; i < get_similar_len(s); i++){
        if(s[i] == t[j]){
            j++;
        }else{
            wrong++;

        }
        if(wrong > n){
            return 0;
        }
    }
    return 1;
}
void print_lines(char *str){
    char line[LINE];
    int val;

    
    GetLine(line);
    while ((val = GetLine(line)) > 0)
    {
        if (substring(line, str) == 1)
        {
            for (int i = 0; i < val; i++)
            {
                printf("%c", line[i]);
            }
            printf("\n");
        }
    }
}
void print_similar_words(char *str){
    char word[WORD];
    int val;
    getword(word);
    while((val = getword(word)) > 0){
        if((similar(word,str,1))==1){
            for(int i=0;i<val;i++){
                printf("%c",word[i]);
            }
            printf("\n");
        }
    }

}