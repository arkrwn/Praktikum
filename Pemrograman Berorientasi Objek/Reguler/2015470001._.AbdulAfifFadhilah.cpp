#include <iostream>
using namespace std;
class trapesium
{
public:
	int s1,s2,t,s3;
	trapesium();
	trapesium(int a,int b,int c,int d);
	int luas_trapesium()
	{
	return ((s1+s2)*t/2);
	}
		int kel_trapesium()
	{
	return(s1+t+s3+s2);
}
~trapesium(){
}	
};
trapesium::trapesium()
{
}
trapesium::trapesium(int e,int f,int g,int h)
{
t=e;
s1=f;
s2=g;
s3=h;
}

class layang
{
public:
	int d1,d2;
	layang();
	layang(int a,int b);
	int luas_layang()
	{
	return (0.5*d1*d2);
	}
		int luas_jajar()
	{
	return(d1*d2);
}
	int kel_jajar()
	{
	return(2 *(d1+d2));
}
~layang(){
}
};
layang::layang()
{
}
layang::layang(int x,int y)
{
d1=x;
d2=y;
}

int main()
{int pilih;
cout << "Program Menghitung Luas dan Keliling \n";
cout<<"luas dan keliling 2 dimensi\n";
cout<<"1.trapesium\n";
cout<<"2.layang-layang\n";
cout<<"3.belah ketupat\n";
cout<<"4.jajar genjang\n";
cout<<"Pilih nomer berapa ? \n";
cin>>pilih;
switch (pilih)
{
	case 1:
		{
trapesium trap;
cout<<"luas trapesium\n";
cout<<"masukkan sisi atas :";cin>>trap.s1;
cout<<"masukkan sisi bawah :";cin>>trap.s2;
cout<<"masukkan tinggi :";cin>>trap.t;
cout<<"luas trapesium :"<<trap.luas_trapesium();cout<<"\n";
cout<<"keliling trapesium\n";
cout<<"masukkan sisi 1 :";cin>>trap.s1;
cout<<"masukkan sisi 2 :";cin>>trap.s2;
cout<<"masukkan sisi 3 :";cin>>trap.t;
cout<<"masukkan sisi 4 :";cin>>trap.s3;
cout<<"keliling trapesium :"<<trap.kel_trapesium();cout<<"\n";
}break;
case 2:
		{
trapesium x1;
layang lyg;
cout<<"luas layang-layang\n";
cout<<"masukkan diagonal 1 :";cin>>lyg.d1;
cout<<"masukkan diagonal 2 :";cin>>lyg.d2;
cout<<"luas layang-layang:"<<lyg.luas_layang();cout<<"\n\n\n";
cout<<"keliling layang-layang \n";
cout<<"masukkan sisi 1 :";cin>>x1.s1;
cout<<"masukkan sisi 2 :";cin>>x1.s2;
cout<<"masukkan sisi 3 :";cin>>x1.t;
cout<<"masukkan sisi 4 :";cin>>x1.s3;
cout<<"keliling layang-layang:"<<x1.kel_trapesium();cout<<"\n";
}break;
case 3:
		{
trapesium x2;
layang lyng;

cout<<"luas belah ketupat\n";
cout<<"masukkan diagonal 1 :";cin>>lyng.d1;
cout<<"masukkan diagonal 2 :";cin>>lyng.d2;
cout<<"luas belah ketupat:"<<lyng.luas_layang();cout<<"\n\n\n";
cout<<"luas belah ketupat\n";
cout<<"masukkan sisi 1 :";cin>>x2.s1;
cout<<"masukkan sisi 2 :";cin>>x2.s2;
cout<<"masukkan sisi 3 :";cin>>x2.t;
cout<<"masukkan sisi 4 :";cin>>x2.s3;
cout<<"keliling belah ketupat :"<<x2.kel_trapesium();cout<<"\n";
}break;
case 4:
{
layang lyang;
cout<<"luas jajar genjang\n";
cout<<"masukkan alas :";cin>>lyang.d1;
cout<<"masukkan tinggi :";cin>>lyang.d2;
cout<<"luas trapesium :"<<lyang.luas_jajar();cout<<"\n\n\n";
cout<<"keliling jajar genjang\n";
cout<<"masukkan sisi 1 :";cin>>lyang.d1;
cout<<"masukkan sisi 2 :";cin>>lyang.d2;
cout<<"keliling jajar genjang  :"<<lyang.kel_jajar();cout<<"\n";
}
}
}
