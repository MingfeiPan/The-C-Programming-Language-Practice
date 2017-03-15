/*
 *for loop without && ||
*/

/*for (i=0; i<lim-1 && (c=getchar()) != '\n' && c != EOF; ++i) 
    s[i] = c;
*/

int i = 0;
while(i < lim -1){
    c = getchar();
    if(c == '\n') break;
    if(c == EOF) break;
    s[i++] = c;
}
