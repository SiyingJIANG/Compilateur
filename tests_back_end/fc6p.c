void toto(char a,char b,int32_t c,int32_t d,int32_t e,int32_t f)
{
    putchar(a);
    putchar(b);
    putchar(c);
    putchar(d);
    putchar(e);
    putchar(f);
    putchar('\n');
}

void main()
{
    char a;
    a='c';
    toto('c',a,'d','e','f','g');
}