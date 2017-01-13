#include "rectangles.h"
rectangle rectangle_init(float width, float height){
	rectangle r;
	r.width=width;
	r.height=height;
	return r;
}	
void rectangle_print(rectangle r){
	printf("width is %f\nheight is %f\n",r.width, r.height);
}	

