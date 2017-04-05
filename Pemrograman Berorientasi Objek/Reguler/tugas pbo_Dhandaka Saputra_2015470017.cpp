#include <iostream>
using namespace std;

class layang2{
	public:
		layang2(int a,int b, int x, int y);
		~layang2();
		int luasL(void){
			return(0.5**d1**d2);
			}
		int KelL(void){
			return(2*(*s1+*s2));	
		}
	private:
			int *d1,*d2,*s1,*s2;
};
layang2::layang2(int a,int b,int x,int y){
	d1 = new int;
	d2 = new int;
	s1 = new int;
	s2 = new int;
	
	*d1 = a;
	*d2 = b;
	*s1=x;
	*s2=y;
}

layang2::~layang2(){
	cout<<"\n Destructor Dijalankan....\n"<<endl;
	delete d1;
	delete d2;
	delete s1;
	delete s2;
}

class belahketupat
{
public:
		int a,b,x;
		belahketupat(int a,int b,int x);
		~belahketupat();
		int luasB(void){
			return(0.5**d1**d2);
		}
		int KelB(void){
			return(4**sisi);
		}
		private:
			int *d1,*d2,*sisi;
};

belahketupat::belahketupat(int a ,int b,int x){
	d1 = new int;
	d2 = new int;
	sisi = new int;
	
	*d1 = a;
	*d2 = b;
	*sisi = x;
}
belahketupat::~belahketupat()
{
	cout<<"\n Destructor Dijalankan....\n"<<endl;
	delete d1;
	delete d2;
	delete sisi;
}

class jajargenjang
{
	public:
		int a,b,x,y;
		jajargenjang(int a,int b,int x,int y);
		~jajargenjang();
		int luasJ(void){
			return(*alas**tinggi);
		}
		int KelJ(void){
			return((*sisi1+*sisi2)*2);
		}
	private:
			int *alas,*tinggi,*sisi1,*sisi2;
};
jajargenjang::jajargenjang(int a ,int b,int x, int y){
	alas = new int;
	tinggi = new int;
	sisi1 = new int;
	sisi2 = new int;
	
	*alas = a;
	*tinggi = b;
	*sisi1 = x;
	*sisi2 = y;
}
jajargenjang::~jajargenjang()
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
    cout << "=== Program Menghitung Luas dan Keliling ==="<< endl;
	cout << "========== Bangun Ruang 2 Dimensi =========="<< endl;
    cout << "1. Layang-Layang\n";
    cout << "2. Belah Ketupat\n";
    cout << "3. Jajargenjang\n" ; 
    cout << "4. Trapesium\n";
    cout << "Masukkan Pilihan : "; cin >> pilih;
    cout<<endl;
    	
    switch (pilih)
    {
 		case 1: {
				cout<<"Data untuk menghitung Luas Layang Layang\n";
				cout<<"Nilai Diagonal 1 : ";cin>>a;
				cout<<"Nilai Diagonal 2 : ";cin>>b;
				cout<<endl;
				cout<<"Data untuk Menghitung Keliling Layang Layang\n";
				cout<<"Nilai Sisi 1 : ";cin>>x;
				cout<<"Nilai Sisi 2 : ";cin>>y;
				cout<<endl;
				layang2 ll(a, b, x, y);
				cout<<"Luas Layang Layang adalah : "<<ll.luasL()<<endl;
				cout<<"Keliling Layang Layang adalah : "<<ll.KelL()<<endl;
       			}break;
       			
       	case 2: {
				cout<<"Data untuk menghitung Luas Belah Ketupat\n";
				cout<<"Nilai Diagonal 1 : ";cin>>a;
				cout<<"Nilai Diagonal 2 : ";cin>>b;
				cout<<endl;
				cout<<"Data untuk menghitung Keliling Belah Ketupat\n";
				cout<<"Nilai Sisi : ";cin>>x;
				cout<<endl;
				belahketupat blk(a, b, x);
				cout<<"Luas Belah Ketupat adalah : "<<blk.luasB()<<endl;
				cout<<"Keliling Belah Ketupat adalah : "<<blk.KelB()<<endl;
        		}break;
      
	    case 3: {
				cout<<"Data untuk menghitung Luas Jajargenjang\n";
				cout<<"Nilai Alas : ";cin>>a;
				cout<<"Nilai Tinggi : ";cin>>b;
				cout<<endl;
				cout<<"Data untuk menghitung Keliling Jajargenjang\n";
				cout<<"Nilai Sisi 1 : ";cin>>x;
				cout<<"Nilai Sisi 2 : ";cin>>y;
				cout<<endl;
				jajargenjang jg(a, b, x, y);
				cout<<"Luas Jajargenjang adalah : "<<jg.luasJ()<<endl;
				cout<<"Keliling Jajargenjang adalah : "<<jg.KelJ()<<endl;
        		}break;
        
        case 4: {
				cout<<"\n Thank You Nich....\n";
			}break; 
				
		default:
				cout << "Pilihan tidak ada..silahkan Coba lagi !!! \n"; 
				cout<<"Pilihan hanya 1-4 \n";
				cout<<endl;
}
}while (pilih!=4);
}
