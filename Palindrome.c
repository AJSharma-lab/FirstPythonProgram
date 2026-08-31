#include <stdio.h>
#include <string.h>



int isPalindromeStr(char str[]){
    int len = strlen(str);
    for(int i=0; i< len; i++){
        if(str[i] != str[len - i]){
            return 0;
        }
    }
    return 1;
}

int main() {
    // Write C code here
    int result = isPalindromeStr("madam");
    printf("%d\n", result);

    return 0;
}