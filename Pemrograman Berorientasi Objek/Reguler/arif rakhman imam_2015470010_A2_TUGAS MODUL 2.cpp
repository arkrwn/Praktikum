#include<iostream>
#include<stdlib.h>
using namespace std;
class pegawai
{
protected:
char nama[20],alamat[20];
public:
int umur;
void input()
{cout<<"\n";
cout<<"   1.masukkan nama 		  :";cin>>nama;
cout<<"\n 2.masukkan alamat   	  :";cin>>alamat;
cout<<"\n 3.masukkan umur         :";cin>>umur;
}
void tampil()
{cout<<" 1. nama 		  :"<<nama;
cout<<"\n 2. alamat   	  :"<<alamat;
cout<<"\n 3. umur         :"<<umur;

}
};
class manager:public pegawai
{
public:
int gajim;
void inputm()
{pegawai::input();
cout<<"\n 4.masukkan jenis manager:";cin>>jabatan;
cout<<"\n 5.masukkan no_telp      :";cin>>no_telp;
cout<<"\n 6.masukkan gaji         :Rp.";cin>>gajim;
}
void tampilm()
{pegawai::input();
cout<<"\n 4.jenis manager:"<<jabatan;
cout<<"\n 5.no_telp      :"<<no_telp;
cout<<"\n 6.gaji         :Rp."<<gajim;
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
cout<<"\n 4.masukkan devisi kerja :";cin>>jabatans;
cout<<"\n 5.masukkan no_telp      :";cin>>no_telps;
cout<<"\n 6.masukkan gaji         :Rp.";cin>>gajis;
}
void tampils()
{pegawai::input();
cout<<"\n 4.divisi kerja :"<<jabatans;
cout<<"\n 5.no_telp      :"<<no_telps;
cout<<"\n 6.gaji         :Rp."<<gajis;
}
};
class it:public pegawai
{protected:
char jabatant[20],no_telpt[20];
public:
int gajit;
void inputt()
{pegawai::input();
cout<<"\n 4.masukkan bagian kerja :";cin>>jabatant;
cout<<"\n 5.masukkan no_telp      :";cin>>no_telpt;
cout<<"\n 6.masukkan gaji         :Rp.";cin>>gajit;
}
void tampilt()
{pegawai::input();
cout<<"\n 4.bagian kerja :"<<jabatant;
cout<<"\n 5.no_telp      :"<<no_telpt;
cout<<"\n 6.gaji         :Rp."<<gajit;
}
};
class gaji:public manager,public it,public supervisor
{public:
int hitung(void)
{return(gajis+gajim+gajit);
}
void tampil()
{cout<<"\n\n\n";
cout<<"gaji manager  	     :RP. "<<gajim;cout<<"\n\n";
cout<<"gaji supervisor       :RP. "<<gajim;cout<<"\n\n";
cout<<"gaji IT support       :RP. "<<gajim;cout<<"\n\n";
cout<<"total		         :RP. "<<hitung();cout<<"\n\n";
}
};
int main()
{
a:
int pilih;
cout<<"===========================\n";
cout<<"	= Karyawan =";
cout<<"\n===========================";
cout<<"\n1. Tampil Data Karyawan\n";
cout<<"2. Input Data Karyawan\n";
cout<<"3. Cari Data Karyawan\n";
cout<<"\n==========================";
cout<<"\n	Pilih Menu";
cout<<"\n==========================\n";
cin>>pilih;
switch (pilih)
{
		case 1:
		{int pilih1;
		cout<<"1.semua data karyawan\n";
		cout<<"2.data manager\n";
		cout<<"3.data supervisor\n";
		cout<<"4.data it support\n";
		cout<<"5.total gaji karyawan\n";
		cout<<"6.kembali\n";
		cout<<"pilih menu?\n";
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
		cout<<"1.data manager\n";
		cout<<"2.data supervisor\n";
		cout<<"3.data it support\n";
		cout<<"4.kembali\n";
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

