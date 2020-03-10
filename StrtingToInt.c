#include <stdio.h>

//accepts all integers.
int parseToInt(char *);


int parseToInt(char *s){
    int sign = 1;
    int number = 0;
    int i = 0;
    if(s[i] == '-' || s[i] == '+'){
        if(s[i] == '-'){
            sign = -1;
        }
        i++;
    }
    while(s[i]!= '\0'){
        number = number * 10 +s[i] - '0';
        i++;
    }
    return number * sign;
}

int main(){
    char num1 [10] = "1";
    char num2 [10] = "1";
    while(parseToInt(num1) != 0 && parseToInt(num2) != 0){
        printf("Enter first num: ");
        scanf("%s", num1);
        printf("Enter second num: ");
        scanf("%s", num2);
        int result = 0;
        result = parseToInt(num1) + parseToInt(num2);
        printf("Result: %d\n", result);
    }
   
    return 0;
}
