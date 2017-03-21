/*
 * escape(s,t)
 */

void escape(char *s,char *t){
    int i,j;
    i = 0;
    j = 0;
    while(s[i]){
    	switch(s[i]){
	    case '\n': t[j] = '\\';t[j++] = '\n';break;
	    case '\t': t[j] = '\\';t[j++] = '\t';break;
	    default:
		t[j] = s[i];
	}
	i++;j++;
    }
    t[j] = '\0';
}

