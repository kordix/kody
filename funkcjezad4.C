#include <stdio.h> 
#include <cstring> 

void displayString(char str[]); 
 
int main() 
{ 
    char str[15] = "1410"; 
    displayString(str);    
    return 0; 
} 
void displayString(char str[]){ 

    for(int i = strlen(str);i>=0;i--){
         printf("%c",str[i]); 
    }
   
} 