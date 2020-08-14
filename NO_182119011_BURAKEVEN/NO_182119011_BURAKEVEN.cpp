#include <iostream>
using namespace std;

class OzelIslem{ //�zel islem class'�n� tan�mlad�m
	private:		
		int xsayi1,ysayi2,zsayi3; //sadece bu s�n�fta kullan�lacak de�i�kenleri tan�mlad�m
	public: //i�lemler class'�nda kullaca��m fonksiyonlar� burda tan�mlad�m
		
		friend class Islemler; //Islemler class'�nda burda tan�mlad���m �zel de�i�kenleri kullanmam� sa�layacak	

		void setxsayi1(int _xsayi1) { //d��ar�dan gelen de�eri �zel de�i�kene aktarmak i�in set fonksiyon tan�mlad�m
			xsayi1 = _xsayi1; //d��ar�dan gelen de�eri �zel de�i�kene aktard�m
		}
		void setysayi2(int _ysayi2) { //d��ar�dan gelen de�eri �zel de�i�kene aktarmak i�in set fonksiyon tan�mlad�m
			ysayi2 = _ysayi2; //d��ar�dan gelen de�eri �zel de�i�kene aktard�m
		}
		void setzsayi3(int _zsayi3) { //d��ar�dan gelen de�eri �zel de�i�kene aktarmak i�in set fonksiyon tan�mlad�m
			zsayi3 = _zsayi3; //d��ar�dan gelen de�eri �zel de�i�kene aktard�m
		}	

		int getxsayi1() { //�zel de�i�keni d��ar�ya aktarmak i�in get fonksiyonunu tan�mlad�m
			return xsayi1;  //�zel de�i�keni d��ar�ya aktard�m
		}
		int getysayi2() { //�zel de�i�keni d��ar�ya aktarmak i�in get fonksiyonunu tan�mlad�m
			return ysayi2; //�zel de�i�keni d��ar�ya aktard�m
		}
		int getzsayi3() { //�zel de�i�keni d��ar�ya aktarmak i�in get fonksiyonunu tan�mlad�m
			return zsayi3; //�zel de�i�keni d��ar�ya aktard�m
		}
		
		int Ekok(int sayi1, int sayi2) //iki parametreli ekok tan�mlamas�n� ger�ekle�tirdim
		{
			for(int i=1; i<=sayi1*sayi2; i++) //birden sayilarin �arp�m�na kadar d�ng�ye ald�m ��nk� ekoklar� en fazla �arp�mlar�na e�it olabilir
			{
				if( (i%sayi1==0) && (i%sayi2==0) ) //i sayi1 ve sayi2'e tam b�l�nd��� zaman ---
				{
					return i; //-- i'i g�nderdim
				}
			}
		}
		int Ekok(int sayi1, int sayi2, int sayi3) //�� parametreli ekok tan�mlamas�n� yapt�m
		{
			for(int i=1; i<=sayi1*sayi2*sayi3; i++) //birden sayilarin �arp�m�na kadar d�ng�ye ald�m ��nk� ekoklar� en fazla �arp�mlar�na e�it olabilir
			{
				if( (i%sayi1==0) && (i%sayi2==0) && (i%sayi3==0) ) //i sayi1,sayi2 ve sayi3'e tam b�l�nd��� zaman ---
				{
					return i; //--- i'i g�nderdim
				}
			}
		}
		int Ebob(int sayi1, int sayi2) //iki parametreli ebob tan�mlamas�n� yapt�m
		{
			int enbsayi; //for d�ng�s�nde kullan�lacak maks de�er aral���n� tan�mlamak i�in de�i�ken olu�turdum
			if(sayi1>sayi2) //e�er sayi 1 sayi2'den b�y�k olursa 
			{
				enbsayi = sayi1; //en b�y�k sayi, sayi1 olacakt�r
			} 
			else //de�ilse
			{
				enbsayi = sayi2; //en b�y�k sayi, sayi2'dir.
			}
			
			for(enbsayi; enbsayi>0; enbsayi--) //en b�y�k say�dan s�f�ra kadar d�ng� olu�turdum
			{
				if( (sayi1%enbsayi==0) && (sayi2%enbsayi==0) ) //iki say�da �imdi ki say�ya tam b�l�n�yorsa --
				{
					return enbsayi; //--- �imdi ki say�y� g�nderdim
				}
			}			
		}
		int Ebob(int sayi1, int sayi2, int sayi3) //�� parametreli ebob tan�mlamas�n� yapt�m
		{
			int enbsayi; //for d�ng�s�nde kullan�lacak maks de�er aral���n� tan�mlamak i�in de�i�ken olu�turdum
			if( (sayi1>sayi2) && (sayi1>sayi3) ) //e�er sayi 1 sayi2'den b�y�k olursa ve sayi1 sayi3'den b�y�k olursa
			{
				enbsayi=sayi1; //en b�y�k sayi, sayi1 olacakt�r
			}
			else if( (sayi2>sayi1) && (sayi2>sayi3) ) //e�er sayi2 sayi1'den b�y�k ve sayi2, sayi3'den b�y�kse
			{
				enbsayi=sayi2; //o halde en b�y�k say� sayi2 olacakt�r
			}
			else //hi�biri de�ilse
			{
				enbsayi=sayi3; //en b�y�k say� sayi3 olacak
			}
			for(enbsayi; enbsayi>0; enbsayi--) //en b�y�k say�dan s�f�ra kadar d�ng� olu�turdum
			{
				if( (sayi1%enbsayi==0) && (sayi2%enbsayi==0) && (sayi3%enbsayi==0) ) //�� say�da �imdi ki say�ya tam b�l�n�yorsa --
				{
					return enbsayi; //�imdi ki say�y� g�nderdim
				}
			}
		}
		int Faktoriyel(int sayi1) //faktoriyel fonksiyon tan�mlamas�
		{			
			if(sayi1 == 1 || sayi1 == 0) //girilen sayi 1 veya 0'sa faktoriyeli 1 oldu�u i�in 1'i direkt olarak yollad�m
			{
				return 1;
			}
			else //de�ilse ...
			{
				return sayi1 * Faktoriyel(sayi1 - 1); //say�n�n bir azalt�lm�� halini fonksiyona g�nderdim ve say�n�n kendisiyle �arpt�m b�ylece �zyinelemeli fonksiyon olmu� oldu
			}
		}
		int UsAlma(int sayi1, int sayi2) //us alma fonksiyonunu tan�mlad�m
		{
			int sonuc=1; //us toplamlar� i�in bir de�i�ken olu�turdum
			for(int i=0;i<sayi2;i++) //�s al�nacak say�ya kadar s�f�rdan d�ng�y� ba�latt�m
			{
				sonuc*=sayi1; //ilk girilen say�y� sonuca �arparak aktard�m
			}
			return sonuc; //sonucu g�nderdim
		}
		
		
};

class DortIslem{ //d�rtislem class'�n� tan�mlad�m
	private:
		int disayi1, disayi2, disayi3; //sadece bu s�n�fta kullan�lacak de�i�kenleri tan�mlad�m
	public: 
		friend class Islemler; //Islemler class'�nda burda tan�mlad���m �zel de�i�kenleri kullanmam� sa�layacak	

		void setdisayi1(int _disayi1) { //d��ar�dan gelen de�eri �zel de�i�kene aktarmak i�in set fonksiyon tan�mlad�m
			disayi1 = _disayi1; //d��ar�dan gelen de�eri �zel de�i�kene aktard�m
		}
		void setdisayi2(int _disayi2) { //d��ar�dan gelen de�eri �zel de�i�kene aktarmak i�in set fonksiyon tan�mlad�m
			disayi2 = _disayi2; //d��ar�dan gelen de�eri �zel de�i�kene aktard�m
		}
		void setdisayi3(int _disayi3) { //d��ar�dan gelen de�eri �zel de�i�kene aktarmak i�in set fonksiyon tan�mlad�m
			disayi3 = _disayi3; //d��ar�dan gelen de�eri �zel de�i�kene aktard�m
		}	

		int getdisayi1() { //�zel de�i�keni d��ar�ya aktarmak i�in get fonksiyonunu tan�mlad�m
			return disayi1;  //�zel de�i�keni d��ar�ya aktard�m
		}
		int getdisayi2() { //�zel de�i�keni d��ar�ya aktarmak i�in get fonksiyonunu tan�mlad�m
			return disayi2; //�zel de�i�keni d��ar�ya aktard�m
		}
		int getdisayi3() { //�zel de�i�keni d��ar�ya aktarmak i�in get fonksiyonunu tan�mlad�m
			return disayi3; //�zel de�i�keni d��ar�ya aktard�m
		}
		
		int Topla(int sayi1, int sayi2) //iki say�l� toplama fonksiyonunu tan�mlad�m
		{
			return(sayi1+sayi2); //sayi1 ve sayi2'i toplay�p g�nderdim
		}
		int Topla(int sayi1, int sayi2, int sayi3) //�� say�l� toplama fonksiyonunu tan�mlad�m
		{
			return(sayi1+sayi2+sayi3); //sayi1, sayi2 ve sayi3'i toplay�p g�nderdim
		}
		int Cikar(int sayi1, int sayi2) //iki say�l� ��karma fonksiyon tan�mlamas�n� yapt�m
		{
			return(sayi1-sayi2); //sayi1'den sayi2'i ��kartarak g�nderdim
		}
		int Cikar(int sayi1, int sayi2, int sayi3) //�� say�l� ��karma fonksiyonu yapt�m
		{
			return(sayi1-sayi2-sayi3); //sayi1'den sayi2 ve sayi3'� ��kararak g�nderdim
		}
		int Carp(int sayi1, int sayi2) //iki say�l� �arpma fonksiyonunu tan�mlad�m
		{
			return(sayi1*sayi2); //sayi1 ve sayi2'i �arparak g�nderdim
		}
		int Carp(int sayi1, int sayi2, int sayi3) //�� say�l� �arpma fonksiyonunu tan�mlad�m
		{
			return(sayi1*sayi2*sayi3); //sayi1, sayi2 ve sayi3'� �arparak g�nderdim
		}
		int Bol(int sayi1, int sayi2) //iki say�l� b�lme fonksiyonunu tan�mlad�m
		{
			return(sayi1/sayi2); //sayi1'i sayi2'e b�lerek g�nderme i�lemimi yapt�m
		}
		
};

class Islemler:public OzelIslem, public DortIslem{ //�zelislem ve d�rtislem'den public kal�t�m ald�m
	public:
		void secim() //secim yapt�rmak i�in fonksiyon olu�turdum
		{			
			system("cls");	//�nceki ekran� temizlemek i�in yazd�m	
			cout<<"1 - EKOK\n"; //ekranda ekok se�im i�in 1'e bas�lmas� gerekti�ini g�sterir
			cout<<"2 - EBOB\n"; //ekranda ebob se�imi i�in 2'e bas�lmas� gerekti�ini g�sterir
			cout<<"3 - Faktoriyel Hesabi\n"; //ekranda faktoriyel se�imi i�in 3'e bas�lmas� gerekti�ini g�sterir
			cout<<"4 - Us Alma\n";  //ekranda us alma se�imi i�in 4'e bas�lmas� gerekti�ini g�sterir
			cout<<"5 - Toplama\n"; //ekranda toplama se�imi i�in 5'e bas�lmas� gerekti�ini g�sterir
			cout<<"6 - Cikarma\n"; //ekranda ��karma se�imi i�in 6'e bas�lmas� gerekti�ini g�sterir
			cout<<"7 - Carpma\n"; //ekranda �arpma se�imi i�in 7'e bas�lmas� gerekti�ini g�sterir
			cout<<"8 - Bolme\n"; //ekranda b�lme se�imi i�in 8'e bas�lmas� gerekti�ini g�sterir
			cout<<"\nIslem numarasi seciniz: ";			
		}
		bool kacsayili() //2 veya 3 parametreli de�i�kenleri kullan�c�dan istemesi i�in fonksiyonu yazd�m 
		{
			char sayisecme; //kullan�c�n�n ka� say� belirtece�ini belirlemek i�in bir de�i�ken yazd�m
			do{ //iki veya �� se�ene kadar bu i�lemi devam ettiriyorum
				cout<<"Kac sayi gireceginizi secin (2 veya 3): ";
				cin>>sayisecme; //sayi giri�ini yapt�r�yorum
				if(sayisecme!='2' && sayisecme!='3'){ //girilen sayi 2 veya 3 olmazsa ekranda uyar� ��kard�m
					cout<<"Yanlis secim yaptiniz.\n";
				}
			}while(sayisecme!='2' && sayisecme!='3'); 
			if(sayisecme=='2'){ //girilen sayi 2 ise false d�nd�r�yorum
				return false;
			}			
			else{ //de�ilse
				return true; //true d�nd�r�yorum
			}
		}
};


int main(){ 
	int s1,s2,s3; //kullan�c�dan alaca��m say� de�i�kenlerini tan�mlad�m
	int seclist; //ana i�lem se�im i�in bir de�i�ken tan�mlad�m
	char devam; //kullan�c�n�n devam edip etmeme durumunu almak i�in de�i�ken tan�mlad�m
	Islemler islem; //i�lemler s�n�f�ndan fonksiyonlar� kullanmak i�in bu s�n�ftan bir obje yaratt�m

	do{ //en az bir kere sormas� i�in do-while kulland�m
		islem.secim();	//i�lemlerin numaralar�n� kullan�c�ya g�sterdim ve se�im yapmalar�n� istedim	
		cin>>seclist; //kullan�c�n�n se�ti�i say�y� ald�m
	
		switch(seclist) //kullan�c�n�n se�ti�i say�ya g�re i�lemler ger�ekle�tirilecek
		{
			case 1: //ekok se�tiyse
				if(islem.kacsayili()){ //�� tane se�mek istedi�ini belirttiyse
					cout<<"1. Sayi: ";
					cin>>s1; //birinci sayiyi ald�m
					cout<<"2. Sayi: ";
					cin>>s2; //ikinci sayiyi ald�m
					cout<<"3. Sayi: ";
					cin>>s3; //���nc� sayiyi aldim
					cout<<"Ekok: "<<islem.Ekok(s1,s2,s3)<<endl; //�� parametreli ekoka g�nderip yazd�rd�m
				}
				else{ //iki de�i�kenli girmek isterse
					cout<<"1. Sayi: ";
					cin>>s1; //birinci sayiyi ald�m
					cout<<"2. Sayi: ";
					cin>>s2; //ikinci sayiyi ald�m
					cout<<"Ekok "<<islem.Ekok(s1,s2)<<endl; //iki parametreli ekoka g�nderip yazd�rd�m
				}				
				break;
			case 2: //ebobsa
				if(islem.kacsayili()){ //�� tane se�mek istedi�ini belirttiyse
					cout<<"1. Sayi: ";
					cin>>s1; //birinci sayiyi ald�m
					cout<<"2. Sayi: ";
					cin>>s2; //ikinci sayiyi ald�m
					cout<<"3. Sayi: ";
					cin>>s3; //���nc� say�y� ald�m
					cout<<"Ebob: "<<islem.Ebob(s1,s2,s3)<<endl; //�� parametreli eboba g�nderdip yazd�rd�m
				}
				else{ //iki de�i�kenli girmek isterse
					cout<<"1. Sayi: ";
					cin>>s1; //birinci say�y� ald�m
					cout<<"2. Sayi: ";
					cin>>s2; //ikinci say�y� ald�m
					cout<<"Ebob: "<<islem.Ebob(s1,s2)<<endl; //iki parametreli eboba g�nderip yaz�m�n� yapt�rd�m
				}				
				break;
			case 3: //faktoriyel se�imi i�in
				cout<<"Sayi: ";
				cin>>s1; //sayi girisini ald�m
				cout<<"Faktoriyeli: "<<islem.Faktoriyel(s1)<<endl;		//faktoriyele g�nderip yazd�rd�m					
				break;
			case 4: //�s ald�rma se�imi i�in
				cout<<"Sayi: ";
				cin>>s1; //sayi girisini ald�m
				cout<<"Ussu: ";
				cin>>s2; //�s girisini ald�m
				cout<<"Sonuc: "<<islem.UsAlma(s1,s2)<<endl; //�s almaya g�nderip yazd�rd�m
				break;
			case 5: //toplama se�imi i�in
				if(islem.kacsayili()){ //�� de�i�kenliyse
					cout<<"1. Sayi: ";
					cin>>s1; //sayi girisini ald�m
					cout<<"2. Sayi: ";
					cin>>s2; //ikinci sayiyi ald�m
					cout<<"3. Sayi: ";
					cin>>s3; //���nc� say�y� ald�m
					cout<<"Toplam: "<<islem.Topla(s1,s2,s3)<<endl; //ve �� parametreli toplamaya g�nderip yazd�rd�m
				}
				else{ //iki de�i�kenliyse
					cout<<"1. Sayi: ";
					cin>>s1; //sayi girisini ald�m
					cout<<"2. Sayi: ";
					cin>>s2; //ikinci say� girisini ald�m
					cout<<"Toplam: "<<islem.Topla(s1,s2)<<endl; //ve iki parametreli toplamaya g�nderip yazd�rd�m
				}
				break;
			case 6: //��karma se�imi i�in
				if(islem.kacsayili()){ //�� de�i�kenliyse
					cout<<"1. Sayi: ";
					cin>>s1; //birinci sayi girisini ald�m
					cout<<"2. Sayi: ";
					cin>>s2; //ikinci sayi girisini ald�m
					cout<<"3. Sayi: ";
					cin>>s3; //���nc� sayi girisini ald�m
					cout<<"Cikarma: "<<islem.Cikar(s1,s2,s3)<<endl; //ve �� parametreli ��karmaya g�nderdip yazd�rd�m
				}
				else{ //iki de�i�kenliyse
					cout<<"1. Sayi: ";
					cin>>s1; //birinci sayi girisini ald�m
					cout<<"2. Sayi: ";
					cin>>s2; //ikinci sayi girisini ald�m
					cout<<"Cikarma: "<<islem.Cikar(s1,s2)<<endl; //ve iki parametreli ��karmaya g�nderip yazd�rd�m
				}
				break;
			case 7: //�arpma i�lemi i�in
				if(islem.kacsayili()){ //�� de�i�kenli
					cout<<"1. Sayi: ";
					cin>>s1; //birinci sayi girisini ald�m
					cout<<"2. Sayi: ";
					cin>>s2; //ikinci sayi girisini ald�m
					cout<<"3. Sayi: ";
					cin>>s3; //�c�nc�sayi girisini ald�m
					cout<<"Carpma: "<<islem.Carp(s1,s2,s3)<<endl; //�� parametreli �arpmaya g�nderdip yazd�rd�m
				}
				else{ //iki de�i�kenli
					cout<<"1. Sayi: ";
					cin>>s1; //birinci sayi girisini ald�m
					cout<<"2. Sayi: ";
					cin>>s2; //ikinci sayi girisini ald�m
					cout<<"Carpma: "<<islem.Carp(s1,s2)<<endl; //iki parametreli �arpmaya g�nderip yazd�rd�m
				}
				break;
			case 8: //b�lme se�imi i�in
				cout<<"1. Sayi: ";
				cin>>s1; //birincisayi girisini ald�m
				cout<<"2. Sayi: ";
				cin>>s2; //ikinci sayi girisini ald�m
				cout<<"Bolme: "<<islem.Bol(s1,s2)<<endl; //b�lmeye g�nderip yazd�rd�m
				break;
			default:
				cout<<"Yanlis secim yaptiniz.\n";
				break;
				
		}
		cout<<"\nDevam etmek istiyor musunuz? (E/H): ";
		cin>>devam; //giri�i belirtir
	}while(devam=='e' || devam=='E'); //e girdiyse d�ng�ye devam eder
	
	return 0;
}
