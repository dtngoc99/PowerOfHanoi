#include<iostream>   //khai bao thu vien nhap xuat chuan
using namespace std;
#include<string.h> //ho tro thao tac ki tu char
#include<string> //ho tro thao tac chuoi string



//power of Ha Noi
void Power_HN(int n, char cotNguon, char cotDich, char cotTrungGian);

int main()
{
	int n = 3;
	char a = 'A', b = 'B', c = 'C';
	Power_HN(n, a, b, c);

	return 0;
}
void Power_HN(int n, char cotNguon, char cotDich, char cotTrungGian)
{
	if (n == 1)
	{
		cout << cotNguon << "--------->" << cotDich << endl;
	}
	else
	{
		Power_HN(n - 1, cotNguon, cotTrungGian, cotDich);
		cout << cotNguon << "--------->" << cotDich << endl;
		Power_HN(n - 1,cotTrungGian , cotDich, cotNguon);
		
	}
}
