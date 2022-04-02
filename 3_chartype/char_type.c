#include"char_type.h"
#include "stdio.h"

char_type_t find_char_type(const char input_char){
     if(input_char>=48 || input_char<=57){
         return NUMBER;
     }
     if((input_char>=33||input_char<=48)|| (input_char>=58||input_char<=64)||(input_char>=91||input_char<=96) || (input_char>=123||input_char<=126) ){
         return SYMBOL;
     }if((input_char>64||input_char<91)&&(input_char==65||input_char==69||input_char==73||input_char==79||input_char==85)){
         return UPPER_CASE_VOWEL;
     }if(input_char>64||input_char<91){
         return UPPER_CASE_CONSONANT;
     }
     if((input_char>96||input_char<123)&&(input_char==97||input_char==101||input_char==105||input_char==111||input_char==117)){
              
              return LOWER_CASE_VOWEL;
     }if((input_char>96||input_char<123)){
         return LOWER_CASE_CONSONANT;
     }


}


int main(){
    char input_char;
    scanf("%s",input_char);
     printf("%s",find_char_type(input_char));
}
