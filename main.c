#include <stdio.h>
#pragma warning(disable:4996)

#define RAD 3.141592
int area(int q, int w, int e) {
	float t;

	if (e == 3) {
		t = q * w / 2.0;
		printf("�ﰢ���� ���̴� %.1f�Դϴ�. \n", t);
	}
	else if (e == 4) {
		t = q * w;
		printf("�簢���� ���̴� %g �Դϴ�. \n", t);
	}
	else if (e == 1) {
		t = (q * q) * RAD;
		printf("���� ���̴� %.4f �Դϴ�. \n", t);
	}
	else {
		printf("�׷� ���� ���� �ڵ� �ȵǾ��ֽ��ϴ�.\n");
		return 0;
	}

}
int main() {
	int a, b, n;
	do {
		printf("���� ���� �Է�");
		scanf("%d %d", &a, &b);


		if (a == 0 && b == 0)
			break;

		printf("���==>");
		scanf("%d", &n);
		area(a, b, n);


	} while (1);
	printf("�����մϴ�. bye!\n");

	return 0;
}