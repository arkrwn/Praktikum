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
cout<<"	 Karyawan";
cout<<"\n===========================";
cout<<"\n1.tampil data karyawan\n";
cout<<"2.input data karyawan\n";
cout<<"3.cari data karyawan\n";
cout<<"\n==========================";
cout<<"\n	Pilih Menu?";
cout<<"\n==========================";
cin>>pilih;
switch (p
