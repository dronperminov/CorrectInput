#include "correctInput.h"

int get_integer() {
	int value;
	char buf[1000];

	fgets(buf, sizeof(buf), stdin);

	while (sscanf(buf, "%d", &value) != 1) {
		printf("Incorrect integer value. Try again: ");
		fgets(buf, sizeof(buf), stdin);		
	}

	return value;
}

int get_integer_msg(const char *msg) {
	int value;
	char buf[1000];

	printf("%s", msg);
	fgets(buf, sizeof(buf), stdin);

	while (sscanf(buf, "%d", &value) != 1) {
		printf("Incorrect integer value. Try again: ");
		fgets(buf, sizeof(buf), stdin);		
	}

	return value;	
}

int get_integer_interval(int min, int max) {
	int value;
	char buf[1000];

	fgets(buf, sizeof(buf), stdin);

	while (sscanf(buf, "%d", &value) != 1 || value < min || value > max) {
		printf("Incorrect integer value. Try again: ");
		fgets(buf, sizeof(buf), stdin);		
	}

	return value;
}

int get_integer_interval_msg(int min, int max, const char *msg) {
	int value;
	char buf[1000];

	printf("%s", msg);
	fgets(buf, sizeof(buf), stdin);

	while (sscanf(buf, "%d", &value) != 1 || value < min || value > max) {
		printf("Incorrect integer value. Try again: ");
		fgets(buf, sizeof(buf), stdin);		
	}

	return value;	
}

int get_natural() {
	int value;
	char buf[1000];

	fgets(buf, sizeof(buf), stdin);

	while (sscanf(buf, "%d", &value) != 1 || value < 1) {
		printf("Incorrect integer value. Try again: ");
		fgets(buf, sizeof(buf), stdin);		
	}

	return value;
}

int get_natural_msg(const char *msg) {
	int value;
	char buf[1000];

	printf("%s", msg);
	fgets(buf, sizeof(buf), stdin);

	while (sscanf(buf, "%d", &value) != 1 || value < 1) {
		printf("Incorrect integer value. Try again: ");
		fgets(buf, sizeof(buf), stdin);		
	}

	return value;	
}

double get_real() {
	double value;
	char buf[1000];

	fgets(buf, sizeof(buf), stdin);

	while (sscanf(buf, "%lf", &value) != 1) {
		printf("Incorrect integer value. Try again: ");
		fgets(buf, sizeof(buf), stdin);		
	}

	return value;
}

double get_real_msg(const char *msg) {
	double value;
	char buf[1000];

	printf("%s", msg);
	fgets(buf, sizeof(buf), stdin);

	while (sscanf(buf, "%lf", &value) != 1) {
		printf("Incorrect integer value. Try again: ");
		fgets(buf, sizeof(buf), stdin);		
	}

	return value;	
}