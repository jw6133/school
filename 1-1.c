#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
typedef struct test {
	char ID[20];
	int kor;
	int eng;
}Test;

void average(Test* n);

int main(void) {
	Test t[3] = { {"��ö��",30,40},{"������",20,60},{"���½�",40,80} };
	average(&t);
	return 0;
}
void average(Test* n) {
	for (int i = 0; i < 3; i++) {
		printf("%s�� ��� %.3f\n", n[i].ID, ((double)n[i].kor + n[i].eng / 2));
	}
}



/*typedef struct test {
	char ID[20];
	int kor;
	int eng;
}Test;
int main(void) {
	Test t[3] = { {"��ö��",30,40},{"������",20,60},{"���½�",40,80} };
	for (int i = 0; i < sizeof(t) / sizeof(t[i]); i++) {
		printf("%s�� ��� %.3f\n", t[i].ID, ((double)t[i].kor + t[i].eng / 2));
	}
	return 0;
}*/