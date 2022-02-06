#include <stdio.h>
#define LOWER 0
#define UPPER 300
#define STEP 20

int main() {
    printf("Farh to celsius but with define keyword\n");

    int fahr;
	for (fahr = LOWER; fahr <= UPPER; fahr + STEP) {
		printf("%3d\t%6d\n", fahr , ((5.0/9.0)*(fahr-32)));
	}
}
