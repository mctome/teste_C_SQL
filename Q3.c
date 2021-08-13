#include <stdio.h>
#include <string.h>

int ValidateStr(char* str){
    int valid = 1;
    // validate length
    if ((strlen(str) <= 100) && (strlen(str) > 0)) {

        // validate characters (lowercase only)
        for (int i=0; i< strlen(str); i++){
            if ((str[i] >= 'a') && (str[i] <= 'z')) {
            } else {
                printf("All chars must be lowercase letters\n");
                valid = 0;
                break;
            }
        }

    } else {
        printf("String must be between 1 and 100 chars long.\n");
        valid = 0;
    }

    return valid;
}

int ValidateK(int k){
    int valid = 1;
    if ((k <= -1) || (k > 200)){
        printf("Invalid  number. Valid range: 0-200\n");
        valid = 0;
    }
}

char * ConcatRemove(char *s, char *t, int k) {
    int i;
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

    // printf("String matches until char %i\n", i);
    printf("delete: %i, insert: %i, total: %i\n", del, ins, total);
    if (total == k) {
        ans = "yes";
    } else {
        ans = "no";
    }
    return ans;
}

void main(){
    int valid = 0;
    int k = 0;
    char s[100], t[100];
    while (!valid) {
        printf("Enter source string (1-100 chars, a-z, no numbers, spaces or punctuation:\n");
        scanf("%s", s);
        valid = ValidateStr(s);
    }
    
    valid = 0;
    while (!valid) {
        printf("Enter target string (1-100 chars, a-z, no numbers, spaces or punctuation:\n");
        scanf("%s", t);
        valid = ValidateStr(t);
    }

    valid = 0;
    while(!valid) {
        printf("Enter number of operations (removals, appends) [1-200]:\n");
        scanf("%d", &k);
        valid = ValidateK(k);

    }

    printf("Can we transform '%s' into '%s' with %i operations?: %s", s, t, k, ConcatRemove(s, t, k));
}
