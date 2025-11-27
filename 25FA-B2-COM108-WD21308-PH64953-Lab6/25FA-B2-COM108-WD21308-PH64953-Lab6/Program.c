//Bai1

#include <stdio.h>

int main()
{
    int mang[100];
    int n, i ;
	float tb, tong = 0;
	int dem = 0;
	printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    for( i = 0; i < n; i++)
    {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &mang[i]);
    }
    printf("Cac phan tu trong mang la: \n");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", mang[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (mang[i] % 3 == 0) {
            tong += mang[i];
            dem++;
        }
    }
    tb = tong / dem;
    printf("\nTrung binh cong cac so chia het cho 3 trong mang la: %.2f\n", tb);
	return 0;
}

// GV: AnhTT184