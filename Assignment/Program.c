#include <stdio.h>
#include <math.h>
#include <stdbool.h>
// Hàm kiểm tra số nguyên tố
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
	int soBatKy;
	int i = 1;
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
}
void uocChungVaBoiChung() {
	//khai bao
	system("cls");
	int i = 1;
	while (i == 1) {
		//code
	}
}
void tinhTienQuanKaraoke() {
	//khai bao
	system("cls");
	int i = 1;
	while (i == 1) {
		//code
	}
}
void tinhTienDien() {
	//khai bao
	system("cls");
	int i = 1;
	while (i == 1) {
		//code
	}
}
void doiTien() {
	//khai bao
	system("cls");
	int i = 1;
	while (i == 1) {
		//code
	}
}
void tinhLaiVayTien() {
	//khai bao
	system("cls");
	int i = 1;
	while (i == 1) {
		//code
	}
}
void vayTienMuaXe() {
	//khai bao
	system("cls");
	int i = 1;
	while (i == 1) {
		//code
	}
}
void sapXepThongTinSinhVien() {
	//khai bao
	system("cls");
	int i = 1;
	while (i == 1) {
		//code
	}
}
void xayDungGameFpoly() {
	//khai bao
	system("cls");
	int i = 1;
	while (i == 1) {
		//code
	}
}
void tinhToanPhanSo() {
	//khai bao
	system("cls");
	int i = 1;
	while (i == 1) {
		//code
	}
}
void lapChucNang(int chonChucNang) {
	int tiepTuc = 1;
	while (tiepTuc == 1) {
		switch (chonChucNang) {
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
			return;
		default:
			printf("Hay chon cac chuc nang co tren Menu. \n");
			break;
		}
		printf("\nBan co muon tiep tuc chuc nang nay khong? [ 1 - Tiep tuc | Khac - Thoat ]: ");
		scanf("%d", &tiepTuc);
		system("cls");
	}
}
int main()
{
	int chonChucNang;
	do
	{
		system("cls");
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
		scanf("%d", &chonChucNang);
		lapChucNang(chonChucNang);
	} while (chonChucNang != 0);
}