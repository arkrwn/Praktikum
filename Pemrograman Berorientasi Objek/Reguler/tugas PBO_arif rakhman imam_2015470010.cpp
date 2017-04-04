#include <iostream>
using namespace std;
class layang
{public:
	float f1,f2;
	layang();
	layang(float a,float b);
	float luas_layang()
	{return (0.5*f1*f2);
	}
		float luas_jajar()
	{
	return(f1*f2);
}
	float kel_jajar()
	{
	return(2 *(f1+f2));
}
~layang(){
}
};
layang::layang()
{
}
layang::layang(float x,float y)
{f1=x;
f2=y;

}
class trapesium
{public:
	float t1,t2,t,t3;
	trapesium();
	trapesium(float a,float b,float c,float d);
	float luas_trapesium()
	{return (0.5*(t1+t2)*t);
	}
		float kel_trapesium()
	{
	return(t1+t+t3+t2);
}
~trapesium(){
}	
};
trapesium::trapesium()
{
}
trapesium::trapesium(float e,float f,float g,float h)
{t=e;
t1=f;
t2=g;
t3=h;
}

int main()
{int pilih;
cout<<"===============================================\n";
cout<<"luas dan keliling 2 dimensi\n";
cout<<"===============================================\n";
cout<<"=menu pilihan=\n";
cout<<"1.Trapesium\n";
cout<<"2.Layang-layang\n";
cout<<"3.Belah ketupat\n";
cout<<"4.Jajar genjang\n";
cout<<"===============================================\n";
cout<<"pilih jenisnya?\n";
cout<<"===============================================\n";
cin>>pilih;
switch (pilih)
{
	case 1:
		{
trapesium trp;
cout<<"luas trapesium\n";
cout<<"masukkan sisi atas :";cin>>trp.t1;cout<<"\n";
cout<<"masukkan sisi bawah :";cin>>trp.t2;cout<<"\n";
cout<<"masukkan tinggi :";cin>>trp.t;cout<<"\n";
cout<<"luas trapesium :"<<trp.luas_trapesium();cout<<"\n\n\n";
cout<<"keliling trapesium\n";
cout<<"masukkan sisi 1 :";cin>>trp.t1;cout<<"\n";
cout<<"masukkan sisi 2 :";cin>>trp.t2;cout<<"\n";
cout<<"masukkan sisi 3 :";cin>>trp.t;cout<<"\n";
cout<<"masukkan sisi 4 :";cin>>trp.t3;cout<<"\n";
cout<<"keliling trapesium :"<<trp.kel_trapesium();cout<<"\n";
}
	case 2:
		{
trapesium ly1;
layang yl;
cout<<"luas layang-layang\n";
cout<<"masukkan diagonal 1 :";cin>>yl.f1;cout<<"\n";
cout<<"masukkan diagonal 2 :";cin>>yl.f2;cout<<"\n";
cout<<"luas layang-layang:"<<yl.luas_layang();cout<<"\n\n\n";
cout<<"keliling layang-layang \n";
cout<<"masukkan sisi 1 :";cin>>ly1.t1;cout<<"\n";
cout<<"masukkan sisi 2 :";cin>>ly1.t2;cout<<"\n";
cout<<"masukkan sisi 3 :";cin>>ly1.t;cout<<"\n";
cout<<"masukkan sisi 4 :";cin>>ly1.t3;cout<<"\n";
cout<<"keliling layang-layang:"<<ly1.kel_trapesium();cout<<"\n";
}
	case 3:
		{
trapesium ll;
layang yr;

cout<<"luas belah ketupat\n";
cout<<"masukkan diagonal 1 :";cin>>yr.f1;cout<<"\n";
cout<<"masukkan diagonal 2 :";cin>>yr.f2;cout<<"\n";
cout<<"luas belah ketupat:"<<yr.luas_layang();cout<<"\n\n\n";
cout<<"luas belah ketupat\n";
cout<<"masukkan sisi 1 :";cin>>ll.t1;cout<<"\n";
cout<<"masukkan sisi 2 :";cin>>ll.t2;cout<<"\n";
cout<<"masukkan sisi 3 :";cin>>ll.t;cout<<"\n";
cout<<"masukkan sisi 4 :";cin>>ll.t3;cout<<"\n";
cout<<"keliling belah ketupat :"<<ll.kel_trapesium();cout<<"\n";
}
	case 4:
		{
layang lhg;
cout<<"luas jajar genjang\n";
cout<<"masukkan alas :";cin>>lhg.f1;cout<<"\n";
cout<<"masukkan tinggi :";cin>>lhg.f2;cout<<"\n";
cout<<"luas trapesium :"<<lhg.luas_jajar();cout<<"\n\n\n";
cout<<"keliling jajar genjang\n";
cout<<"masukkan sisi 1 :";cin>>lhg.f1;cout<<"\n";
cout<<"masukkan sisi 2 :";cin>>lhg.f2;cout<<"\n";
cout<<"keliling jajar genjang  :"<<lhg.kel_jajar();cout<<"\n";
}
}
}

