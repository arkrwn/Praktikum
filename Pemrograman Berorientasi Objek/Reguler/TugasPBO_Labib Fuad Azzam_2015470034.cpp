#include <iostream>
using namespace std;

class Layang{
	public:
		Layang(int a,int b, int x, int y);
		~Layang();
		int LuasL(void){
			return((*d1**d2)/2);
			}
		int KelL(void){
			return(2*(*s1+*s2));	
		}
	private:
			int *d1,*d2,*s1,*s2;
};
Layang::Layang(int a,int b,int x,int y){
	d1 = new int;
	d2 = new int;
	s1 = new int;
	s2 = new int;
	
	*d1 = a;
	*d2 = b;
	*s1=x;
	*s2=y;
}

Layang::~Layang(){
	cout<<"\n Destructor Dijalankan....\n"<<endl;
	delete d1;
	delete d2;
	delete s1;
	delete s2;
}

class BelahKetupat
{
public:
		BelahKetupat(int a,int b,int x);
		~BelahKetupat();
		int LuasB(void){
			return((*d1**d2)/2);
		}
		int KelB(void){
			return(4**sisi);
		}
		private:
			int *d1,*d2,*sisi;
};

BelahKetupat::BelahKetupat(int a ,int b,int x){
	d1 = new int;
	d2 = new int;
	sisi = new int;
	
	*d1 = a;
	*d2 = b;
	*sisi = x;
}
BelahKetupat::~BelahKetupat()
{
	cout<<"\n Destructor Dijalankan....\n"<<endl;
	delete d1;
	delete d2;
	delete sisi;
}

class Jajargenjang
{
	public:
		int a,b,x,y;
		Jajargenjang(int a,int b,int x,int y);
		~Jajargenjang();
		int LuasJ(void){
			return(*alas**tinggi);
		}
		int KelJ(void){
			return((*sisi1+*sisi2)*2);
		}
	private:
			int *alas,*tinggi,*sisi1,*sisi2;
};
Jajargenjang::Jajargenjang(int a ,int b,int x, int y){
	alas = new int;
	tinggi = new int;
	sisi1 = new int;
	sisi2 = new int;
	
	*alas = a;
	*tinggi = b;
	*sisi1 = x;
	*sisi2 = y;
}
Jajargenjang::~Jajargenjang()
{
	cout<<"\n Destructor Dijalankan....\n"<<endl;
	delete alas;
	delete tinggi;
	delete sisi1;
	delete sisi2;
}

int main()
{
int pilih, a, b, x, y;
do{
    cout << "=== Program Perhitungan Luas dan Keliling bangun ruang ==="<< endl;
    cout << "1. Layang-Layang\n";
    cout << "2. Belah Ketupat\n";
    cout << "3. Jajargenjang\n" ; 
    cout << "4. Keluar\n";
    cout << "Masukkan Pilihan : "; cin >> pilih;
    cout<<endl;
    	
    switch (pilih)
    {
 		case 1: {
				cout<<"Perhitungan Luas Layang Layang\n";
				cout<<"Nilai Diagonal 1 : ";cin>>a;
				cout<<"Nilai Diagonal 2 : ";cin>>b;
				cout<<endl;
				cout<<"Perhitungan Keliling Layang Layang\n";
				cout<<"Nilai Sisi 1 : ";cin>>x;
				cout<<"Nilai Sisi 2 : ";cin>>y;
				cout<<endl;
				Layang ll(a, b, x, y);
				cout<<"Luas Layang Layang adalah : "<<ll.LuasL()<<endl;
				cout<<"Keliling Layang Layang adalah : "<<ll.KelL()<<endl;
       			}break;
       			
       	case 2: {
				cout<<"Perhitungan Luas Belah Ketupat\n";
				cout<<"Nilai Diagonal 1 : ";cin>>a;
				cout<<"Nilai Diagonal 2 : ";cin>>b;
				cout<<endl;
				cout<<"Perhitungan Keliling Belah Ketupat\n";
				cout<<"Nilai Sisi : ";cin>>x;
				cout<<endl;
				BelahKetupat blk(a, b, x);
				cout<<"Luas Belah Ketupat adalah  : "<<blk.LuasB()<<endl;
				cout<<"Keliling Belah Ketupat adalah : "<<blk.KelB()<<endl;
        		}break;
      
	    case 3: {
				cout<<"Perhitungan Luas Jajargenjang\n";
				cout<<"Nilai Alas : ";cin>>a;
				cout<<"Nilai Tinggi : ";cin>>b;
				cout<<endl;
				cout<<"Perhitungan Keliling Jajargenjang\n";
				cout<<"Nilai Sisi 1 : ";cin>>x;
				cout<<"Nilai Sisi 2 : ";cin>>y;
				cout<<endl;
				Jajargenjang jg(a, b, x, y);
				cout<<"Luas Jajargenjang adalah  : "<<jg.LuasJ()<<endl;
				cout<<"Keliling Jajargenjang adalah : "<<jg.KelJ()<<endl;
        		}break;
        
        case 4: {
				cout<<"===Terima Kasih Telah Mencoba Pemrograman ini===";
		}break; 
        					
		default:
				cout << "Maaf, Pilihan anda tidak ada \n"; 
				cout<<"Silahkan dicoba kembali ...\n";
				cout<<endl;
}
}while (pilih!=4);
}
