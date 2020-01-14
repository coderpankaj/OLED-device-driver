#include<iolib.h>
#include<stdio.h>

int main()
{
	int cnt;
	iolib_init();
	iolib_setdir(8, 20, DIR_OUT);
	pin_high(8,12);
	iolib_sleep_ms(100);
	pin_low(8,12);
	iolib_sleep_ms(100);
	for(cnt=0;cnt<10;cnt++)
	{
		pin_high(8,12);
		sleep(1);
		pin_low(8,12);
		sleep(1);
	}
	iolib_free();
	return 0;
}
