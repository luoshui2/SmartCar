void Delay10us(unsigned char x)	
{
	unsigned char i;

	while(x)
	{
		i = 2;
		while (--i);
		x--;
	}
}
