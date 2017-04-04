#include <iostream>

using namespace std;
	
class trapesium
{
public:
	float t,t1,t2,t3;
	trapesium();
	trapesium(float k,float l,float m,float n);
	float luas_trapesium()
	{
	return (0.5*(t1+t2)*t);
	}
		float kel_trapesium()
	{
	return(t1+t+t3+t2);
}           
~trapesium()
{ 
}	
};                     
	trapesium::trapesium()
{
}
		trapesium::trapesium(float a,float b,float c,float d)
	{
		 t = a;
		t1 = b;
		t2 = c;
		t3 = d;
	}
	
	// batas class trapesium
	
	class layang
{
public:
	float d1,d2;
	layang();
	layang(float a,float b);
	float luas_layang()
	{
	return (0.5*d1*d2);
	}
		float luas_jajar()
	{
	return(d1*d2);
	}
		float kel_jajar()
	{
	return(2 *(d1+d2));
}
~layang()
{
}
};
	layang::layang()
{
}
		layang::layang(float i,float j)
	{
		d1 = i;
		d2 = j;
	}
	
	// batas class layang

int main()
{
int pilih;
cout<<" _ _Rumus Menghitung Luas dan Keliling Bangunan_ _ \n\n";
cout<<" 1. Trapesium \n";
cout<<" 2. Layang - Layang \n";
cout<<" 3. Belah Ketupat \n";
cout<<" 4. Jajar Genjang \n\n";
cout<<" Pilih Bangunan : ";
cin>>pilih;
switch (pilih)
{
	case 1:
	{
	trapesium lkt;
		cout<<"\n-- Luas Trapesium --\n ";
		cout<<"Input sisi atas    : ";cin>>lkt.t1;cout<<" ";
		cout<<"Input nilai tinggi : ";cin>>lkt.t;cout<<" ";
		cout<<"Input sisi bawah   : ";cin>>lkt.t2;cout<<" ";
		cout<<" LUAS TRAPESIUM = "<<lkt.luas_trapesium();
		cout<<"\n\n\n";
		cout<<"-- Keliling Trapesium --\n ";
		cout<<"Input sisi A : ";cin>>lkt.t1;cout<<" ";
		cout<<"Input sisi B : ";cin>>lkt.t2;cout<<" ";
		cout<<"Input sisi C : ";cin>>lkt.t3;cout<<" ";
		cout<<"Input sisi D : ";cin>>lkt.t;cout<<" ";
		cout<<" KELILING TRAPESIUM = "<<lkt.kel_trapesium();
		cout<<"\n";
	break;
	}
	
	case 2:
	{
	trapesium kly;
	layang ly;
		cout<<"\n-- Luas Layang-Layang --\n ";
		cout<<"Input diagonal 1 : ";cin>>ly.d1;cout<<" ";
		cout<<"Input diagonal 2 : ";cin>>ly.d2;cout<<" ";
		cout<<" LUAS LAYANG-LAYANG = "<<ly.luas_layang();
		cout<<"\n\n\n";
		cout<<"-- Keliling Layang-Layang --\n ";
		cout<<"Input sisi A : ";cin>>kly.t1;cout<<" ";
		cout<<"Input sisi B : ";cin>>kly.t2;cout<<" ";
		cout<<"Input sisi C : ";cin>>kly.t3;cout<<" ";
		cout<<"Input sisi D : ";cin>>kly.t;cout<<" ";
		cout<<" KELILING LAYANG-LAYANG = "<<kly.kel_trapesium();
		cout<<"\n";
	break;
	}
	
	case 3:
	{
	trapesium kbk;
	layang lbk;
		cout<<"\n-- Luas Belah Ketupat --\n ";
		cout<<"Input diagonal 1 : ";cin>>lbk.d1;cout<<" ";
		cout<<"Input diagonal 2 : ";cin>>lbk.d2;cout<<" ";
		cout<<" LUAS BELAH KETUPAT = "<<lbk.luas_layang();
		cout<<"\n\n\n";
		cout<<"-- Keliling Belah Ketupat --\n ";
		cout<<"Input sisi A : ";cin>>kbk.t1;cout<<" ";
		cout<<"Input sisi B : ";cin>>kbk.t2;cout<<" ";
		cout<<"Input sisi C : ";cin>>kbk.t3;cout<<" ";
		cout<<"Input sisi D : ";cin>>kbk.t;cout<<" ";
		cout<<" KELILING BELAH KETUPAT = "<<kbk.kel_trapesium();
		cout<<"\n";
	break;
	}
	
	case 4:
	{
	layang lkjg;
		cout<<"\n-- Luas Jajar Genjang --\n ";
		cout<<"Input alas   : ";cin>>lkjg.d1;cout<<" ";
		cout<<"Input tinggi : ";cin>>lkjg.d2;cout<<" ";
		cout<<" LUAS JAJAR GENJANG = : "<<lkjg.luas_jajar();
		cout<<"\n\n\n";
		cout<<"-- Keliling Jajar Genjang --\n ";
		cout<<"Input sisi A :";cin>>lkjg.d1;cout<<" ";
		cout<<"Input sisi B :";cin>>lkjg.d2;cout<<" ";
		cout<<" KELILING JAJAR GENJANG = "<<lkjg.kel_jajar();
		cout<<"\n";
	break;
	}
	
	default:
		cout<< " \n !!! SAMPAI 4 DOANK BLAO PILIHAN NYA !!! ";
}
}

