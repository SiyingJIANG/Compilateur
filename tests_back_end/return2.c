char toto()
{
    int32_t a;
    a=97;
    if (a)
    {
        return a;
        
    } else 
    {
        return a+1;
    }
    putchar('1');
}

void main()
{
    char b;
    b=toto()+1;
    putchar(b);
}

