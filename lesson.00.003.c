#include <stdio.h>

int main(){
	char name[10];
	int age;
	
	printf("Как се казваш?\n");
	scanf("%10s", name);
	
	printf("На колко си години?\n");
	scanf("%d", & age);

	printf("%s е на %d години.\n", name, age);

	return 0;
}

