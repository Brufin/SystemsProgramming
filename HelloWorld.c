#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void valueName(char str[], char(*p)[35], int i) {


    switch (str[i-1])
    {
    case '0':
        strcat(*p,"zero ");
        break;
    case '1':
        strcat(*p,"one ");
        break;
     case '2':
        strcat(*p,"two ");
        break;
     case '3':
        strcat(*p,"three ");
        break;
     case '4':
     
        strcat(*p,"four ");
        break;
     case '5':
        strcat(*p,"five ");
        break;
     case '6':
        strcat(*p,"six ");
        break;
     case '7':
        strcat(*p,"seven ");
        break;
     case '8':
        strcat(*p,"eight ");
        break;
     case '9':
        strcat(*p,"nine ");
    break;
        
    
    default:
        printf("Statement is done");
        break;
    }

    if(strlen(str) - i == 5) {
        strcat(*p,"thousand ");
    } else if(strlen(str) - i == 4) {
        strcat(*p,"hundreed ");
    }

}

int main() {

    char str[5];
    char result[35];

    printf("Please enter a number: ");
    scanf("%s",str);

    for(int i = 1; i < strlen(str);i++) {
        if(str[i-1] != '$') {
            valueName(str,&result,i);
        }
    }

    printf("\n");
    printf("%s",result);

    return 0;
}

//i need to see where the number is positioned