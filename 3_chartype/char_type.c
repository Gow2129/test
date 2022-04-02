#include"char_type.h"
#include "stdio.h"

char_type_t find_char_type(const char input_char){
     if(input_char>=65 && input_char<=90)
     {
         if(input_char=='A'||input_char=='E'||input_char=='I'||input_char=='O'||input_char=='U')
         {
             return UPPER_CASE_VOWEL;

         }else
         {
             return UPPER_CASE_CONSONANT;

         }
             
     }
     if(input_char>=97 && input_char<=122)
     {
         if(input_char=='a'||input_char=='e'||input_char=='i'||input_char=='o'||input_char=='u')
         {
             return LOWER_CASE_VOWEL;

         }else
         {
             return LOWER_CASE_CONSONANT;

         }
             
     }
     if(input_char>=48 && input_char<=57)
     {
         return NUMBER;
     }
    else if((input_char>=33 && input_char<=48)|| (input_char>=58 && input_char<=64)||(input_char>=91 && input_char<=96) || (input_char>=123 && input_char<=126))
    {

          return SYMBOL;
    }
     


}

