#include<iostream>
#include<stdlib.h>
using namespace std;
class pegawai
{protected:
char nama[20],alamat[20];
public:
int umur;
void input()
{cout<<"\n";
cout<<" 	1.Masukkan Nama 	:	";cin>>nama;
cout<<"\n 	2.Masukkan Alamat   :	";cin>>alamat;
cout<<"\n 	3.Masukkan Umur     :	";cin>>umur;
}
void tampil()
{cout<<"  1. Nama	:	"<<nama;
cout<<"\n 2. Alamat :	"<<alamat;
cout<<"\n 3. Umur   :	"<<umur;

}
};
class manager:public pegawai
{
public:
int gajim;
void inputm()
{pegawai::input();
cout<<"\n 4.Masukkan Jenis Manager	:	";cin>>jabatan;
cout<<"\n 5.Masukkan No-Telp     	:	";cin>>no_telp;
cout<<"\n 6.Masukkan Gaji        	:	Rp.";cin>>gajim;
}
void tampilm()
{pegawai::input();
cout<<"\n 4.jenis manager	:	"<<jabatan;
cout<<"\n 5.no_telp      	:	"<<no_telp;
cout<<"\n 6.gaji         	:	Rp."<<gajim;
}
protected:
char jabatan[20],no_telp[20];
};
class supervisor:public pegawai
{protected:
char jabatans[20],no_telps[20];
public:
int gajis;
void inputs()
{pegawai::input();
cout<<"\n 4.Masukkan Devisi Kerja :";cin>>jabatans;
cout<<"\n 5.Masukkan No-telp      :";cin>>no_telps;
cout<<"\n 6.Masukkan Gaji         : Rp.";cin>>gajis;
}
void tampils()
{pegawai::input();
cout<<"\n 4.Devisi Kerja :"<<jabatans;
cout<<"\n 5.No-Telp      :"<<no_telps;
cout<<"\n 6.Gaji         : Rp."<<gajis;
}
};
class it:public pegawai
{protected:
char jabatant[20],no_telpt[20];
public:
int gajit;
void inputt()
{pegawai::input();
cout<<"\n 4.Masukkan Bagian Kerja : ";cin>>jabatant;
cout<<"\n 5.Masukkan No-Telp      : ";cin>>no_telpt;
cout<<"\n 6.Masukkan Gaji      	  : Rp.";cin>>gajit;
}
void tampilt()
{pegawai::input();
cout<<"\n 4.Bagian Kerja : "<<jabatant;
cout<<"\n 5.No-Telp    	 : "<<no_telpt;
cout<<"\n 6.Gaji         : Rp."<<gajit;
}
};
class gaji:public manager,public it,public supervisor
{public:
int hitung(void)
{return(gajis+gajim+gajit);
}
void tampil()
{cout<<"\n\n\n";
cout<<"Gaji Manager  	     : RP. "<<gajim;cout<<"\n\n";
cout<<"Gaji Supervisor      : RP. "<<gajim;cout<<"\n\n";
cout<<"Gaji IT Support       : RP. "<<gajim;cout<<"\n\n";
cout<<"total		         : RP. "<<hitung();cout<<"\n\n";
}
};
int main()
{
a:
int pilih;
cout<<"==KARYAWAN==\n";
cout<<"1.Menampilkan Data Karyawan\n";
cout<<"2.Input Data Karyawan\n";
cout<<"3.Cari Data Karyawan\n";
cout<<"Masukkan Pilihan Menu?\n";
cin>>pilih;
switch (pilih)
{
		case 1:
		{int pilih1;
		cout<<"1.Semua Data Karyawan\n";
		cout<<"2.Data Manager\n";
		cout<<"3.Data Supervisor\n";
		cout<<"4.Data IT Support\n";
		cout<<"5.Total Gaji Karyawan\n";
		cout<<"6.Kembali \n";
		cout<<"Masukkan Pilihan Menu?\n";
		cin>>pilih1;
		switch(pilih1)
		{
			case 1:
			{gaji g;
			cout<<"-------------------\n";
			cout<<"semua data karyawan\n";
			cout<<"-------------------\n";
			g.tampilm();
			g.tampils();
			g.tampilt();
			}
			break;
				case 2:
				{gaji h;
				cout<<"-------------------\n";
				cout<<"data  manager\n";
				cout<<"-------------------\n";
				h.tampilm();
				}
				break;
			case 3:
			{gaji i;
			cout<<"-------------------\n";
			cout<<"data supervisor\n";
			cout<<"-------------------\n";
			i.tampils();
			}
			break;
				case 4:
				{gaji j;
				cout<<"-------------------\n";
				cout<<"data it support \n";
				cout<<"-------------------\n";
				j.tampilt();
				}
				break;
			case 5:
			{gaji k;
			cout<<"-------------------\n";
			cout<<"total gaji karyawan\n";
			cout<<"-------------------\n";
			k.tampil();
			}
			break;
				case 6:
				goto a;
				break;
				}
			}
		case 2:
		{int pilih2;
		cout<<"1.Data Manager\n";
		cout<<"2.Data Supervisor\n";
		cout<<"3.Data IT Support\n";
		cout<<"4.Kembali Lagi...\n";
		cout<<"pilih menu?\n";
		cin>>pilih2;
		switch(pilih2)
		{
				case 1:
				{manager ma;
				cout<<"-------------------\n";
				cout<<"data manager\n";
				cout<<"-------------------\n";
				ma.inputm();
				}
				break;
				case 2:
				{supervisor sp;
				cout<<"-------------------\n";
				cout<<"data  supervisor\n";
				cout<<"-------------------\n";
				sp.inputs();
				}
				break;
				case 3:
				{it ui;
				cout<<"-------------------\n";
				cout<<"data it support\n";
				cout<<"-------------------\n";
				ui.inputt();
				}
				break;
				case 4:
				goto a;
				break;
				}
				}
case 3:
{
}
}
}

