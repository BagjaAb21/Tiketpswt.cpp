#include <iostream>


using namespace std;
int main()
{
	int kodejurusan, kodekelas, banyaktiket;
	long int hargatiket, tharga,bayaran;
	float diskon, tbayar,kembali;
	char back;

	cout << "Pilih Jurusan : \n";
	cout << "===============\n";
	cout << "1. Bandung\n2. Semarang\n3. Jakarta\n";
	cout << "===============\n";
	cout << "Jurusan yang dipilih : ";
	cin >> kodejurusan;
	cout << "===============\n";
	cout << "pilih kelas : \n";
	cout << "1. Eksekutif\n2. Bisnis\n3. Ekonomi\n";
	cout << "===============\n";
	cout << "Kelas yang dipilih : ";
	cin >> kodekelas; 
	cout << kodekelas << endl;
	cout << "Banyak tiket yang dipesan : ";
	cin >> banyaktiket;

	if (kodejurusan == 1)
	{
		if (kodekelas == 1)hargatiket = 75000; 
		else
			if (kodekelas == 2)hargatiket = 40000; 
			else
				if (kodekelas == 3)hargatiket = 35000;
				
	} 
	else 

	if ((kodejurusan==2)&&(kodekelas==1))
			hargatiket = 90000;
	else
	if ((kodejurusan == 2) && (kodekelas == 2))
			hargatiket = 55000;
		else
	if ((kodejurusan == 2) && (kodekelas == 3))
				hargatiket = 28000;
			else
		
		if (kodejurusan == 3)
		{
			switch (kodekelas)
			{
			case 1:hargatiket = 98000;
				break;
			case 2:hargatiket = 77000;
				break;
			case 3:hargatiket = 25000;
			}
		}
	cout << "Harga 1 Tiket : Rp." << hargatiket << endl;
	tharga = banyaktiket * hargatiket;
	cout << "Total Harga yang harus dibayar : Rp." << tharga << endl;
	if ( ((kodejurusan == 3) && (kodekelas == 1)) || ((kodejurusan == 2) && (kodekelas == 2)) )
		diskon = 0.1 * tharga;
	else
		diskon = 0;
	cout << "Diskon 10% : Rp."<< diskon << endl;
	tbayar = tharga - diskon;
	cout << "total pembayaran yang harus dibayar adalah : Rp." << tbayar << endl;
	do{
	cout << "membayar sejumlah : Rp.";
	cin >> bayaran;
	if (bayaran <= tbayar)
		{
		cout << "uang yang anda bayarkan kurang dari total jumlah pembayaran !!!" << endl;
		cout << "ingin memasukkan kembali jumlah inputan pembayaran yang benar Y/T? : ";
		cin >> back;
		}
	
	else
	{
		kembali = bayaran - tbayar;
		cout << "Kembali : Rp." << kembali << endl;
	}
	} while (back /= 'Y');
	system("pause");
	return 0;
}