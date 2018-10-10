#include "inttypes.h"
void putint(int32_t i)
{
	int32_t size=0;
	int32_t i2=i;
	while(i>0)
	{
		size=size+1;
		i=i / 10;
	}
	int32_t diviz=1;
	size=size;
	int32_t size2=size;
	while(size>1)
	{
		diviz=diviz*10;
		size=size-1;
	}
	//putchar(size2+48);
	while(size2>0)
	{
		char c=i2/diviz;
		putchar(c+48);
		i2=i2%diviz;
		diviz=diviz/10;
		size2=size2-1;
	}
	putchar(' ');
}
void syracuse(int32_t init)
{
    while(init>1)
    {
        int32_t tmp;
        tmp=init%2;
        if (tmp==0)
        {
            init=init/2;
        }else{
            init=init*3+1;
        }
    putint(init);
    }
}
void main()
{
    syracuse(12);
}