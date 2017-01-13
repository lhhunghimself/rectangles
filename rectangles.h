#include <stdio.h>

typedef struct{
	float width;
	float height;
}rectangle;

rectangle rectangle_init(float width, float height);
void rectangle_print(rectangle r);
