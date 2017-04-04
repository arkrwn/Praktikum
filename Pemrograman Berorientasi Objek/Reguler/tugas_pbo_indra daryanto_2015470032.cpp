#include <iostream>
using namespace std;

class layangan{
	public:
		layangan(int b,int c, int d, int f);
	~layangan();
		int luaslayang(void){
			return(0.5**dd1**dd2);
			}
		int KelLayangan(void){
	return(2*(*f1+*f2));	
		}
	private:
			int *dd1,*dd2,*f1,*f2;
};
layangan::layangan(int b,int c,int d,int f){
dd1 = new int;
dd2 = new int;
	f1 = new int;
	f2 = new int;
	
*dd1 = b;
*dd2 = c;
	*f1=d;
	*f2=f;
}

layangan::~layangan()
{
delete dd1;
delete dd2;
delete f1;
delete f2;
}

class belah_ketupat
{
public:
		int y,w,x;
		belah_ketupat(int y,int w,int x);
		~belah_ketupat();
		int luas_ketupat(void){
			return(0.5**d1**d2);
		}
		int Kel_ketupat(void)
		{
			return(4**ss);
		}
		private:
			int *d1,*d2,*ss;
};

belah_ketupat::belah_ketupat(int y ,int w,int x){
	d1 = new int;
	d2 = new int;
	ss = new int;
	
	*d1 = y;
	*d2 = w;
	*ss = x;
}
belah_ketupat::~belah_ketupat()
{
	
	delete d1;
	delete d2;
	delete ss;
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
	
	delete alas;
	delete tinggi;
	delete sisi1;
	delete sisi2;
}

int main()
{
int pilih, a, b, x, y;
do{
    cout << "***** Program Menghitung Luas dan Keliling *****"<< endl;
	cout << "********** Bangun Ruang 2 Dimensi ***********"<< endl;
    cout << "1. Layang-Layang\n\n";
    cout << "2. Belah Ketupat\n\n";
    cout << "3. Jajargenjang\n\n" ; 
    cout << "4. Keluar\n";
    cout << "Masukkan Pilihan : "; cin >> pilih;
    cout<<endl;
    	
    switch (pilih)
    {
 		case 1: {
				cout<<"Luas Layang Layangan\n";
				cout<<"Nilai Diagonal 1 : ";cin>>a;
				cout<<"Nilai Diagonal 2 : ";cin>>b;
				cout<<endl;
				cout<<" Keliling Layangan\n";
				cout<<"Nilai Sisi 1 : ";cin>>x;
				cout<<"Nilai Sisi 2 : ";cin>>y;
				cout<<endl;
				layangan ll(a, b, x, y);
				cout<<"Luas  : "<<ll.luaslayang()<<endl;
				cout<<"Keliling Layang Layang adalah : "<<ll.KelLayangan()<<endl;
       			}break;
       			
       	case 2: {
				cout<<" Luas Belah Ketupat\n";
				cout<<"Nilai Diagonal 1 : ";cin>>a;
				cout<<"Nilai Diagonal 2 : ";cin>>b;
				cout<<endl;
				cout<<"Keliling Belah Ketupat\n";
				cout<<"Nilai Sisi : ";cin>>x;
				cout<<endl;
				belah_ketupat bk(a, b, x);
				cout<<"Luas Belah Ketupat adalah : "<<bk.luas_ketupat()<<endl;
				cout<<"Keliling Belah Ketupat adalah : "<<bk.Kel_ketupat()<<endl;
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
		
			}break; 
				
		;
}
}while (pilih!=4);
}
