#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int toUpper(char str[]){

    int i;
    for(i = 0; str[i] != '\0';++i){

    if(str[i] <= 'z' && str[i] >='a'){
            str[i] -= 32;
        }
    }

return str;

}

int toLower(char str[]){

    int i;
    for(i = 0; str[i] != '\0';++i){

    if(str[i] <= 'Z' && str[i] >='A'){
            str[i] += 32;
        }
    }

return str;

}
int SwitchCase(char str[]){
    int i;
    
    for(i = 0; str[i] != '\0';++i){

        if(str[i] <= 'z' && str[i] >='a'){
                str[i] -= 32;
        }
        
        else if(str[i] <= 'Z' && str[i] >='A'){
                str[i] += 32;
        }
    }

    return str;
}

bool isStrEqual(char str[], char str2[]){

    for(int indexX = 0;  str[indexX] != '\0';++indexX){


        if(str[indexX] != str2[indexX]){}{
            return false;
        }

       

    }
    return true;

}

bool isPalindrom(char str[]){


    for(int i = 0; str[i] != '\0';++i){

        

    }

    return true;
}

int main(void){

char str[100]= "";
    scanf("%99s", str); 
    printf("%s\n", str);

    int str2 = str;

    int pocetPismen = 0; int pocetCisel = 0; int malePismena = 0; int velkePismena = 0;

    int i;
    for(i = 0; str[i] != '\0';++i){

        if(str[i] <= 'z' && str[i] >='a'){
            malePismena++;
            pocetPismen++;
        }
        else if(str[i] <='Z' && str[i] >= 'A'){
            velkePismena++;
            pocetPismen++;
        }
        else if(str[i] <='9' && str[i] >= '0'){
            pocetCisel++;
        }

    }

    printf("Delka retezce - %i\n", i++);

    printf("Male pismena - %i\n",malePismena);

    printf("Velke pismena - %i\n",velkePismena);

    printf("Cisla - %i\n",pocetCisel);

    printf("To upper - %s\n", toUpper(str));
    printf("To lower - %s\n", toLower(str));
    printf("SwitchCase - %s\n", SwitchCase(str2));


    char string1[] = "";
     char string2[] = "";

    scanf("%s", string1);
    scanf("%s", string2);
    printf(isStrEqual(string1, string2) ? "Jsou stejne " : "Nejsou stejne");
}

