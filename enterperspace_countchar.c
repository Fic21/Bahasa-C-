
#include <stdio.h>
#include <string.h>

int main(){
   char str[100],*ch; 
    int i = 0;
    int count=0;
    
    printf("masukan kalimat: ");
    scanf("%[^\n]", str);
    for ( ch= str; *ch != (int)NULL; ch++){

        if ( *ch == ' '){
            *ch = '\n';
        }
        else if (*ch != ' '){
            count++;
        }
    }
    printf("%s \n",str);
    printf("Total karakter: %d", count);  
    
    return 0; 
}



