#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void kiemTraSoNguyen()
{
	printf("Kiem Tra So Nguyen");
}

void uocChungBoiChung()
{
	printf("Uoc Chung Boi Chung");
}

void sapXepPhanTuMang1Chieu()
{
	int integerArray[100];
	int tmp;
	int length;
	printf("Nhap so luong phan tu mang: ");
	scanf("%d", &length);
	printf("Nhap du lieu mang %d phan tu:\n", length);
	for (int i = 0; i < length; i++)
	{
		printf("Phan tu thu %d: ", i + 1);
		scanf("%d", &integerArray[i]);
	}
	printf("Xuat mang du lieu %d phan tu Giam dan\n", length);
	for (int i = length - 1; i > -1; i--)
	{
		printf("mang[%d] = %d\n", i, integerArray[i]);
	}
	printf("Sap xep tang dan du lieu mang %d phan tu\n", length);
	for (int i = 0; i < length - 1; i++)
	{
		if (integerArray[i] > integerArray[i + 1])
		{
			tmp = integerArray[i];
			integerArray[i] = integerArray[i + 1];
			integerArray[i + 1] = tmp;
			i = -1; // reset i to -1 because it will be incremented to 0 at the start of the next loop iteration
		}
	}
	printf("In du lieu mang %d phan tu\n", length);
	for (int i = 0; i < length; i++)
	{
		printf("mang[%d] = %d\n", i, integerArray[i]);
	}
}

void demoMang2Chieu() {
	//string - "string.h"
	char kyTu = 'A';
	char mangKyTu[10] = "Anh";
	for (int i = 0; i < 10; i++) {
		scanf(" %c", &mangKyTu[i]);
		if (mangKyTu[i] == '.') {
			break;
		}
	}
	//fgets(mangKyTu);
	for (int i = 0; i < 10; i++) {
		printf("%c", mangKyTu[i]);
	}
	printf("\n");
	//puts(mangKyTu);
	int array[2][3];
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			printf("Mang[%d][%d] = ", i, j);
			scanf("%d", &array[i][j]);
		}
	}
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d, ", array[i][j]);
		}
		printf("\n");
	}
}

void demoString() {
	//string - "string.h"
	char mangKyTu[10];
	while (getchar() != '\n'); // clear input buffer
	printf("Nhap du lieu: ");
	fgets(mangKyTu, sizeof(mangKyTu), stdin);
	printf("%s", mangKyTu); // same as
	//puts(mangKyTu);
	printf("String Length: ");
	printf("%d", strlen(mangKyTu) - 1);
	printf("\n");
	/*printf("String Compare The Same As: ");
	printf("%d", strcmp( "aBc","aBc"));
	printf("\n");
	printf("String Compare less than: ");
	printf("%d", strcmp( "A","B"));
	printf("\n");
	printf("String Compare Greater than: ");
	printf("%d", strcmp( "C", "A"));
	printf("\n");*/

	printf("String Reverse: ");
	printf("%s", strrev(mangKyTu));
	printf("\n");
	printf("String Reverse (De: ");
	printf("%s", strrev(mangKyTu));
	printf("\n");
	printf("String Upper: ");
	printf("%s", strupr(mangKyTu));
	printf("\n");

}

void lapChucNang(int chonChucNang) {
	int tiepTuc = 1;
	while (tiepTuc == 1)
	{
		switch (chonChucNang)
		{
		case 1:
			kiemTraSoNguyen();
			break;
		case 2:
			uocChungBoiChung();
			break;
		case 3:
			sapXepPhanTuMang1Chieu();
			break;
		case 4:
			demoMang2Chieu();
			break;
		case 5:
			demoString();
			break;
		case 0:
			return;
		default:
			printf("Hay chon lai [0-3]");
			break;
		}

		printf("\n");
		printf("Tiep tuc CN nay? [1=Co | 0=Khong]: ");
		scanf("%d", &tiepTuc);
		system("cls");
	}
}

int main()
{
	int chonChucNang;
	do
	{
		printf("Menu");
		printf("\n");
		printf("1. Kiem Tra So Nguyen");
		printf("\n");
		printf("2. Uoc Chung Boi Chung");
		printf("\n");
		printf("3. Sap xep mang");
		printf("\n");
		printf("4. Demo Mang 2 Chieu");
		printf("\n");
		printf("5. Demo String");
		printf("\n");
		printf("Hay chon CN [0-3]: ");
		scanf("%d", &chonChucNang);
		lapChucNang(chonChucNang);
	} while (chonChucNang != 0);
}

// GV: AnhTT184