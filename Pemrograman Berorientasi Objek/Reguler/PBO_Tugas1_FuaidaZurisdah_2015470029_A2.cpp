#include <iostream>
using namespace std;
class layang2
{
public:
	float d1,d2;
	layang2();
	layang2(float i,float j);
	float luas_layang2()
	{
		return (0.5*d1*d2);
	}
		float keliling_layang2()
	{
		return(2*(d1+d2));
	}
~layang2()
{
}
};
layang2::layang2()
{
}
layang2::layang2(float x,float y)
{
	d1=x;
	d2=y;
}
class belahketupat
{
public:
	float d1,d2;
	belahketupat();
	belahketupat(float i,float j);
	float luas_belahketupat()
	{
		return (0.5*d1*d2);
	}
		float keliling_belahketupat()
	{
		return(2*(d1+d2));
	}
~belahketupat(){
}
};
belahketupat::belahketupat()
{
}
belahketupat::belahketupat(float x,float y)
{
	d1=x;
	d2=y;
}
class jajargenjang
{
	public:
	float d1,d2;
	jajargenjang();
	jajargenjang(float i,float j);
	float luas_jajargenjang()
	{
		return(d1*d2);
	}
	float keliling_jajargenjang()
	{
		return(2 *(d1+d2));
	}
~jajargenjang()
{
}
};
jajargenjang::jajargenjang()
{
}
jajargenjang::jajargenjang(float x,float y)
{
	d1=x;
	d2=y;
}
class trapesium
{
	public:
	float a,c,t,t2;
	trapesium();
	trapesium(float k,float l,float m,float n);
	float luas_trapesium()
	{
		return (0.5*(a+c)*t);
	}
		float keliling_trapesium()
	{
	return(a+t+t2+c);
	}
	
~trapesium()
{
}	
};
trapesium::trapesium()
{
}
trapesium::trapesium(float o,float p,float q,float r)
{
	t=o;
	a=p;
	c=q;
	t2=r;
}
int main()
{
	int pilih;
	cout<<"bangun ruang 2D\n";
	cout<<"1.trapesium\n";
	cout<<"2.layang-layang\n";
	cout<<"3.belah ketupat\n";
	cout<<"4.jajar genjang\n";
	cout<<"silahkan pilih!\n";
	cin>>pilih;
	switch (pilih)
{
	case 1:
		{
trapesium tr;
cout<<"luas trapesium\n";
cout<<"masukkan sisi atas :";cin>>tr.a;cout<<"\n";
cout<<"masukkan sisi bawah :";cin>>tr.c;cout<<"\n";
cout<<"masukkan tinggi :";cin>>tr.t;cout<<"\n";
cout<<"luas trapesium :"<<tr.luas_trapesium();cout<<"\n\n\n";
cout<<"keliling trapesium\n";
cout<<"masukkan sisi 1 :";cin>>tr.a;cout<<"\n";
cout<<"masukkan sisi 2 :";cin>>tr.c;cout<<"\n";
cout<<"masukkan sisi 3 :";cin>>tr.t;cout<<"\n";
cout<<"masukkan sisi 4 :";cin>>tr.t2;cout<<"\n";
cout<<"keliling trapesium :"<<tr.keliling_trapesium();cout<<"\n";
}
case 2:
		{
trapesium trr;
layang2 ll;
cout<<"luas layang-layang\n";
cout<<"masukkan diagonal 1 :";cin>>ll.d1;cout<<"\n";
cout<<"masukkan diagonal 2 :";cin>>ll.d2;cout<<"\n";
cout<<"luas layang-layang:"<<ll.luas_layang2();cout<<"\n\n\n";
cout<<"keliling layang-layang \n";
cout<<"masukkan sisi 1 :";cin>>trr.a;cout<<"\n";
cout<<"masukkan sisi 2 :";cin>>trr.c;cout<<"\n";
cout<<"masukkan sisi 3 :";cin>>trr.t;cout<<"\n";
cout<<"masukkan sisi 4 :";cin>>trr.t2;cout<<"\n";
cout<<"keliling layang-layang:"<<trr.keliling_trapesium();cout<<"\n";
}
case 3:
		{
trapesium trrr;
belahketupat bk;


cout<<"luas belah ketupat\n";
cout<<"masukkan diagonal 1 :";cin>>bk.d1;cout<<"\n";
cout<<"masukkan diagonal 2 :";cin>>bk.d2;cout<<"\n";
cout<<"luas belah ketupat:"<<bk.luas_belahketupat();cout<<"\n\n\n";
cout<<"luas belah ketupat\n";
cout<<"masukkan sisi 1 :";cin>>trrr.a;cout<<"\n";
cout<<"masukkan sisi 2 :";cin>>trrr.c;cout<<"\n";
cout<<"masukkan sisi 3 :";cin>>trrr.t;cout<<"\n";
cout<<"masukkan sisi 4 :";cin>>trrr.t2;cout<<"\n";
cout<<"keliling belah ketupat :"<<trrr.keliling_trapesium();cout<<"\n";
}
case 4:
		{
jajargenjang jg;
cout<<"luas jajar genjang\n";
cout<<"masukkan alas :";cin>>jg.d1;cout<<"\n";
cout<<"masukkan tinggi :";cin>>jg.d2;cout<<"\n";
cout<<"luas trapesium :"<<jg.luas_jajargenjang();cout<<"\n\n\n";
cout<<"keliling jajar genjang\n";
cout<<"masukkan sisi 1 :";cin>>jg.d1;cout<<"\n";
cout<<"masukkan sisi 2 :";cin>>jg.d2;cout<<"\n";
cout<<"keliling jajar genjang  :"<<jg.keliling_jajargenjang();cout<<"\n";
}
}
}

