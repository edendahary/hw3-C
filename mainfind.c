#include"txtfind.h"
#include<stdio.h>
#ifndef ISORT_C
#define ISORT_C
int main(){
    char our_word[WORD];
    char wich_option[WORD];
    getword(our_word);
    getword(wich_option);
    if(wich_option[0] == 'a')
    {
        print_lines(our_word);
    } else if(wich_option[0] == 'b') {
        print_similar_words(our_word);
    }
    return 0;
} 
#endif