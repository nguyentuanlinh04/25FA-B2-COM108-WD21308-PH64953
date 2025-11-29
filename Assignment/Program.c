#include <stdio.h>
#include <math.h>
#include <stdbool.h>
// Hàm ki?m tra s? nguyên t?
bool kiemTraSoNguyenTo(int soBatKy) {
	if (soBatKy <= 1) return false;
	for (int i = 2; i <= sqrt(soBatKy); i++) {
		if (soBatKy % i == 0) return false;
	}
	return true;
}
// Ham kiem tra so chinh phuong
bool kiemTraSoChinhPhuong(int soBatKy) {
	if (soBatKy < 0) return false;
	int sqrtSo = (int)sqrt(soBatKy);
	return (sqrtSo * sqrtSo == soBatKy);
}
void kiemTraSoNguyen() {
	system("cls"); //clean screen
	int soBatKy;
	int i = 1;
	while (i == 1) {
		system("cls");
		printf("Nhap vao mot so nguyen x: ");
		scanf("%d", &soBatKy);
		if (soBatKy % 1 == 0) {
			printf("So %d la so nguyen. \n", soBatKy);
		}
		else {
			printf("So %d khong phai la so nguyen. \n", soBatKy);
		} if (kiemTraSoNguyenTo(soBatKy)) {
			printf("So %d la so nguyen to. \n", soBatKy);
		}
		else {
			printf("So %d khong phai la so nguyen to. \n", soBatKy);
		} if (kiemTraSoChinhPhuong(soBatKy)) {
			printf("So %d la so chinh phuong. \n", soBatKy);
		}
		else {
			printf("So %d khong phai la so chinh phuong. \n", soBatKy);
		}
		printf("\n");
		printf(" Ban co muon tiep tuc kiem tra so nguyen khong? [ 1 - Tiep tuc | Khac - Thoat ]: ");
		scanf("%d", &i);
	}
}
void uocChungVaBoiChung() {
	//khai bao
	system("cls");
	int i = 1;
	while (i == 1) {
		//code
		printf("\n");
		printf(" Ban co muon tiep tuc kiem tra so nguyen khong? [ 1 - Tiep tuc | Khac - Thoat ]: ");
		scanf("%d", &i);
	}
}
void tinhTienQuanKaraoke() {
	//khai bao
	system("cls");
	int i = 1;
	while (i == 1) {
		//code
		printf("\n");
		printf(" Ban co muon tiep tuc kiem tra so nguyen khong? [ 1 - Tiep tuc | Khac - Thoat ]: ");
		scanf("%d", &i);
	}
}
void tinhTienDien() {
	//khai bao
	system("cls");
	int i = 1;
	while (i == 1) {
		//code
		printf("\n");
		printf(" Ban co muon tiep tuc kiem tra so nguyen khong? [ 1 - Tiep tuc | Khac - Thoat ]: ");
		scanf("%d", &i);
	}
}
void doiTien() {
	//khai bao
	system("cls");
	int i = 1;
	while (i == 1) {
		//code
		printf("\n");
		printf(" Ban co muon tiep tuc kiem tra so nguyen khong? [ 1 - Tiep tuc | Khac - Thoat ]: ");
		scanf("%d", &i);
	}
}
void tinhLaiVayTien() {
	//khai bao
	system("cls");
	int i = 1;
	while (i == 1) {
		//code
		printf("\n");
		printf(" Ban co muon tiep tuc kiem tra so nguyen khong? [ 1 - Tiep tuc | Khac - Thoat ]: ");
		scanf("%d", &i);
	}
}
void vayTienMuaXe() {
	//khai bao
	system("cls");
	int i = 1;
	while (i == 1) {
		//code
		printf("\n");
		printf(" Ban co muon tiep tuc kiem tra so nguyen khong? [ 1 - Tiep tuc | Khac - Thoat ]: ");
		scanf("%d", &i);
	}
}
void sapXepThongTinSinhVien() {
	//khai bao
	system("cls");
	int i = 1;
	while (i == 1) {
		//code
		printf("\n");
		printf(" Ban co muon tiep tuc kiem tra so nguyen khong? [ 1 - Tiep tuc | Khac - Thoat ]: ");
		scanf("%d", &i);
	}
}
void xayDungGameFpoly() {
	//khai bao
	system("cls");
	int i = 1;
	while (i == 1) {
		//code
		printf("\n");
		printf(" Ban co muon tiep tuc kiem tra so nguyen khong? [ 1 - Tiep tuc | Khac - Thoat ]: ");
		scanf("%d", &i);
	}
}
void tinhToanPhanSo() {
	//khai bao
	system("cls");
	int i = 1;
	while (i == 1) {
		//code
		printf("\n");
		printf(" Ban co muon tiep tuc kiem tra so nguyen khong? [ 1 - Tiep tuc | Khac - Thoat ]: ");
		scanf("%d", &i);
	}
}
int main()
{
	int chon;
	do
	{
		system("cls"); //clean screen
		printf(" ======== MENU CHUONG TRINH ======== \n");
		printf("|1. Kiem tra so nguyen              |\n");
		printf("|2. Tim uoc chung va boi chung      |\n");
		printf("|3. Tinh tien quan karaoke          |\n");
		printf("|4. Tinh tien dien                  |\n");
		printf("|5. Doi tien                        |\n");
		printf("|6. Tinh lai vay tien               |\n");
		printf("|7. Vay tien mua xe                 |\n");
		printf("|8. Sap xep thong tin sinh vien     |\n");
		printf("|9. Xay dung game Fpoly             |\n");
		printf("|10. Tinh toan phan so              |\n");
		printf("|0. Thoat chuong trinh              |\n");
		printf(" =================================== \n");
		printf("* Chon chuc nang tren Menu [0-10]:  ");
		scanf("%d", &chon);
		switch (chon) {
		case 1:
			kiemTraSoNguyen();
			break;
		case 2:
			uocChungVaBoiChung();
			break;
		case 3:
			tinhTienQuanKaraoke();
			break;
		case 4:
			tinhTienDien();
			break;
		case 5:
			doiTien();
			break;
		case 6:
			tinhLaiVayTien();
			break;
		case 7:
			vayTienMuaXe();
			break;
		case 8:
			sapXepThongTinSinhVien();
			break;
		case 9:
			xayDungGameFpoly();
			break;
		case 10:
			tinhToanPhanSo();
			break;
		case 0:
			printf("\n Ban da thoat chuong trinh. Thanks! \n");
			break;
		default:
			printf("Hay chon cac chuc nang co tren Menu. \n");
			system("pause");
			break;
		}
	} while (chon != 0);

}