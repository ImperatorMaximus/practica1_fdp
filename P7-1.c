#include <stdio.h>
#include <stdlib.h>

int main(){
	short _;  //variable de tipo short
	signed int __;  //variable de tipo entero con signo
	int v_1;  //variable de tipo entero
	unsigned int v_2; //variable de tipo entero sin signo
	long v_3; //variable de tipo long 
	signed long a;//variable de tipo long con signo
	unsigned long b;  //variable de tipo long sin signo	
	signed short c; //variable de tipo short con signo
	unsigned short d; //variable de tipo short sin signo

	printf("Ingresa un dato tipo short\n");
	scanf("%hd",&_);
	printf("Ingresa un dato tipo signed int\n");
	scanf("%d",&__);
	printf("Ingresa un dato tipo int\n");
	scanf("%d",&v_1);
	printf("Ingresa un dato tipo unsigned int\n");
	scanf("%d",&v_2);
	printf("Ingresa un dato tipo long\n");
	scanf("%ld",&v_3);
	printf("Ingresa un dato tipo signed long\n");
	scanf("%ld",&a);
	printf("Ingresa un dato tipo unsigned long\n");
	scanf("%ld",&b);
	printf("Ingresa un dato tipo signed short\n");
	scanf("%hd",&c);
	printf("Ingresa un dato tipo unsigned short\n");
	scanf("%hd",&d);

	printf("Valores leidos\n");
	printf("%hd\t%d\t%d\t%d\t%ld\t%ld\t%ld\t%hd\t%hd",_,__,v_1,v_2,v_3,a,b,c,d);
	return 0;
}
