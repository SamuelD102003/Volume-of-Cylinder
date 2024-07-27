#include <stdio.h>
#define PI 3.141593
void calculateVolume(float radius, float height, float *vol);
int main(void) {
	float r,h,v;
	while(1)
		{
  printf("\nEnter radius : ");
	scanf("%f", &r);
			if(r==-1)
				break;
	printf("Enter height : ");
	scanf("%f", &h);
	calculateVolume(r, h, &v);
	printf("Volume of a cylinder = %.4f\n", v);
		}
	printf("Program terminated!\n");
  return 0;
}
void calculateVolume(float radius, float height, float *vol)
{
	*vol = PI * radius * radius * height;
}