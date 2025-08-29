#include <lpc214x.h>
#define switch1 (1<<10)          ////////(In place of (1<<10) you can also write 0x00000800
#define led (1<<11)							 ////////(In place of (1<<11) you can also write 0x00000400
int main()
{
	IODIR0 &=~switch1; /////MAKE P0.10 AS INPUT				[For more details see the video]
	IODIR0 |=led; /////MAKE P0.11 AS OUTPUT
	
	while(1)
	{
		int switch_status=IOPIN0&switch1;
			
		if((switch_status)==0)
		{
		IOCLR0=led;
		}
		else
		{
		IOSET0=led;
		}
	}
}
