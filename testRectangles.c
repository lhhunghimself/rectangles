#include "rectangles.h"

int main(){
	rectangle r0=rectangle_init(1,2);
	rectangle_print(r0);	
	rectangle_resize(&r0,3,4);
 
 rectangle *r1=rectangle_new(3,4); 
	rectangle_print(*r1);
	free(r1);
	
	return 0;
}
