#include<iostream>
using namespace std;

class trapesium
{
	public:
	int alas,tinggi,sisi;
	int s1,s2,s3,s4;
	trapesium();
	trapesium(int x,int z,int y);
	int luasT(){
		return (0.5 * (alas+sisi)*tinggi);
}
	trapesium(int g,int w,int t,int i);
	int keliling(){
		return(s1+s2+s3+s4);
	}
~trapesium()
{
cout<<"\n desctructor dijalankan..\n";
}
};
trapesium::trapesium(){
}
trapesium::trapesium(int a,int t,int c){
	alas=a;
	tinggi=t;
	sisi=c;
}
trapesium::trapesium(int g,int w,int t,int i){
	s1=g;
	s2=w;
	s3=t;
	s4=i;
}
class layanglayang
{
	public:
		int d1,d2;
		layanglayang();
		layanglayang(int s,int b);
		int luasC(){
			return(0.5*d1*d2);
			}	
~layanglayang()
{
cout<<"\n desctructor dijalankan..\n";
}
};
layanglayang::layanglayang(){
}
layanglayang::layanglayang(int s,int b){
	d1=s;
	d2=b;
}
class belahketupat
{
	public:
		int d1,d2;
		int sisi;
		belahketupat();
		belahketupat(int a,int b );
		int luasz(){
			return(0.5*d1*d2);
		}
		belahketupat(int z);
		int Kelb(){
			return(4*sisi);
		}
~belahketupat()
{
	cout<<"\nDesctructor Dijalankan..\n";
}
};
belahketupat::belahketupat(){
}
belahketupat::belahketupat(int a ,int b){
	d1=a;
	d2=b;
}
belahketupat::belahketupat(int z){
	sisi=z;
}
class jajargenjang
{
	public:
	int alas,tinggi;
	int ab,bc,cd,ad;
	jajargenjang();
		jajargenjang(int a,int t );
		int luasj(){
			return(alas*tinggi);
		}
		jajargenjang(int q,int t,int g,int k);
		int Kelj(){
			return(ab+bc+cd+ad);
		}
~jajargenjang()
{
	cout<<"\nDesctructor Dijalankan..\n";
}
};
jajargenjang::jajargenjang(){
}
jajargenjang::jajargenjang(int a ,int t){
	alas=a;
	tinggi=t;
}
jajargenjang::jajargenjang(int q,int t,int g,int k){
	ab=q;
	bc=t;
	cd=g;
	ad=k;
}		

int main()
{
int pilih;
do{
	cout<<"==============Ayok DiPilih==============\n";
	cout<<"1.Mencari luas Dan Keliling Trapesium \n";
		cout<<"2.Mencari Luas Dan Keliling Layang-Layang\n";
	cout<<"3.Mencari Luas Dan Keliling Belah Ketupat\n";
	cout<<"4.Mencari Luas Dan Keliling JajarGenjang\n";
	cout<<"Pilih (1-4)=";
	cin>>pilih;
	switch(pilih) {
	case 1:
{
	trapesium kotak;
	cout<<"Alas Trapesium=";cin>>kotak.alas;
	cout<<"Tinggi Trapesium=";cin>>kotak.tinggi;
	cout<<"Sisi Yang sejajar Dengan Alas=";cin>>kotak.sisi;cout<<"\n";
	cout<<"luas Trapesium adalah="<<kotak.luasT();
	cout<<"\n Keliling ..\n";
	cout<<"s1=";cin>>kotak.s1;
	cout<<"s2=";cin>>kotak.s2;
	cout<<"s3=";cin>>kotak.s3;
	cout<<"s4=";cin>>kotak.s4;
	cout<<"keliling Trapesium adalah="<<kotak.keliling();
	break;
}
	case 2:
	{
	layanglayang aw;
	cout<<"LUAS LAYANG-LAYANG\n";
	cout<<"Diagonal 1=";cin>>aw.d1;
	cout<<"Diagonal 2=";cin>>aw.d2;
	cout<<"Luas Layang-Layang="<<aw.luasC();
	break;
}
	case 3:
	{
	belahketupat az;
	cout<<"Luas BelahKetupat\n";
	cout<<"Diagonal 1=";cin>>az.d1;
	cout<<"Diagonal 2=";cin>>az.d2;
	cout<<"Luas BelahKetupat="<<az.luasz();
	cout<<"\nKeliling BelahKetupat\n";
	cout<<"Sisi BelahKetupat=";cin>>az.sisi;
	cout<<"Keliling BelahKetupat Adalah="<<az.Kelb();
	break;
	}
	case 4:
	{
	jajargenjang ap;
	cout<<"Luas JajarGenjang\n";
	cout<<"Alas Jajargenjang=";cin>>ap.alas;
	cout<<"Tinggi Jajargenjang=";cin>>ap.tinggi;
	cout<<"Luas Jajargenjang="<<ap.luasj();
	cout<<"\nKeliling JajarGenjang\n";
	cout<<"NIlai AB=";cin>>ap.ab;
	cout<<"NIlai BC=";cin>>ap.bc;
	cout<<"NIlai CD=";cin>>ap.cd;
	cout<<"Nilai AD=";cin>>ap.ad;
	cout<<"Keliling JajarGenjang Adalah="<<ap.Kelj();
	break;
}
} 
}while (pilih!=5);
	printf("\n THANK YOU NIH....\n");
}

