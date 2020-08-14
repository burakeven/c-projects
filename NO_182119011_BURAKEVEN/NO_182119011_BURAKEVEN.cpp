#include <iostream>
using namespace std;

class OzelIslem{ //özel islem class'ýný tanýmladým
	private:		
		int xsayi1,ysayi2,zsayi3; //sadece bu sýnýfta kullanýlacak deðiþkenleri tanýmladým
	public: //iþlemler class'ýnda kullacaðým fonksiyonlarý burda tanýmladým
		
		friend class Islemler; //Islemler class'ýnda burda tanýmladýðým özel deðiþkenleri kullanmamý saðlayacak	

		void setxsayi1(int _xsayi1) { //dýþarýdan gelen deðeri özel deðiþkene aktarmak için set fonksiyon tanýmladým
			xsayi1 = _xsayi1; //dýþarýdan gelen deðeri özel deðiþkene aktardým
		}
		void setysayi2(int _ysayi2) { //dýþarýdan gelen deðeri özel deðiþkene aktarmak için set fonksiyon tanýmladým
			ysayi2 = _ysayi2; //dýþarýdan gelen deðeri özel deðiþkene aktardým
		}
		void setzsayi3(int _zsayi3) { //dýþarýdan gelen deðeri özel deðiþkene aktarmak için set fonksiyon tanýmladým
			zsayi3 = _zsayi3; //dýþarýdan gelen deðeri özel deðiþkene aktardým
		}	

		int getxsayi1() { //özel deðiþkeni dýþarýya aktarmak için get fonksiyonunu tanýmladým
			return xsayi1;  //özel deðiþkeni dýþarýya aktardým
		}
		int getysayi2() { //özel deðiþkeni dýþarýya aktarmak için get fonksiyonunu tanýmladým
			return ysayi2; //özel deðiþkeni dýþarýya aktardým
		}
		int getzsayi3() { //özel deðiþkeni dýþarýya aktarmak için get fonksiyonunu tanýmladým
			return zsayi3; //özel deðiþkeni dýþarýya aktardým
		}
		
		int Ekok(int sayi1, int sayi2) //iki parametreli ekok tanýmlamasýný gerçekleþtirdim
		{
			for(int i=1; i<=sayi1*sayi2; i++) //birden sayilarin çarpýmýna kadar döngüye aldým çünkü ekoklarý en fazla çarpýmlarýna eþit olabilir
			{
				if( (i%sayi1==0) && (i%sayi2==0) ) //i sayi1 ve sayi2'e tam bölündüðü zaman ---
				{
					return i; //-- i'i gönderdim
				}
			}
		}
		int Ekok(int sayi1, int sayi2, int sayi3) //üç parametreli ekok tanýmlamasýný yaptým
		{
			for(int i=1; i<=sayi1*sayi2*sayi3; i++) //birden sayilarin çarpýmýna kadar döngüye aldým çünkü ekoklarý en fazla çarpýmlarýna eþit olabilir
			{
				if( (i%sayi1==0) && (i%sayi2==0) && (i%sayi3==0) ) //i sayi1,sayi2 ve sayi3'e tam bölündüðü zaman ---
				{
					return i; //--- i'i gönderdim
				}
			}
		}
		int Ebob(int sayi1, int sayi2) //iki parametreli ebob tanýmlamasýný yaptým
		{
			int enbsayi; //for döngüsünde kullanýlacak maks deðer aralýðýný tanýmlamak için deðiþken oluþturdum
			if(sayi1>sayi2) //eðer sayi 1 sayi2'den büyük olursa 
			{
				enbsayi = sayi1; //en büyük sayi, sayi1 olacaktýr
			} 
			else //deðilse
			{
				enbsayi = sayi2; //en büyük sayi, sayi2'dir.
			}
			
			for(enbsayi; enbsayi>0; enbsayi--) //en büyük sayýdan sýfýra kadar döngü oluþturdum
			{
				if( (sayi1%enbsayi==0) && (sayi2%enbsayi==0) ) //iki sayýda þimdi ki sayýya tam bölünüyorsa --
				{
					return enbsayi; //--- þimdi ki sayýyý gönderdim
				}
			}			
		}
		int Ebob(int sayi1, int sayi2, int sayi3) //üç parametreli ebob tanýmlamasýný yaptým
		{
			int enbsayi; //for döngüsünde kullanýlacak maks deðer aralýðýný tanýmlamak için deðiþken oluþturdum
			if( (sayi1>sayi2) && (sayi1>sayi3) ) //eðer sayi 1 sayi2'den büyük olursa ve sayi1 sayi3'den büyük olursa
			{
				enbsayi=sayi1; //en büyük sayi, sayi1 olacaktýr
			}
			else if( (sayi2>sayi1) && (sayi2>sayi3) ) //eðer sayi2 sayi1'den büyük ve sayi2, sayi3'den büyükse
			{
				enbsayi=sayi2; //o halde en büyük sayý sayi2 olacaktýr
			}
			else //hiçbiri deðilse
			{
				enbsayi=sayi3; //en büyük sayý sayi3 olacak
			}
			for(enbsayi; enbsayi>0; enbsayi--) //en büyük sayýdan sýfýra kadar döngü oluþturdum
			{
				if( (sayi1%enbsayi==0) && (sayi2%enbsayi==0) && (sayi3%enbsayi==0) ) //üç sayýda þimdi ki sayýya tam bölünüyorsa --
				{
					return enbsayi; //þimdi ki sayýyý gönderdim
				}
			}
		}
		int Faktoriyel(int sayi1) //faktoriyel fonksiyon tanýmlamasý
		{			
			if(sayi1 == 1 || sayi1 == 0) //girilen sayi 1 veya 0'sa faktoriyeli 1 olduðu için 1'i direkt olarak yolladým
			{
				return 1;
			}
			else //deðilse ...
			{
				return sayi1 * Faktoriyel(sayi1 - 1); //sayýnýn bir azaltýlmýþ halini fonksiyona gönderdim ve sayýnýn kendisiyle çarptým böylece özyinelemeli fonksiyon olmuþ oldu
			}
		}
		int UsAlma(int sayi1, int sayi2) //us alma fonksiyonunu tanýmladým
		{
			int sonuc=1; //us toplamlarý için bir deðiþken oluþturdum
			for(int i=0;i<sayi2;i++) //üs alýnacak sayýya kadar sýfýrdan döngüyü baþlattým
			{
				sonuc*=sayi1; //ilk girilen sayýyý sonuca çarparak aktardým
			}
			return sonuc; //sonucu gönderdim
		}
		
		
};

class DortIslem{ //dörtislem class'ýný tanýmladým
	private:
		int disayi1, disayi2, disayi3; //sadece bu sýnýfta kullanýlacak deðiþkenleri tanýmladým
	public: 
		friend class Islemler; //Islemler class'ýnda burda tanýmladýðým özel deðiþkenleri kullanmamý saðlayacak	

		void setdisayi1(int _disayi1) { //dýþarýdan gelen deðeri özel deðiþkene aktarmak için set fonksiyon tanýmladým
			disayi1 = _disayi1; //dýþarýdan gelen deðeri özel deðiþkene aktardým
		}
		void setdisayi2(int _disayi2) { //dýþarýdan gelen deðeri özel deðiþkene aktarmak için set fonksiyon tanýmladým
			disayi2 = _disayi2; //dýþarýdan gelen deðeri özel deðiþkene aktardým
		}
		void setdisayi3(int _disayi3) { //dýþarýdan gelen deðeri özel deðiþkene aktarmak için set fonksiyon tanýmladým
			disayi3 = _disayi3; //dýþarýdan gelen deðeri özel deðiþkene aktardým
		}	

		int getdisayi1() { //özel deðiþkeni dýþarýya aktarmak için get fonksiyonunu tanýmladým
			return disayi1;  //özel deðiþkeni dýþarýya aktardým
		}
		int getdisayi2() { //özel deðiþkeni dýþarýya aktarmak için get fonksiyonunu tanýmladým
			return disayi2; //özel deðiþkeni dýþarýya aktardým
		}
		int getdisayi3() { //özel deðiþkeni dýþarýya aktarmak için get fonksiyonunu tanýmladým
			return disayi3; //özel deðiþkeni dýþarýya aktardým
		}
		
		int Topla(int sayi1, int sayi2) //iki sayýlý toplama fonksiyonunu tanýmladým
		{
			return(sayi1+sayi2); //sayi1 ve sayi2'i toplayýp gönderdim
		}
		int Topla(int sayi1, int sayi2, int sayi3) //üç sayýlý toplama fonksiyonunu tanýmladým
		{
			return(sayi1+sayi2+sayi3); //sayi1, sayi2 ve sayi3'i toplayýp gönderdim
		}
		int Cikar(int sayi1, int sayi2) //iki sayýlý çýkarma fonksiyon tanýmlamasýný yaptým
		{
			return(sayi1-sayi2); //sayi1'den sayi2'i çýkartarak gönderdim
		}
		int Cikar(int sayi1, int sayi2, int sayi3) //üç sayýlý çýkarma fonksiyonu yaptým
		{
			return(sayi1-sayi2-sayi3); //sayi1'den sayi2 ve sayi3'ü çýkararak gönderdim
		}
		int Carp(int sayi1, int sayi2) //iki sayýlý çarpma fonksiyonunu tanýmladým
		{
			return(sayi1*sayi2); //sayi1 ve sayi2'i çarparak gönderdim
		}
		int Carp(int sayi1, int sayi2, int sayi3) //üç sayýlý çarpma fonksiyonunu tanýmladým
		{
			return(sayi1*sayi2*sayi3); //sayi1, sayi2 ve sayi3'ü çarparak gönderdim
		}
		int Bol(int sayi1, int sayi2) //iki sayýlý bölme fonksiyonunu tanýmladým
		{
			return(sayi1/sayi2); //sayi1'i sayi2'e bölerek gönderme iþlemimi yaptým
		}
		
};

class Islemler:public OzelIslem, public DortIslem{ //özelislem ve dörtislem'den public kalýtým aldým
	public:
		void secim() //secim yaptýrmak için fonksiyon oluþturdum
		{			
			system("cls");	//önceki ekraný temizlemek için yazdým	
			cout<<"1 - EKOK\n"; //ekranda ekok seçim için 1'e basýlmasý gerektiðini gösterir
			cout<<"2 - EBOB\n"; //ekranda ebob seçimi için 2'e basýlmasý gerektiðini gösterir
			cout<<"3 - Faktoriyel Hesabi\n"; //ekranda faktoriyel seçimi için 3'e basýlmasý gerektiðini gösterir
			cout<<"4 - Us Alma\n";  //ekranda us alma seçimi için 4'e basýlmasý gerektiðini gösterir
			cout<<"5 - Toplama\n"; //ekranda toplama seçimi için 5'e basýlmasý gerektiðini gösterir
			cout<<"6 - Cikarma\n"; //ekranda çýkarma seçimi için 6'e basýlmasý gerektiðini gösterir
			cout<<"7 - Carpma\n"; //ekranda çarpma seçimi için 7'e basýlmasý gerektiðini gösterir
			cout<<"8 - Bolme\n"; //ekranda bölme seçimi için 8'e basýlmasý gerektiðini gösterir
			cout<<"\nIslem numarasi seciniz: ";			
		}
		bool kacsayili() //2 veya 3 parametreli deðiþkenleri kullanýcýdan istemesi için fonksiyonu yazdým 
		{
			char sayisecme; //kullanýcýnýn kaç sayý belirteceðini belirlemek için bir deðiþken yazdým
			do{ //iki veya üç seçene kadar bu iþlemi devam ettiriyorum
				cout<<"Kac sayi gireceginizi secin (2 veya 3): ";
				cin>>sayisecme; //sayi giriþini yaptýrýyorum
				if(sayisecme!='2' && sayisecme!='3'){ //girilen sayi 2 veya 3 olmazsa ekranda uyarý çýkardým
					cout<<"Yanlis secim yaptiniz.\n";
				}
			}while(sayisecme!='2' && sayisecme!='3'); 
			if(sayisecme=='2'){ //girilen sayi 2 ise false döndürüyorum
				return false;
			}			
			else{ //deðilse
				return true; //true döndürüyorum
			}
		}
};


int main(){ 
	int s1,s2,s3; //kullanýcýdan alacaðým sayý deðiþkenlerini tanýmladým
	int seclist; //ana iþlem seçim için bir deðiþken tanýmladým
	char devam; //kullanýcýnýn devam edip etmeme durumunu almak için deðiþken tanýmladým
	Islemler islem; //iþlemler sýnýfýndan fonksiyonlarý kullanmak için bu sýnýftan bir obje yarattým

	do{ //en az bir kere sormasý için do-while kullandým
		islem.secim();	//iþlemlerin numaralarýný kullanýcýya gösterdim ve seçim yapmalarýný istedim	
		cin>>seclist; //kullanýcýnýn seçtiði sayýyý aldým
	
		switch(seclist) //kullanýcýnýn seçtiði sayýya göre iþlemler gerçekleþtirilecek
		{
			case 1: //ekok seçtiyse
				if(islem.kacsayili()){ //üç tane seçmek istediðini belirttiyse
					cout<<"1. Sayi: ";
					cin>>s1; //birinci sayiyi aldým
					cout<<"2. Sayi: ";
					cin>>s2; //ikinci sayiyi aldým
					cout<<"3. Sayi: ";
					cin>>s3; //üçüncü sayiyi aldim
					cout<<"Ekok: "<<islem.Ekok(s1,s2,s3)<<endl; //üç parametreli ekoka gönderip yazdýrdým
				}
				else{ //iki deðiþkenli girmek isterse
					cout<<"1. Sayi: ";
					cin>>s1; //birinci sayiyi aldým
					cout<<"2. Sayi: ";
					cin>>s2; //ikinci sayiyi aldým
					cout<<"Ekok "<<islem.Ekok(s1,s2)<<endl; //iki parametreli ekoka gönderip yazdýrdým
				}				
				break;
			case 2: //ebobsa
				if(islem.kacsayili()){ //üç tane seçmek istediðini belirttiyse
					cout<<"1. Sayi: ";
					cin>>s1; //birinci sayiyi aldým
					cout<<"2. Sayi: ";
					cin>>s2; //ikinci sayiyi aldým
					cout<<"3. Sayi: ";
					cin>>s3; //üçüncü sayýyý aldým
					cout<<"Ebob: "<<islem.Ebob(s1,s2,s3)<<endl; //üç parametreli eboba gönderdip yazdýrdým
				}
				else{ //iki deðiþkenli girmek isterse
					cout<<"1. Sayi: ";
					cin>>s1; //birinci sayýyý aldým
					cout<<"2. Sayi: ";
					cin>>s2; //ikinci sayýyý aldým
					cout<<"Ebob: "<<islem.Ebob(s1,s2)<<endl; //iki parametreli eboba gönderip yazýmýný yaptýrdým
				}				
				break;
			case 3: //faktoriyel seçimi için
				cout<<"Sayi: ";
				cin>>s1; //sayi girisini aldým
				cout<<"Faktoriyeli: "<<islem.Faktoriyel(s1)<<endl;		//faktoriyele gönderip yazdýrdým					
				break;
			case 4: //üs aldýrma seçimi için
				cout<<"Sayi: ";
				cin>>s1; //sayi girisini aldým
				cout<<"Ussu: ";
				cin>>s2; //üs girisini aldým
				cout<<"Sonuc: "<<islem.UsAlma(s1,s2)<<endl; //üs almaya gönderip yazdýrdým
				break;
			case 5: //toplama seçimi için
				if(islem.kacsayili()){ //üç deðiþkenliyse
					cout<<"1. Sayi: ";
					cin>>s1; //sayi girisini aldým
					cout<<"2. Sayi: ";
					cin>>s2; //ikinci sayiyi aldým
					cout<<"3. Sayi: ";
					cin>>s3; //üçüncü sayýyý aldým
					cout<<"Toplam: "<<islem.Topla(s1,s2,s3)<<endl; //ve üç parametreli toplamaya gönderip yazdýrdým
				}
				else{ //iki deðiþkenliyse
					cout<<"1. Sayi: ";
					cin>>s1; //sayi girisini aldým
					cout<<"2. Sayi: ";
					cin>>s2; //ikinci sayý girisini aldým
					cout<<"Toplam: "<<islem.Topla(s1,s2)<<endl; //ve iki parametreli toplamaya gönderip yazdýrdým
				}
				break;
			case 6: //çýkarma seçimi için
				if(islem.kacsayili()){ //üç deðiþkenliyse
					cout<<"1. Sayi: ";
					cin>>s1; //birinci sayi girisini aldým
					cout<<"2. Sayi: ";
					cin>>s2; //ikinci sayi girisini aldým
					cout<<"3. Sayi: ";
					cin>>s3; //üçüncü sayi girisini aldým
					cout<<"Cikarma: "<<islem.Cikar(s1,s2,s3)<<endl; //ve üç parametreli çýkarmaya gönderdip yazdýrdým
				}
				else{ //iki deðiþkenliyse
					cout<<"1. Sayi: ";
					cin>>s1; //birinci sayi girisini aldým
					cout<<"2. Sayi: ";
					cin>>s2; //ikinci sayi girisini aldým
					cout<<"Cikarma: "<<islem.Cikar(s1,s2)<<endl; //ve iki parametreli çýkarmaya gönderip yazdýrdým
				}
				break;
			case 7: //çarpma iþlemi için
				if(islem.kacsayili()){ //üç deðiþkenli
					cout<<"1. Sayi: ";
					cin>>s1; //birinci sayi girisini aldým
					cout<<"2. Sayi: ";
					cin>>s2; //ikinci sayi girisini aldým
					cout<<"3. Sayi: ";
					cin>>s3; //ücüncüsayi girisini aldým
					cout<<"Carpma: "<<islem.Carp(s1,s2,s3)<<endl; //üç parametreli çarpmaya gönderdip yazdýrdým
				}
				else{ //iki deðiþkenli
					cout<<"1. Sayi: ";
					cin>>s1; //birinci sayi girisini aldým
					cout<<"2. Sayi: ";
					cin>>s2; //ikinci sayi girisini aldým
					cout<<"Carpma: "<<islem.Carp(s1,s2)<<endl; //iki parametreli çarpmaya gönderip yazdýrdým
				}
				break;
			case 8: //bölme seçimi için
				cout<<"1. Sayi: ";
				cin>>s1; //birincisayi girisini aldým
				cout<<"2. Sayi: ";
				cin>>s2; //ikinci sayi girisini aldým
				cout<<"Bolme: "<<islem.Bol(s1,s2)<<endl; //bölmeye gönderip yazdýrdým
				break;
			default:
				cout<<"Yanlis secim yaptiniz.\n";
				break;
				
		}
		cout<<"\nDevam etmek istiyor musunuz? (E/H): ";
		cin>>devam; //giriþi belirtir
	}while(devam=='e' || devam=='E'); //e girdiyse döngüye devam eder
	
	return 0;
}
