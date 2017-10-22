#include <stdio.h>

void main(){
    
    int c, nl, tl, sl;
    
    nl = 0;
    tl = 0;
    sl = 0;
    
    while ((c = getchar()) != EOF) { 
        
        if (c == '\n') {
            ++nl;
            continue;
        }
        
        if (c == '\t') {
            ++tl;
            continue;
        }
        
        if (c == ' ') {
            ++sl;
            continue;
        }
    }
    
    printf("lines: %d\ntabs: %d\nspaces: %d\n", nl, tl, sl);
    
}
