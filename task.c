

void delay_ms(unsigned int x)  // 延时函数
{
    unsigned int i,j;
    if(x==1000)
    {
        for(i=0;i<19601;i++)//延时1s
        {
            for(j=5;j>0;j--);
        }
    }
    else while(x--)for(j=115;j>0;j--);
}

// tips: 原理图当中led为低电平点亮，比如点亮LED2,代码为： P0 = 0xFE (1111 1110)


int main(void)
{
    
    ///在下方编写你的代码
    
    while(1)
	P2=0x7F;
	void();
	P2=0xBF;
	void();
	P2=0xDF;
	void();
	P2=0xEF;
	void();
	P2=0xF7;
	void();
	P2=0xFB;
	void();
	P2=0xFD;
	void() ;
	P2=0xFE;
	void();
	
	
	return 0;

 
}

