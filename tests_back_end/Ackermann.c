int32_t ack(int32_t m, int32_t n)
{
    while (m>0)
    {
        if (n==0)
        {
            n=n+1;
        }else {
            n=ack(m,n-1);
        }
        m=m-1;
    }
    return n+1;
}

void main()
{
    int32_t res;
    res=ack(1,2);
    putchar(48+res);
}