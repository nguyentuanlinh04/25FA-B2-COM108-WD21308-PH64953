#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <windows.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int kiem_Tra_So_Nguyen(double a) {
	if (a == (int)a) {
		return 0;
	} else {
		return 1;
	}
}
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
	printf("-------------  Kiem Tra So Nguyen  -------------\n");
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
int timUCLN(int a, int b) {
	/*a = abs(a);
	b = abs(b);*/
	int temp;
	while (b != 0) {
		temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}
void timBCNN(int a, int b) {
	if (a == 0 && b == 0) {
		printf("BCNN cua 2 so %d va %d la Khong xac dinh duoc\n", a, b);
	}
	else if (a == 0 || b == 0) {
		printf("BCNN cua 2 so %d va %d la: 0\n", a, b);
	}
	else {
		printf("BCNN cua 2 so %d va %d la: %d\n", a, b, abs(a * b) / timUCLN(a, b));
	}

}
void uocChungVaBoiChung() {
	double soA, soB;
	int a, b, check = 1;
	printf("+--------------UCLN & BCNN-----------------+\n");
	printf("Moi ban nhap so thu nhat: ");
	scanf("%lf", &soA);
	while (kiem_Tra_So_Nguyen(soA) == 1) {
		if (check > 3) {
			printf("Ban da nhap sai qua 3 lan!");
			return;
		}
		printf("so ban vua nhap khong phai la so nguyen(sai lan %d)! xin vui long nhap lai: ", check);
		scanf("%lf", &soA);
		check++;

	}
	printf("Moi ban nhap so thu hai: ");
	scanf("%lf", &soB);
	check = 1;
	while (kiem_Tra_So_Nguyen(soB) == 1) {
		if (check > 3) {
			printf("Ban da nhap sai qua 3 lan!");
			return;
		}
		printf("so ban vua nhap khong phai la so nguyen(sai lan %d)! xin vui long nhap lai: ", check);
		scanf("%lf", &soB);
		check++;
	}
	a = (int)soA;
	b = (int)soB;
	printf("UCLN cua 2 so %d va %d la: %d\n", a, b, timUCLN(a, b));
	timBCNN(a, b);
}
void chucNangSo2_1() {//cho nguoi dung nhap tien, luc in ra kq bao loi!
	int soA, soB;
	double a, b;
	printf("+--------------UCLN & BCNN-----------------+\n");
	printf("Moi ban nhap so thu nhat: ");
	scanf("%lf", &a);

	printf("Moi ban nhap so thu hai: ");
	scanf("%lf", &b);

	if (kiem_Tra_So_Nguyen(a) == 1 || kiem_Tra_So_Nguyen(b) == 1) {
		printf("so ban nhap khong phai la so nguyen! Nen kh tinh toan duoc!");
	}
	if (kiem_Tra_So_Nguyen(a) == 0 && kiem_Tra_So_Nguyen(b) == 0) {
		soA = (int)a;
		soB = (int)b;
		printf("UCLN cua 2 so %d va %d la: %d\n", soA, soB, timUCLN(soA, soB));
		timBCNN(soA, soB);
	}


}

double tinhTienQuanKaraoke(int gioBatDau, int gioKetThuc) {
	int gio;
	int soGioDaHat;
	const double giaTien3GioDau = 150000;
	const double giaTienGioTiepTheo = giaTien3GioDau * 0.3; //30% gia tien 3 gio dau
	double tongTien = 0;
	double soGioThue = gioKetThuc - gioBatDau;
	const gioMo = 12;
	const gioDong = 23;
	if (gioKetThuc <= gioBatDau || gioBatDau < 12 || gioKetThuc > 23) {
		printf("Thoi gian su dung khong nam trong gio hoat dong (12h - 23h). \n");
		return 0.0;
	}
	for (gio = gioBatDau; gio < gioKetThuc; gio++) {
		soGioThue = (gio + 1) - gioBatDau;
		if (soGioThue <= 3) {
			tongTien += giaTien3GioDau / 3; //chia de tinh theo gio
		}
		else {
			tongTien += giaTienGioTiepTheo;
		}
	} if (gioBatDau >= 14 && gioKetThuc <= 17) {
		double giamGia = tongTien * 0.1; //giam 10% cho khach hang thue trong khung gio 14h-17h
		tongTien -= giamGia;
		printf("Ban duoc giam 10%% vi thue trong khung gio 14h-17h (Giam: %.0f VND \n", giamGia);
	}
	return tongTien;
}
void tinhTienDien() {
	double bac1 = 1678, bac2 = 1734, bac3 = 2014, bac4 = 2536, bac5 = 2834, bac6 = 2927;
	double SoDien, GiaDien;
	printf("-------------  Tinh tien dien  -------------\n");
	printf("Nhap so (kWh) dien da su dung: "); scanf("%lf", &SoDien);
	if (SoDien < 0) {
		printf("So dien ban nhap chua dung xin vui long kiem tra lai");
	}
	else if (SoDien <= 50) {
		GiaDien = SoDien * 50;
	}
	else if (SoDien <= 100) {
		GiaDien = ((SoDien - 50) * bac2) + (bac1 * 50);

	}
	else if (SoDien <= 200) {
		GiaDien = ((SoDien - 100) * bac3) + (bac1 * 50) + (bac2 * 50);

	}
	else if (SoDien <= 300) {
		GiaDien = ((SoDien - 200) * bac4) + (bac1 * 50) + (bac2 * 50) + (bac3 * 100);

	}
	else if (SoDien <= 400) {
		GiaDien = ((SoDien - 300) * bac5) + (bac1 * 50) + (bac2 * 50) + (bac3 * 100) + (bac4 * 100);
	}
	else if (SoDien >= 400) {
		GiaDien = ((SoDien - 400) * bac6) + (bac1 * 50) + (bac2 * 50) + (bac3 * 100) + (bac4 * 100) + (bac5 * 100);
	}
	printf("So tien dien phai dong la: %.2f d", GiaDien);
}
void doiTien() {
	printf("-------------  CHUC NANG DOI TIEN  -------------\n");
	int menhGia[] = { 500,200,100,50,20,10,5,2,1 };
	int lenMenhGia, soLuong, soTien, i, soTienBanDau;
	double checkSoTien;
	int checkEror = 1;
	printf("Nhap so tien can doi: ");
	scanf("%lf", &checkSoTien);
	while (kiem_Tra_So_Nguyen(checkSoTien) == 1) {
		if (checkEror > 3) {
			printf("Ban da nhap sai qua 3 lan! \n");
			return;
		}
		printf("So tien ban nhap khong phai la so nguyen ( sai lan %d )! Vui long nhap lai: ", checkEror);
		scanf("%lf", &checkSoTien);
		checkEror++;
	}
	soTien = (int)checkSoTien;
	lenMenhGia = sizeof(menhGia) / sizeof(menhGia[0]);
	soTienBanDau = soTien;
	printf("+---------KET QUA DOI TIEN-----------+\n");
	printf("| %-10s | %-21s |\n", "So Luong", "Menh Gia");
	printf("+------------+-----------------------+\n");
	for (i = 0; i < lenMenhGia; i++) {
		if (soTienBanDau == menhGia[i]) {
			continue;
		}
		if (soTien >= menhGia[i]) {
			soLuong = soTien / menhGia[i];
			if (soLuong > 0) {
				printf("| %-10d | %-21d |\n", soLuong, menhGia[i]);

			}
			soTien = soTien % menhGia[i];
		}
	}
	printf("+------------+-----------------------+\n");
}
void tinhLaiVayTien() {
	printf("-------------  Tinh Lai Suat  -------------\n");
	float soTienVay, soTienLai, soTienGocPhaiTra, tongTien;
	const int kyHan = 12;
	const float laiSuat = 0.05;  // 5%
	int i = 0;
	printf("Moi ban nhap so tien ban muon vay: ");
	scanf("%f", &soTienVay);
	if (soTienVay < 0) {
		printf("So tien vay khong the la so am!");
		return;
	}
	soTienGocPhaiTra = soTienVay / kyHan;
	printf("+-------------------------Bang Lai Suat 12T---------------------------------+\n");
	printf("| Ky Han | Lai Phai Tra | Goc phai tra | So tien phai tra | So tien con lai |\n");
	printf("|--------|--------------|--------------|------------------|-----------------|\n");
	//8 14 14 18 17
	for (i = 1; i <= kyHan; i++) {
		soTienLai = soTienVay * laiSuat;
		tongTien = soTienLai + soTienGocPhaiTra;
		soTienVay = soTienVay - soTienGocPhaiTra;
		if (soTienVay < 0) {
			soTienVay = 0;
		}
		printf("|%8d|%14.2f|%14.2f|%18.2f|%17.2f|\n", i, soTienLai, soTienGocPhaiTra, tongTien, soTienVay);
	}
	printf("|--------|--------------|--------------|------------------|-----------------|");
}
void vayTienMuaXe() {
	printf("-------------  Tinh tien mua Xe  -------------\n");
	double soTienLai, soTienGocPhaiTra, tongTien, phanTramVay, giaXe, lanDauTra, duNo;
	const int kyHanNam = 24;
	const int kyHanThang = kyHanNam * 12;
	const double laiSuatNam = 0.072;  // 7.2%
	const double laiSuatThang = laiSuatNam / 12;  // 7.2%/12 = 0.06
	const double soTienVay = 500000000;
	int i = 0;
	printf("Moi ban nhap so %% ban muon vay: ");
	scanf("%lf", &phanTramVay);
	if (phanTramVay <= 0 || phanTramVay > 100) {
		printf("So %% vay Phai lon hon 0 va nho hon 101!");
		return;
	}
	giaXe = soTienVay / (phanTramVay / 100);
	lanDauTra = giaXe - soTienVay;
	soTienGocPhaiTra = soTienVay / kyHanThang;
	duNo = soTienVay;
	printf("Thong Tin Ho So:\n");
	printf("So tien vay co dinh: %.0f\n", soTienVay);
	printf("Ty le vay: %.1f%%\n", phanTramVay);
	printf("Gia Tri cua xe: %.0f VND\n", giaXe);
	printf("So tien phai tra lan dau la: %.0f VND\n", lanDauTra);
	printf("+--------------------------Bang Lai Suat -----------------------------------+\n");
	printf("| Ky Han | Lai Phai Tra | Goc phai tra | So tien phai tra | So tien con lai |\n");
	printf("|--------|--------------|--------------|------------------|-----------------|\n");
	//8 14 14 18 17
	for (i = 1; i <= kyHanThang; i++) {
		soTienLai = duNo * laiSuatThang;
		tongTien = soTienGocPhaiTra + soTienLai;
		duNo = duNo - soTienGocPhaiTra;
		if (duNo < 0) {
			duNo = 0;
		}
		printf("|%8d|%14.2f|%14.2f|%18.2f|%17.2f|\n", i, soTienLai, soTienGocPhaiTra, tongTien, duNo);
	}
	printf("|--------|--------------|--------------|------------------|-----------------|");
}
struct sinhVien
{
	char hoTen[100];
	double diem;
	char hocLuc[100];
};
typedef struct sinhVien sV;
void xepLoaiSV(sV* sv) {
	if (sv->diem >= 9.0) {
		strcpy(sv->hocLuc, "Xuat sac");
	}
	else if (sv->diem >= 8.0) {
		strcpy(sv->hocLuc, "Gioi");
	}
	else if (sv->diem >= 6.5) {
		strcpy(sv->hocLuc, "Kha");
	}
	else if (sv->diem >= 5.0) {
		strcpy(sv->hocLuc, "Trung binh");
	}
	else {
		strcpy(sv->hocLuc, "Yeu");
	}
}
void xoaBoNhoDem() {
	while (getchar() != '\n' && getchar() != EOF);
}
void hoanDoi(sV* a, sV* b) {
	sV temp = *a;
	*a = *b;
	*b = temp;
}
void sapXepThongTinSinhVien() {
	sV ds[100];
	printf("-------------  Sap Xep Thong Tin Sinh Vien  -------------\n");
	int i = 0, n;
	printf("Moi ban nhap so luong sinh vien can nhap: ");
	scanf("%d", &n);
	int check = 0;
	while (n <= 1) {
		if (check > 3) {
			printf("ban nhap sai qua 3 lan!");
			return;
		}
		check++;
		printf("So luong sinh vien phai lon hon 1! (sai lan %d) Xin vui long nhap lai: ", check);
		scanf("%d", &n);
	} for (i = 0; i < n; i++) {
		printf("nhap thong tin sinh vien thu %d: \n", i + 1);
		printf("Ho va Ten: ");
		xoaBoNhoDem();
		fgets(ds[i].hoTen, 100, stdin);
		ds[i].hoTen[strcspn(ds[i].hoTen, "\n")] = 0;
		printf("Diem: ");
		scanf("%lf", &ds[i].diem);
		xepLoaiSV(&ds[i]);
	} for (i = 0; i < n - 1; i++) {
		if (ds[i].diem < ds[i + 1].diem) {
			hoanDoi(&ds[i], &ds[i + 1]);
			i = -1;
		}
	}
	printf("--------------------------------------------------------\n");
	printf("| %-25s | %-10s |%-13s|\n", "Ho va Ten", "Diem", "Hoc Luc");
	printf("--------------------------------------------------\n");
	for (i = 0; i < n; i++) {
		printf("| %-25s | %-10.1lf |%-13s|\n", ds[i].hoTen, ds[i].diem, ds[i].hocLuc);
	}
	printf("--------------------------------------------------------\n");
}
void xayDungGameFpoly() {
	printf("-------------  Game Fpoly  -------------\n");
	int so1, so2, kq1, kq2, dem = 0, check = 1;
	printf("Moi ban nhap so dau tien: ");
	scanf("%d", &so1);
	while (so1 < 0 || so1 >15) {
		if (check > 3) {
			printf("Ban da nhap sai 3 lan!");
			return;
		}
		printf("Ban da nhap sai (lan %d )! Vui long chon so tu 0 den 15! Xin vui long nhap lai: ", check);
		scanf("%d", &so1);
		check++;
	}
	check = 1;
	printf("moi ban nhap so thu 2: ");
	scanf("%d", &so2);
	while (so2 < 0 || so2 >15) {
		if (check > 3) {
			printf("Ban da nhap sai 3 lan!");
			return;
		}
		printf("Ban da nhap sai (lan %d )! Vui long chon so tu 0 den 15! Xin vui long nhap lai: ", check);
		scanf("%d", &so2);
		check++;
	}
	srand(time(0));
	kq1 = rand() % 15 + 1;
	kq2 = rand() % 15 + 1;
	printf("Chung toi dang tim ra 2 con so may man. Xin vui long cho 1 giay. Xin cam on!\n");
	Sleep(1000);
	printf("2 so may man la: %d va %d\n", kq1, kq2);
	if (so1 == kq1 || so1 == kq2) {
		dem++;
	}
	if (so2 == kq1 || so2 == kq2) {
		dem++;
	}
	if (dem == 2) {
		printf("chuc minh ban da trung giai nhat!");
	}
	else if (dem == 1) {
		printf("chuc minh ban da trung giai nhi!");
	}
	else {
		printf("Chuc ban may man lan sau!");
	}
}
struct phanSo
{
	int tu;
	int mau;
};
typedef struct phanSo ps;
void rutGonPS(ps* a) {
	int ucln = timUCLN(a->tu, a->mau);
	a->tu = a->tu / ucln;
	a->mau = a->mau / ucln;
	if (a->mau < 0) {
		a->tu = -a->tu;
		a->mau = -a->mau;
	}
}
void nhapPS(ps* a) {
	printf("Nhap tu so: ");
	scanf("%d", &a->tu);
	printf("Nhap mau so: ");
	scanf("%d", &a->mau);
	int check = 0;
	while (a->mau == 0) {
		if (check >= 3) {
			printf("Ban dan nhap sai qua 3 lan!");
			//return;
			exit(0);
		}
		check++;
		printf("Mau so phai khac 0 (sai lan %d )! xin vui long nhap lai: ", check);
		scanf("%d", &a->mau);

	}

}
void xuatPS(ps a) {
	rutGonPS(&a);
	if (a.mau == 1) {
		printf("%d", a.tu);
	}
	else if (a.tu == 0) {
		printf("0");
	}
	else {
		printf("%d/%d", a.tu, a.mau);
	}
}
ps tong(ps a, ps b) {
	ps kq;
	kq.tu = (a.tu * b.mau) + (b.tu * a.mau);
	kq.mau = a.mau * b.mau;
	rutGonPS(&kq);
	return kq;
}
ps hieu(ps a, ps b) {
	ps kq;
	kq.tu = (a.tu * b.mau) - (b.tu * a.mau);
	kq.mau = a.mau * b.mau;
	rutGonPS(&kq);
	return kq;
}
ps tich(ps a, ps b) {
	ps kq;
	kq.tu = a.tu * b.tu;
	kq.mau = a.mau * b.mau;
	rutGonPS(&kq);
	return kq;
}
ps thuong(ps a, ps b) {
	ps kq;
	kq.tu = a.tu * b.mau;
	kq.mau = a.mau * b.tu;
	rutGonPS(&kq);
	return kq;
}
void tinhToanPhanSo() {

	printf("-------------  Tinh toan phan so  -------------\n");
	ps ps1, ps2, kq;
	printf("Moi nhap phan so thu 1: \n");
	nhapPS(&ps1);
	printf("Moi nhap phan so thu 2: \n");
	nhapPS(&ps2);
	printf("Tong cua hai phan so: "); xuatPS(ps1); printf(" + ");  xuatPS(ps2); printf(" = "); xuatPS(tong(ps1, ps2)); printf("\n");
	printf("Hieu cua hai phan so: "); xuatPS(ps1); printf(" + ");  xuatPS(ps2); printf(" = "); xuatPS(hieu(ps1, ps2)); printf("\n");
	printf("Tich cua hai phan so: "); xuatPS(ps1); printf(" + ");  xuatPS(ps2); printf(" = "); xuatPS(tich(ps1, ps2)); printf("\n");
	printf("Thuong cua hai phan so: "); xuatPS(ps1); printf(" + ");  xuatPS(ps2); printf(" = "); xuatPS(thuong(ps1, ps2)); printf("\n");
}
void lapChucNang(int chonChucNang) {
	int tiepTuc = 1;
	system("cls");
	while (tiepTuc == 1) {
		switch (chonChucNang) {
		case 1:
			kiemTraSoNguyen();
			break;
		case 2:
			uocChungVaBoiChung();
			break;
		case 3:
			printf("----------  CHUC NANG TINH TIEN QUAN KARAOKE  ----------\n");
			int gioBatDau, gioKetThuc;
			printf("Nhap gio bat dau thue phong (12h - 23h): ");
			scanf("%d", &gioBatDau);
			if (gioBatDau < 12 || gioBatDau > 23) {
				printf("Gio bat dau khong nam trong gio mo cua. Vui long nhap lai: ");
				scanf("%d", &gioBatDau);
				printf("\n");
				
			}
			printf("Nhap gio ket thuc thue phong (12h - 23h): ");
			scanf("%d", &gioKetThuc);
			if (gioKetThuc < 12 || gioKetThuc > 23) {
				printf("Gio ket thuc khong nam trong gio mo cua. Vui long nhap lai: ");
				scanf("%d", &gioKetThuc);
				printf("\n");
				
			}
			if (gioKetThuc <= gioBatDau) {
				printf("Gio ket thuc phai lon hon gio bat dau. Vui long nhap lai. \n");
				break;
			} double tongTien = tinhTienQuanKaraoke(gioBatDau, gioKetThuc);
			if (tongTien != -1) {
				printf("Tong tien phai tra cho quan karaoke la: %.0f VND \n", tongTien);
			}
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
		printf(" ================== MENU CHUONG TRINH ================== \n");
		printf("|  1. Kiem tra so nguyen                                |\n");
		printf("|  2. Tim uoc chung va boi chung                        |\n");
		printf("|  3. Tinh tien quan karaoke                            |\n");
		printf("|  4. Tinh tien dien                                    |\n");
		printf("|  5. Doi tien                                          |\n");
		printf("|  6. Tinh lai vay tien                                 |\n");
		printf("|  7. Vay tien mua xe                                   |\n");
		printf("|  8. Sap xep thong tin sinh vien                       |\n");
		printf("|  9. Xay dung game Fpoly                               |\n");
		printf("|  10. Tinh toan phan so                                |\n");
		printf("|  0. Thoat chuong trinh                                |\n");
		printf(" ======================================================= \n");
		printf("* Chon chuc nang tren Menu [0-10]:  ");
		scanf("%d", &chonChucNang);
		lapChucNang(chonChucNang);
	} while (chonChucNang != 0);
}