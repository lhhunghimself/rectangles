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
void rectangle_resize(rectangle *r, float width, float height){
	r->width=width;
 r->height=height;	
}
rectangle* rectangle_new(float width, float height){
	rectangle *r= malloc(sizeof(rectangle));
	r->width=width;
	r->height=height;
	return (r);
}	
