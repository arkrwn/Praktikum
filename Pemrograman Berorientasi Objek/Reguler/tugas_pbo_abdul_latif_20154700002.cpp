#include <iostream>
using namespace std;
class luas1
{public:
	float d1,d2;
	luas1();
	luas1(float a,float b);
	float luas_1()
	{return (0.5*d1*d2);
	}
		float luas_1a()
	{
	return(d1*d2);
}
	float kel_1a()
	{
	return(2 *(d1+d2));
}
~luas1(){
}
};
luas1::luas1()
{
}
luas1::luas1(float x,float y)
{d1=x;
d2=y;

}
class luas2
{public:
	float s1,s2,s3,s4;
	luas2();
	luas2(float a,float b,float c,float d);
	float luas_2()
	{return (0.5*(s1+s2)*s3);
	}
		float kel_2()
	{
	return(s1+s2+s3+s4);
}
~luas2(){
}	
};
luas2::luas2()
{
}
luas2::luas2(float e,float f,float g,float h)
{s1=e;
s2=f;
s3=g;
s4=h;
}

int main()
{int pilih;
cout<<"---------------------------\n";
cout<<"Luas dan keliling 2 dimensi\n";
cout<<"---------------------------\n\n";
cout<<"1.Trapesium\n";
cout<<"2.Layang-layang\n";
cout<<"3.Belah ketupat\n";
cout<<"4.Jajar genjang\n";
cout<<"Mana yang ingin anda hitung?\n";
cin>>pilih;
switch (pilih)
{
	case 1:
		{
luas2 trp;
cout<<"luas trapesium\n";
cout<<"masukkan sisi atas :";cin>>trp.s1;cout<<"\n";
cout<<"masukkan sisi bawah :";cin>>trp.s2;cout<<"\n";
cout<<"masukkan tinggi :";cin>>trp.s3;cout<<"\n";
cout<<"luas trapesium :"<<trp.luas_2();cout<<"\n\n\n";
cout<<"keliling trapesium\n";
cout<<"masukkan sisi 1 :";cin>>trp.s1;cout<<"\n";
cout<<"masukkan sisi 2 :";cin>>trp.s2;cout<<"\n";
cout<<"masukkan sisi 3 :";cin>>trp.s3;cout<<"\n";
cout<<"masukkan sisi 4 :";cin>>trp.s4;cout<<"\n";
cout<<"keliling trapesium :"<<trp.kel_2();cout<<"\n";
}
break;
case 2:
		{
luas1 yl;
luas2 ly1;
cout<<"luas layang-layang\n";
cout<<"masukkan diagonal 1 :";cin>>yl.d1;cout<<"\n";
cout<<"masukkan diagonal 2 :";cin>>yl.d2;cout<<"\n";
cout<<"luas layang-layang:"<<yl.luas_1();cout<<"\n\n\n";
cout<<"keliling layang-layang \n";
cout<<"masukkan sisi 1 :";cin>>ly1.s1;cout<<"\n";
cout<<"masukkan sisi 2 :";cin>>ly1.s2;cout<<"\n";
cout<<"masukkan sisi 3 :";cin>>ly1.s3;cout<<"\n";
cout<<"masukkan sisi 4 :";cin>>ly1.s4;cout<<"\n";
cout<<"keliling layang-layang:"<<ly1.kel_2();cout<<"\n";
}
break;
case 3:
		{
luas1 bl1;
luas2 bl;
cout<<"luas belah ketupat\n";
cout<<"masukkan diagonal 1 :";cin>>bl1.d1;cout<<"\n";
cout<<"masukkan diagonal 2 :";cin>>bl1.d2;cout<<"\n";
cout<<"luas belah ketupat:"<<bl1.luas_1();cout<<"\n\n\n";
cout<<"luas belah ketupat\n";
cout<<"masukkan sisi 1 :";cin>>bl.s1;cout<<"\n";
cout<<"masukkan sisi 2 :";cin>>bl.s2;cout<<"\n";
cout<<"masukkan sisi 3 :";cin>>bl.s3;cout<<"\n";
cout<<"masukkan sisi 4 :";cin>>bl.s4;cout<<"\n";
cout<<"keliling belah ketupat :"<<bl.kel_2();cout<<"\n";
}
break;
case 4:
		{
luas1 jr;
cout<<"luas jajar genjang\n";
cout<<"masukkan alas :";cin>>jr.d1;cout<<"\n";
cout<<"masukkan tinggi :";cin>>jr.d2;cout<<"\n";
cout<<"luas jajar genjang :"<<jr.luas_1a();cout<<"\n\n\n";
cout<<"keliling jajar genjang\n";
cout<<"masukkan sisi 1 :";cin>>jr.d1;cout<<"\n";
cout<<"masukkan sisi 2 :";cin>>jr.d2;cout<<"\n";
cout<<"keliling jajar genjang  :"<<jr.kel_1a();cout<<"\n";
}
break;
default:cout<<"anda salah input";
}
}

