#define  BUFSUZE  100

char buf[BUFSUZE];    // buffer for ungetch
int buf bufp = 0;     // next free position in buf


int getch(void)    // get a character
{
    return (bufp > 0) ? buf[--bufp] : getchar();
}


void ungetch(int c)    // push character back on input
{
    if (bufp >= BUFSUZE)
        printf("ungetch: too many characters\n");
    else
        buf[bufp++] = c;
}
