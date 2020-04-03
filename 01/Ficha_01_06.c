#include <stdio.h>

int main(void)
{
	int time, hour, minute, seconds, inter1, inter2;
	
	printf("Introduza o tempo em segundos: ");
	scanf("%d",&time);
	
	inter1 = time % 3600;
	hour = (time - inter1) / 3600;
	inter2 = inter1 % 60;
	minute = (inter1 - inter2) / 60;
	seconds = inter2;
	
	printf("%02d:%02d:%02d\n",hour,minute,seconds);
	return 0;
}
