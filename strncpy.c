#define C char
// Copies p to q, and will copy min(n, strlen(p)) elements
f(C*p,C*q,C n){while((*q++=*p++)&&--n);}
// Fun fact: the return value of puts(s) is equal to 1 + strlen(s)
main(c,v)C**v;{C s[puts(1[v])];f(1[v],s,atoi(2[v]));puts(s);}
