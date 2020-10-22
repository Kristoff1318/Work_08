#include <stdio.h>

int mystrlen(char *s) {
    int len = 0;
    while(s[len]) len++;
    return len;
}

char * mystrcpy( char *dest, char *source ) {
    int i = 0;
    while( *(source + i) ) {
        *(dest + i) = *(source + i);
        i++;
    }
    return dest;
}

char * mystrncat( char *dest, char *source, int n) {
    char *end = dest + mystrlen(dest);
    int i;
    for(i = 0; i < n; i++) {
        end[i] = source[i];
    }
    end[i] = '\0';
    return dest;
}

int mystrcmp( char *s1, char *s2 ) {
    int max = mystrlen(s1) > mystrlen(s2) ? mystrlen(s1) : mystrlen(s2);
    int i = 0;
    while( s1[i] == s2[i] && i < max ) i++;

    if (i == max) return 0;
    else if (s1[i] > s2[i]) return 1;
    else if (s1[i] < s2[i]) return -1;
}

char * mystrchr( char *s, char c ) {
    int i;
    for(i = 0; i <= mystrlen(s); i++) {
        if (s[i] == c) return s + i;
    }
    return NULL;
}
