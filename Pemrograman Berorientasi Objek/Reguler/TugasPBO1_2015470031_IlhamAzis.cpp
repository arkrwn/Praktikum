#include<iostream>
#include<conio.h>

using namespace std;

class trapesium
{
	public:
	int alas,tinggi,sisi;
	int s1,s2,s3,s4;
	trapesium();
	~trapesium();
	trapesium(int x,int z,int y);
	int luasT(){
		return (0.5 * (alas+sisi)*tinggi);
}
	trapesium(int g,int w,int t,int i);
	int keliling(){
		return(s1+s2+s3+s4);
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
trapesium::~trapesium()
{
cout<<"\n desctructor dijalankan..\n";
}
class layanglayang
{
	public:
		int d1,d2;
		int ab,bc,cd,da;
		layanglayang();
		layanglayang(int s,int b);
		int luasC(){
			return(0.5*d1*d2);
			}	
		layanglayang(int a,int b,int c,int d);
		int kelilingo(){
			return(ab+bc+cd+da);
		}
~layanglayang()
{
cout<<"\n desctructor dijalankan..\n";
}
};
layanglayang::layanglayang(){
}
layanglayang::layanglayang(int s,int z){
	d1=s;
	d2=z;
}
layanglayang::layanglayang(int a,int b,int c,int d){
	ab=a;
	bc=b;
	cd=c;
	da=d;
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

