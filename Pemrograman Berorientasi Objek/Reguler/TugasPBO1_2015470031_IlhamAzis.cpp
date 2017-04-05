#include<iostream>
#include<conio.h>

using namespace std;

class trapesium
{
	public:
	float alas,tinggi,sisi;
	float s1,s2,s3,s4;
	trapesium();
	~trapesium();
	trapesium(float x,float z,float y);
	float luasT(){
		return (0.5 * (alas+sisi)*tinggi);
}
	trapesium(float g,float w,float t,float i);
	float keliling(){
		return(s1+s2+s3+s4);
	}

};
trapesium::trapesium(){
}
trapesium::trapesium(float a,float t,float c){
	alas=a;
	tinggi=t;
	sisi=c;
}
trapesium::trapesium(float g,float w,float t,float i){
	s1=g;
	s2=w;
	s3=t;
	s4=i;
}
trapesium::~trapesium()
{
cout<<"\n desctructor dijalankan..\n";
}
class layanglayang
{
	public:
		float d1,d2;
		float ab,bc,cd,da;
		layanglayang();
		layanglayang(float s,float b);
		float luasC(){
			return(0.5*d1*d2);
			}	
		layanglayang(float a,float b,float c,float d);
		float kelilingo(){
			return(ab+bc+cd+da);
		}
~layanglayang()
{
cout<<"\n desctructor dijalankan..\n";
}
};
layanglayang::layanglayang(){
}
layanglayang::layanglayang(float s,float z){
	d1=s;
	d2=z;
}
layanglayang::layanglayang(float a,float b,float c,float d){
	ab=a;
	bc=b;
	cd=c;
	da=d;
}
class belahketupat
{
	public:
		float d1,d2;
		float sisi;
		belahketupat();
		belahketupat(float a,float b );
		float luasz(){
			return(0.5*d1*d2);
		}
		belahketupat(float z);
		float Kelb(){
			return(4*sisi);
		}
~belahketupat()
{
	cout<<"\nDesctructor Dijalankan..\n";
}
};
belahketupat::belahketupat(){
}
belahketupat::belahketupat(float a ,float b){
	d1=a;
	d2=b;
}
belahketupat::belahketupat(float z){
	sisi=z;
}
class jajargenjang
{
	public:
	float alas,tinggi;
	float ab,bc,cd,ad;
	jajargenjang();
		jajargenjang(float a,float t );
		float luasj(){
			return(alas*tinggi);
		}
		jajargenjang(float q,float t,float g,float k);
		float Kelj(){
			return(ab+bc+cd+ad);
		}
~jajargenjang()
{
	cout<<"\nDesctructor Dijalankan..\n";
}
};
jajargenjang::jajargenjang(){
}
jajargenjang::jajargenjang(float a ,float t){
	alas=a;
	tinggi=t;
}
jajargenjang::jajargenjang(float q,float t,float g,float k){
	ab=q;
	bc=t;
	cd=g;
	ad=k;
}		

int main()
{
int pilih;
char lagi;
menu:
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
	cout<<"======================\n";
	cout<<"====LUAS TRAPESIUM====\n";
	cout<<"======================\n";
	cout<<"Alas Trapesium=";cin>>kotak.alas;
	cout<<"Tinggi Trapesium=";cin>>kotak.tinggi;
	cout<<"Sisi Yang sejajar Dengan Alas=";cin>>kotak.sisi;
	cout<<"luas Trapesium adalah="<<kotak.luasT();cout<<"\n";
	cout<<"======================\n";
	cout<<"==Keliling TRAPESIUM==\n";
	cout<<"======================\n";
	cout<<"s1=";cin>>kotak.s1;
	cout<<"s2=";cin>>kotak.s2;
	cout<<"s3=";cin>>kotak.s3;
	cout<<"s4=";cin>>kotak.s4;
	cout<<"keliling Trapesium adalah="<<kotak.keliling();
	cout<<"\nIngin Coba Lagi ?[Y/T}:";cin>>lagi;
	if(lagi=='Y' || lagi=='y'){
	goto menu;
	getch();
}
	else{
	if(lagi=='T'|| lagi=='t')
	break;
}
}
	case 2:
	{
	layanglayang aw;
	cout<<"=========================\n";
	cout<<"===LUAS LAYANG-LAYANG====\n";
	cout<<"=========================\n";
	cout<<"Diagonal 1=";cin>>aw.d1;
	cout<<"Diagonal 2=";cin>>aw.d2;
	cout<<"Luas Layang-Layang="<<aw.luasC();cout<<"\n";
	cout<<"==========================\n";
	cout<<"==KELILING Layang-Layang==\n";
	cout<<"==========================\n";
	cout<<"AB=";cin>>aw.ab;
	cout<<"BC=";cin>>aw.bc;
	cout<<"CD=";cin>>aw.cd;
	cout<<"DA=";cin>>aw.da;
	cout<<"Keliling Layang-layang adalah "<<aw.kelilingo();
	cout<<"\nIngin Coba Lagi ?[Y/T}:";cin>>lagi;
	if(lagi=='Y' || lagi=='y'){
	goto menu;
	getch();
}
	else{
	if(lagi=='T'|| lagi=='t')
	break;
}
}
	case 3:
	{
	belahketupat az;
	cout<<"==========================\n";
	cout<<"=====Luas BelahKetupat====\n";
	cout<<"==========================\n";
	cout<<"Diagonal 1=";cin>>az.d1;
	cout<<"Diagonal 2=";cin>>az.d2;
	cout<<"Luas BelahKetupat="<<az.luasz();cout<<"\n";
	cout<<"===========================\n";
	cout<<"===Keliling BelahKetupat===\n";
	cout<<"===========================\n";
	cout<<"Sisi BelahKetupat=";cin>>az.sisi;
	cout<<"Keliling BelahKetupat Adalah="<<az.Kelb();
	cout<<"\nIngin Coba Lagi ?[Y/T}:";cin>>lagi;
	if(lagi=='Y' || lagi=='y'){
	goto menu;
	getch();
}
	else{
	if(lagi=='T'|| lagi=='t')
	break;
}
}
	case 4:
	{
	jajargenjang ap;
	cout<<"=======================\n";
	cout<<"===Luas JajarGenjang===\n";
	cout<<"=======================\n";
	cout<<"Alas Jajargenjang=";cin>>ap.alas;
	cout<<"Tinggi Jajargenjang=";cin>>ap.tinggi;
	cout<<"Luas Jajargenjang="<<ap.luasj();cout<<"\n";
	cout<<"=======================\n";
	cout<<"=keliling JajarGenjang=\n";
	cout<<"=======================\n";
	cout<<"NIlai AB=";cin>>ap.ab;
	cout<<"NIlai BC=";cin>>ap.bc;
	cout<<"NIlai CD=";cin>>ap.cd;
	cout<<"Nilai AD=";cin>>ap.ad;
	cout<<"Keliling JajarGenjang Adalah="<<ap.Kelj();
	cout<<"\nIngin Coba Lagi ?[Y/T}:";cin>>lagi;
	if(lagi=='Y' || lagi=='y'){
	goto menu;
	getch();
}
	else{
	if(lagi=='T'|| lagi=='t')
	break;
}
}
	default:
	cout<<"Pilihan anda Salah!!!\n";
	goto menu;
			
} 
}

