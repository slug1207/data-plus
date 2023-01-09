#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    char word, str[] = "`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
    while(scanf("%c", &word) != EOF) {
        word = tolower(word);
        char *p = strchr(str, word);
        if(p)
            printf("%c", *(p + 1));
        else
            printf("%c", word);
        if(word=="\n")
            printf("\n");
    }
    return 0;
}
