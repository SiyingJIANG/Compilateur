#include "inttypes.h"
void printint(int32_t i)
{
	while (i>0)
	{
		putchar(i%10+48);
		i=i/10;
		
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
   printint(init);
   }
}
void main()
{
   syracuse(12);
   putchar('\n');
}

// #include "inttypes.h"
// void syracuse(int32_t init)
// {
   // while(init>1)
   // {
       // int32_t tmp=0-1;
       // init=(init)*tmp;
	   // putchar(init+48);
	   // init=init-2;
   // }
// }
// void main()
// {
   // syracuse(0-9);
// }