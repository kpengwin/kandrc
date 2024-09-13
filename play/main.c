#include <stdio.h>

int main(int arc, char**argv) {
	
	double pi = 3.14159;
	double tenbase = 13.75;
	double twelvebase = 18.75;
	double fourteenbase = 20.00;

	double tenadds = 2.40;
	double twelveadds = 2.50;
	double fourteenadds = 2.70;

	printf("Ten      inch: $%.2f cost, $%.3f per sq inch\n", (tenbase+tenadds), (tenbase+tenadds)/(tenbase*tenbase*pi));
	printf("Twelve   inch: $%.2f cost, $%.3f per sq inch\n", (twelvebase+twelveadds), (twelvebase+twelveadds)/(twelvebase*twelvebase*pi));
	printf("Fourteen inch: $%.2f cost, $%.3f per sq inch\n", (fourteenbase+fourteenadds), (fourteenbase+fourteenadds)/(fourteenbase*fourteenbase*pi));
	return 0;
}
