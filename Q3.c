#include <stdio.h>
#include <string.h>

char * ConcatRemove(char *s, char *t, int k) {
    
    int i, j;
    int len_s = 0; int len_t = 0;
    char *ans;

    len_s = strlen(s);
    len_t = strlen(t);
    
    int limit = (len_t < len_s) ? len_t : len_s;

    //scan strings until first differing character
    for (i=0; i < limit; i++){
        if (s[i] != t[i]) {
            break;
        }
    }
    
    int del = len_s - i;    // chars to remove from s
    int ins = len_t - i;    // chars to insert into s to match t
    int total = del + ins;


    printf("String matches until char %i\n", i);
    printf("delete: %i, insert: %i, total: %i\n", del, ins, total);
    if (total == k) {
        ans = "yes";
    } else {
        ans = "no";
    }
    return ans;
}

void main() {
    char s[100]; // = "teste12345";
    char t[100]; // = "teste"
    int k = 7;   // = 5
    printf("Enter initial string: ");
    scanf("%s", s);
    
    printf("Enter desired (output) string: ");
    scanf("%s", t);
    
    printf("Target number of operations: ");
    scanf("%i", &k);

    printf("Can we transform '%s' into '%s' with %i operations?: %s", s, t, k, ConcatRemove(s, t, k));
}