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


void main()
{
	char c=0;
	char p=0;
  while (c<3)
  {
	  p=0;
	  while(p<2)
	  {
		  putchar('a');
		  p=p+1;
	  }
	  c=c+1;
  }
}