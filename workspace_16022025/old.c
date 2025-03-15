#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void withdraw_atm();
void find_max_value();
void find_max_value_3_so();
void kiemtra_am_duong();
void kiemtra_chan_le();
void xeploai_hocsinh();
void tinhgia_tien_dien();
void in_tong_n_so();
void in_bang_cuu_chuong();
void nhap_password(void);
void tinh_lai_ngan_hang(void);
void main()
{
	//withdraw_atm();
	//find_max_value();
	//find_max_value_3_so();
	//kiemtra_am_duong();
	//kiemtra_chan_le();
	//xeploai_hocsinh();
	//tinhgia_tien_dien();
	//in_bang_cuu_chuong();
	//in_tong_n_so();
	//nhap_password();
	tinh_lai_ngan_hang();
	system("pause");

}
void withdraw_atm()
{
	int step = 1;
	int pass;
	int pass_default = 1234;
	int awser = 0;
	int wrong_time = 0;
	int total_money = 1000;//dolar
	int money_withdraw = 0;
	while (step != 5)
	{
		switch (step)
		{
		case 1:
			printf("vui long nhap mat khau: ");
			scanf("%d", &pass);
			if (pass == pass_default)
			{
				step = 2;
			}
			else
			{
				wrong_time++;
				if (wrong_time >= 3)
				{
					step = 5;

				}
				else
				{
					step = 6;
				}
			}
			break;
		case 2:
			printf("nhap so tien: ");
			step = 3;
			break;
		case 3:
			scanf("%d", &money_withdraw);
			if (money_withdraw > total_money)
			{
				printf("So tien khach hang muon rut nhieu hon ATM dang co\r\n");
				step = 2;
			}
			else
			{
				step = 4;
			}
			break;
		case 4:
			total_money = total_money - money_withdraw;
			printf("Rut tien thanh cong, so tien muon rut la: %d\r\n", money_withdraw);
			printf("So tien con lai trong tai khoan la: %d\r\n", total_money);
			step = 5;
			break;
		case 5:
			printf("Thoat\r\n");
			break;
		case 6:
			printf("nhap sai pass\n");
			printf("nhan 1: de tiep tuc nhap lai, 0: de thoat\r\n");
			scanf("%d", &awser);
			if (awser == 0)
			{
				step = 5;
			}
			else
			{
				step = 1;
			}
			break;
		}
	}
	system("pause");
}

void find_max_value()
{
	int a, b;
	printf("Vui ong nhap vao hai so can so sanh a va b:");
	scanf_s("%d %d", &a, &b);
	// Cach 1
	if (a >= b)
	{
		printf("Cach 1: Max cua hai so vua nhap la: %d\r\n", a);
	}
	else
	{
		printf("Cach 1: Max cua hai so vua nhap la: %d\r\n", b);
	}

	// Cach 2
	int c;
	if (a >= b)
	{
		c = a;
	}
	else
	{
		c = b;
	}
	printf("Cach 2: Max cua hai so vua nhap la: %d\r\n", c);

	// Cach 3
	printf("Cach 3: Max cua hai so vua nhap la: %d\r\n", a >= b ? a : b);

	// Cach 4
	printf("Cach 4: Max cua hai so vua nhap la: %d\r\n", (a + b + abs(a - b)) / 2);
	system("pause");
}
void find_max_value_3_so()
{
	int a, b, c, max_value;
	printf("Vui ong nhap vao hai so can so sanh a, b va c: ");
	scanf_s("%d %d %d", &a, &b, &c);
	max_value = a;
	if (max_value < b)
	{
		max_value = b;
	}
	else if(max_value < c)
	{
		max_value = c;
	}
	printf("Max cua ba so vua nhap la: %d\r\n", max_value);
	system("pause");
}
void kiemtra_am_duong()
{
	int a;
	printf("Vui long nhap vao so a: ");
	scanf_s("%d", &a);
	if (a < 0)
	{
		printf("So a la so am\r\n");
	}
	else if (a > 0)
	{
		printf("So a la so duong\r\n");
	}
	else
	{
		printf("So a la so 0\r\n");
	}
	system("pause");
}
void kiemtra_chan_le()
{
	int a;
	printf("Vui long nhap vao so a: ");
	scanf_s("%d", &a);
	if (a % 2 == 0)
	{
		printf("So a la so chan\r\n");
	}
	else
	{
		printf("So a la so le\r\n");
	}
	system("pause");
}
void xeploai_hocsinh()
{
	float diem;
	printf("Vui long nhap vao diem cua hoc sinh: ");
	scanf_s("%f", &diem);
	if (diem >= 8.0)
	{
		printf("Gioi\r\n");
	}
	else if (diem >= 6.5)
	{
		printf("kha\r\n");
	}
	else if (diem >= 5.0)
	{
		printf("trung binh\r\n");
	}
	else
	{
		printf("yeu\r\n");
	}
	system("pause");
}
void tinhgia_tien_dien(void)
{
	int kwh, remain;
	float gia;
	float tien_dien = 0;
	printf("nhap vao so kwh dien da dung: \r\n");
	scanf_s("%d", &kwh);
	#define TIEN_DIEN_THEO_BAC(i) ((((i+5)/6)*1.678*50)+(((i+4)/6)*1.734*50)+(((i+3)/6)*2.014*100)+\
	                               (((i+2)/6)*1.678*50)+(((i+1)/6)*12.834*50))
	if (kwh > 400)
	{
		tien_dien = 2.927 * (kwh - 400) + TIEN_DIEN_THEO_BAC(5);
	}
	else if (kwh > 300) {
		tien_dien = 2.834 * (kwh - 300) + TIEN_DIEN_THEO_BAC(4);
	}
	else if (kwh > 200) {
		tien_dien = 2.536 * (kwh - 200) + TIEN_DIEN_THEO_BAC(3);
	}
	else if (kwh > 100) {
		tien_dien = 2.014 * (kwh - 100) + TIEN_DIEN_THEO_BAC(2);
	}
	else if(kwh>50){
		tien_dien = 1.734 * (kwh - 50) + TIEN_DIEN_THEO_BAC(1);
	}
	else {
		tien_dien = 1.678 * kwh;
	}
	printf("Tien dien la: %f\r\n", tien_dien);
	system("pause");
}
//Buổi 3
void in_tong_n_so(void)
{
	int n;
	int sum = 0;
	int sum_chan = 0;
	printf("vui long nhap vao so n: \r\n");
	scanf_s("%d", &n);
	for (int i=0; i <= n; i++)
	{
		sum = sum + i;
		if (i % 2 == 0)
		{
			sum_chan = sum_chan + i;
		}
	}
	printf("Tong n so dau tien la: %d va tong so chan la: %d\r\n", sum, sum_chan);
}
void in_bang_cuu_chuong(void)
{
	for (int i = 1; i < 11; i++)
	{
		for (int j = 1; j < 11; j++)
		{
			printf("%d x %d = %d\t", j, i, i * j);
		}
		printf("\r\n");
	}
	system("pause");
}
void nhap_password(void)
{
	// Nhap khi nao dung thi thoi
	int pass = 1234, input,solan=1;
	do
	{
		printf("Vui long nhap vao password 1: \r\n");
		scanf_s("%d", &input);
	} while (input != pass);
	printf("Ban da nhap dung password\r\n");

	// Nhap khong qua 3 lan
	input = 0;
	while ((input != pass) && (solan < 4))
	{
		printf("Vui long nhap vao password la %d: \r\n", solan);
		scanf_s("%d", &input);
		solan++;
	}
	printf("Nhap sai qua 3 lan\r\n");
}
void tinh_lai_ngan_hang(void)
{
	int sonam;
	float sotien;
	float laisuat = 8.2 / 100;
	printf("Vui long nhap vao so tien va so nam: \r\n");
	scanf_s("%f %d", &sotien, &sonam);
	for (int i = 1; i <= sonam; i++)
	{
		sotien = sotien*(1+laisuat);
	}
	printf("So tien goi sau %d nam la: %.2f\r\n", sonam, sotien);
}
void tinh_tich_phan(void)
{
	float a, b, f;
	print("Vui long nhap vao a, b va tanso: \r\n");
}
void tinh_tien_dien_moi(void)
{
	int kwh, n=1;
	float tien_dien = 0, tien_dien_bac = 0;
	printf("nhap vao so kwh dien da dung: \r\n");
	scanf_s("%d", &kwh);
	printf("\tDon Gia (dong/kWh)\tSan Luong (kWh)\tThanh Tien (dong)\r\n");
	while (n != 7)
	{
		switch (n)
			case 1:
				if (kwh > 52) {
					tien_dien_bac = 52 * 1.893;
					kwh = kwh - 52;
					n = 2;
				}
				else {
					tien_dien_bac = kwh * 1 893;
					n = 7;
				}
				tien_dien = tien_dien + tien_dien_bac;
				break;
			case 2:
				if (kwh > 52) {
					tien_dien_bac = 52 * 1.956;
					kwh = kwh - 52;
					n = 3;
				}
				else {
					tien_dien_bac = kwh * 1.956;
					n = 7;
				}
				tien_dien = tien_dien + tien_dien_bac;
				break;
			case 3:
				if (kwh > 52) {
					tien_dien_bac = 103 * 2.271;
					kwh = kwh - 103;
					n = 4;
				}
				else {
					tien_dien_bac = kwh * 2.271;
					n = 7;
				}
				tien_dien = tien_dien + tien_dien_bac;
				break;

			printf("Tien dien la: %f\r\n", tien_dien);
			system("pause");
	}
}
