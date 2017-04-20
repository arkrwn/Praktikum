#include <iostream>
using namespace std;

class LayangLayang
{
	public:  
		float d1,d2,s1,s2;
		LayangLayang();
		LayangLayang(float a,float b,float s,float si);
		float luas()
		{
			return 0.5*d1*d2;
		};
		float keliling()
		{
			return 2*(s1+s2);
		};
};
LayangLayang::LayangLayang() 
{
	cout<<"Constructor Dijalankan Guys"<<endl;
	d1 = 3;
	d2 = 4;
	s1 = 5;
	s2 = 4;
}

LayangLayang::LayangLayang(float x,float y,float o,float p)
{
	d1 = x;
	d2 = y;
	s1 = o;
	s2 = p;
}

class Trapesium
{
	public:
		float rs,t,r1,r2,r3,r4;
		Trapesium();
		Trapesium(float g,float h,float j,float k,float i,float l);
			float luas()
			{
				return rs*0.5*t;
			};
			float keliling()
			{
				return r1+r2+r3+r4;
			};
};
Trapesium::Trapesium()
{
	rs = 4;
	t = 8;
	r1 = 4;
	r2 = 5;
	r3 = 9;
	r4 = 7;
}
Trapesium::Trapesium(float x, float y,float z,float p,float q,float b)
{
	rs = x;
	t = y;
	r1 = z;
	r2 = p;
	r3 = q;
	r4 = b;
}

class BelahKetupat
{
	public:
		float s,d1,d2;
		BelahKetupat();
		BelahKetupat(float a,float b,float c);
			float luas()
			{
				return 0.5*d1*d2;
			};
			float keliling()
			{
				return 4*s;
			};
};
BelahKetupat::BelahKetupat()
{
	d1 = 5;
	d2 = 8;
	s = 9;
}
BelahKetupat::BelahKetupat(float x,float y,float z)
{
	d1 = x;
	d2 = y;
	s = z;
}

class JajarGenjang
{
	public:
		float a,t,b,sm;
		JajarGenjang();
		JajarGenjang(float a,float b,float c,float d);
			float luas()
			{
				return a*t;
			};
			float keliling()
			{
				return 2*b*2*sm;
			};
};

JajarGenjang::JajarGenjang()
{
	a = 15;
	t = 20;
	b = 2;
	sm = 4;
}
JajarGenjang::JajarGenjang(float x,float y,float z,float o)
{
	b = x;
	sm = y;
	b = z;
	a = o;
}

int main()
{
	unsigned int pilihan;
	LayangLayang a1;
	Trapesium b1;
	BelahKetupat c1;
	JajarGenjang d1;
	cout<<"1. Layang-Layang\n";
	cout<<"2. Trapesium\n";
	cout<<"3. Belah Ketupat\n";
	cout<<"4. Jajar Genjang\n";
	cout<<"5. Exit\n";
	while(pilihan>=0)
	{
		cout<<"Pilhan anda (1/2/3/4/5) : "; cin>>pilihan;
		switch(pilihan)
		{	
			case 1:
				cout<<"Hasil Luas Dan Keliling Layang-Layang \n";
				cout<<"------------------------------------- \n";
				cout<<"Nilai Awal Luas = "<<a1.luas()<<endl;
				cout<<"Nilai Awal Keliling = "<<a1.keliling()<<endl;
				cout<<"Input Nilai Dimensi 1 = "; cin>>a1.d1;
				cout<<"Input Nilai Dimensi 2 = "; cin>>a1.d2;
				cout<<"Input Nilai Sisi 1 = "; cin>>a1.s1;
				cout<<"Input Nilai Sisi 2 = "; cin>>a1.s1;
				cout<<"Luas Layang-Layang adalah = "<<a1.luas()<<endl;
				cout<<"Keliling Layang-Layang adalah = "<<a1.keliling()<<endl;
				break;
			case 2:
				cout<<"Hasil Luas Dan Keliling Trapesium \n";
				cout<<"------------------------------------- \n";
				cout<<"Nilai Awal Luas = "<<b1.luas()<<endl;
				cout<<"Nilai Awal Keliling = "<<b1.keliling()<<endl;
				cout<<"Jumlah Rusuk Sejajar = "; cin>>b1.rs;
				cout<<"Masukan Nilai Tinggi = "; cin>>b1.t;
				cout<<"Masukan Nilai Rusuk 1 = "; cin>>b1.r1;
				cout<<"Masukan Nilai Rusuk 2 = "; cin>>b1.r2;
				cout<<"Masukan Nilai Rusuk 3 = "; cin>>b1.r3;
				cout<<"Masukan Nilai Rusuk 4 = "; cin>>b1.r4;
				cout<<"Luas Trapesium adalah = "<<b1.luas()<<endl;
				cout<<"Keliling Trapesium adalah = "<<b1.keliling()<<endl;
				break;
			case 3:
				cout<<"Hasil Luas Dan Keliling Belah Ketupat \n";
				cout<<"------------------------------------- \n";
				cout<<"Nilai Awal Luas = "<<c1.luas()<<endl;
				cout<<"Nilai Awal Keliling = "<<c1.keliling()<<endl;
				cout<<"Masukan Nilai Dimensi 1 = "; cin>>c1.d1;
				cout<<"Masukan Nilai Dimensi 2 = "; cin>>c1.d2;
				cout<<"Masukan Nilai S = "; cin>>c1.s;
				cout<<"Luas Belah Ketupat adalah = "<<c1.luas()<<endl;
				cout<<"Keliling Belah Ketupat adalah = "<<c1.keliling()<<endl;
				break;
			case 4:
				cout<<"Hasil Luas Dan Keliling Jajar Genjang \n";
				cout<<"------------------------------------- \n";
				cout<<"Nilai Awal Luas = "<<d1.luas()<<endl;
				cout<<"Nilai Awal Keliling = "<<d1.keliling()<<endl;
				cout<<"Masukan Nilai Tinggi = "; cin>>d1.t;
				cout<<"Masukan Nilai Alas = "; cin>>d1.b;
				cout<<"Masukan Nilai Sisi Miring = "; cin>>d1.sm;
				cout<<"Luas Jajar Genjang adalah = "<<d1.luas()<<endl;
				cout<<"Keliling Jajar Genjang adalah = "<<d1.keliling()<<endl;
				break;
			case 5:
				exit(5);
				default:
				cout<<"Pilihan Yang Anda Masukan Tidak Terdaftar ..!!!"<<endl;
				break;
				return 0;
		}
	}	
}

