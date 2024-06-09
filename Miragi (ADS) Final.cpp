// Created by Khansa Putri Giffany
#include <iostream>
#include <windows.h>     
#include <unistd.h>
#include <stdio.h>     
#include <stdlib.h>   
#include <ctime>          

using namespace std;
void delay(void){
	int delay;
	delay = 1;
	while(delay<30000000){
	delay++;
	}
}

void gotoxy(int x, int y){      
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main(){
		system("color F0");   
		time_t now = time(0);
		char* time = ctime(&now);
		
		char yt, y, t, T, ulang1, ulang2, program;
		string data, nama, alamat, rtrw, kelurahan, kecamatan, kota, provinsi;
		int i, ulang, pilih[100],jumlah[100],subtotal[100], ppn[100], pb1[100],harga[100], nominal_bayar[100], pilih1[100], pilih2[100];
		string menu[100], opsi[100], opsi1[100];
		float totalbayar, hargatotal,PPN, PB1;
		int pembelian=0, opsi_order=0, opsi_pembayaran=0;
		bool selesai=false;  
		
		int jumlah_meja=28;
		int nomor_meja, uang_bayar, pilihmeja, nomorantrian, pin_pembayaran;
		
//		for(i=65; i<=105 ; i++ ){
//		gotoxy(i,14);
//		printf("=");
//		gotoxy(i,16);
//		printf("=");
//		delay(); 
//	}
//	for(i=1 ; i<=100 ; i++){
//		gotoxy(68,15);                 
//		cout<<"ENTERING MIRAGI'S PAGE, LOADING " <<i<< "%";
//		delay();
//	}
//	system("cls");
//	cout<<endl;
	
do{
		cout<<endl<<endl<<endl<<endl;
		cout<<"\t\t\t\t\t\t\t=============================================================="<<endl;
		cout<<"\t\t\t\t\t\t\t=              M I R A G I' S    C H I C K E N               ="<<endl;
		cout<<"\t\t\t\t\t\t\t=             MIRAGI, Restoran Ayam Khas Korea!              ="<<endl;
		cout<<"\t\t\t\t\t\t\t=                    Hubungi 021-022020                      ="<<endl;
		cout<<"\t\t\t\t\t\t\t=============================================================="<<endl;
		cout<<"\t\t\t\t\t\t\t=             PILIHAN MENU MAKANAN YANG TERSEDIA             ="<<endl;
		cout<<"\t\t\t\t\t\t\t==============================================================\n";
	 	cout<<"\t\t\t\t\t\t\t|   KODE MENU   |           MENU            |      HARGA     |\n";
	 	cout<<"\t\t\t\t\t\t\t==============================================================\n";
	 	cout<<"\t\t\t\t\t\t\t|       1       |     SPICY WINGS           |  Rp. 35.000    |\n";
	 	cout<<"\t\t\t\t\t\t\t|       2       |     CHICKEN TERIYAKI      |  Rp. 40.000    |\n";
		cout<<"\t\t\t\t\t\t\t|       3       |     CHICKEN KATSU         |  Rp. 45.000    |\n";
		cout<<"\t\t\t\t\t\t\t|       4       |     KOREAN CHICKEN        |  Rp. 50.000    |\n";
		cout<<"\t\t\t\t\t\t\t|       5       |     CHEESY CHICKEN        |  Rp. 55.000    |\n";
		cout<<"\t\t\t\t\t\t\t|       6       |     ROASTED CHICKEN       |  Rp. 60.000    |\n";
		cout<<"\t\t\t\t\t\t\t|       7       |     CHICKEN MOZZARELLA    |  Rp. 65.000    |\n";
		cout<<"\t\t\t\t\t\t\t=============================================================="<<endl;
		cout<<"\t\t\t\t\t\t\t=             PILIHAN MENU MINUMAN YANG TERSEDIA             ="<<endl;
		cout<<"\t\t\t\t\t\t\t==============================================================\n";
		cout<<"\t\t\t\t\t\t\t|       8       |     MINERAL WATER         |  Rp. 10.000    |\n";
		cout<<"\t\t\t\t\t\t\t|       9       |     LIME SQUASH           |  Rp. 15.000    |\n";
		cout<<"\t\t\t\t\t\t\t|       10      |     FUSION TEA WITH ICE   |  Rp. 15.000    |\n";
		cout<<"\t\t\t\t\t\t\t==============================================================\n";
	    
	    	cout<<"\t\t\t\t\t\t\t| Pilih Menu : ";
	    	cin>>pilih[pembelian];  
	    	
	    	if (pilih[pembelian]<=10){
	    		
	    		if (pilih[pembelian]==0){     
	    			selesai=true;    
				}else {
					switch (pilih[pembelian]){
			    		case 1 : menu[pembelian]="SPICY WINGS          "; harga[pembelian]=35000; break; 
			    		case 2 : menu[pembelian]="CHICKEN TERIYAKI     "; harga[pembelian]=45000; break;
			    		case 3 : menu[pembelian]="CHICKEN KATSU        "; harga[pembelian]=45000; break;
			    		case 4 : menu[pembelian]="KOREAN CHICKEN       "; harga[pembelian]=50000; break;
			    		case 5 : menu[pembelian]="CHEESY CHICKEN       "; harga[pembelian]=55000; break;
			    		case 6 : menu[pembelian]="ROASTED CHICKEN      "; harga[pembelian]=60000; break;
			    		case 7 : menu[pembelian]="CHICKEN MOZZARELLA   "; harga[pembelian]=65000; break;
			    		case 8 : menu[pembelian]="MINERAL WATER        "; harga[pembelian]=10000; break;
			    		case 9 : menu[pembelian]="LIME SQUASH          "; harga[pembelian]=15000; break;
			    		case 10 : menu[pembelian]="FUSION TEA WITH ICE  "; break;
					}
					
					cout<<"\t\t\t\t\t\t\t| Jumlah Porsi "<<menu[pembelian]<<": ";
			    	cin>>jumlah[pembelian];
			    	cout<<endl;
			    	
			    	subtotal[pembelian]=jumlah[pembelian]*harga[pembelian];  
			    	
					ppn[pembelian] = jumlah[pembelian]*harga[pembelian] * 0.1; 
					PPN=ppn[pembelian];
					
    				pb1[pembelian] = jumlah[pembelian]*harga[pembelian] * 0.05;	
    				PB1=pb1[pembelian];
    				
					totalbayar=subtotal[pembelian]+ppn[pembelian] + pb1 [pembelian]; 
				}
			} else {
				cout<<"\t\t\t\t\t\t\tMenu yang dipilih tidak tersedia."<<endl;
				cout<<endl;
			}
	
		cout<<"\t\t\t\t\t\t\t| Terima kasih. Anda akan dialihkan ke halaman selanjutnya";
		pembelian++;
		sleep(3);
		system("cls");
		
		cout<<endl<<endl<<endl<<endl;
		cout<<"\t\t\t\t\t\t\t=============================================================="<<endl;
		cout<<"\t\t\t\t\t\t\t=              M I R A G I' S    C H I C K E N               ="<<endl;
		cout<<"\t\t\t\t\t\t\t=             MIRAGI, Restoran Ayam Khas Korea!              ="<<endl;
		cout<<"\t\t\t\t\t\t\t=                    Hubungi 021-022020                      ="<<endl;
		cout<<"\t\t\t\t\t\t\t=============================================================="<<endl;
		cout<<"\t\t\t\t\t\t\t=            DAFTAR PESANAN TELAH DITERIMA SISTEM.           ="<<endl;
		cout<<"\t\t\t\t\t\t\t=                                                            ="<<endl;
		cout<<"\t\t\t\t\t\t\t= Nama Pemesan: "; cin>>nama; 
		
		sleep(1);
		cout<<"\t\t\t\t\t\t\t=                                                            ="<<endl;
		cout<<"\t\t\t\t\t\t\t=============================================================="<<endl;
		cout<<"\t\t\t\t\t\t\t=             Terima kasih. Harap tunggu sebentar            ="<<endl; 
		cout<<"\t\t\t\t\t\t\t=        Anda akan dialihkan ke halaman selanjutnya.         ="<<endl;
		cout<<"\t\t\t\t\t\t\t=============================================================="<<endl;
		sleep(3);
		system("cls");
		
		cout<<endl<<endl<<endl<<endl;
		cout<<"\t\t\t\t\t\t\t=============================================================="<<endl;
		cout<<"\t\t\t\t\t\t\t=              M I R A G I' S    C H I C K E N               ="<<endl;
		cout<<"\t\t\t\t\t\t\t=             MIRAGI, Restoran Ayam Khas Korea!              ="<<endl;
		cout<<"\t\t\t\t\t\t\t=                    Hubungi 021-022020                      ="<<endl;
		cout<<"\t\t\t\t\t\t\t=============================================================="<<endl;
		cout<<"\t\t\t\t\t\t\t=  Setelah memesan, pilih yuk kamu ingin makan dimana?       ="<<endl;
		cout<<"\t\t\t\t\t\t\t=  1. Dine In (Makan di Tempat)                              ="<<endl;
		cout<<"\t\t\t\t\t\t\t=  2. Take Away                                              ="<<endl;
		cout<<"\t\t\t\t\t\t\t=  3. Delivery (Layanan Pesan Antar)                         ="<<endl;
		cout<<"\t\t\t\t\t\t\t=============================================================="<<endl;
		cout<<"\t\t\t\t\t\t\t=         PASTIKAN ANDA MEMILIH PILIHAN YANG TERSEDIA        =\n";
		cout<<"\t\t\t\t\t\t\t==============================================================\n";
		cout<<"\t\t\t\t\t\t\t| Pilih opsi : ";
	    cin>>pilih1[opsi_order];
	    
	    	if (pilih1[opsi_order]<=3){
	    		switch(pilih1[opsi_order]){
					case 1: opsi[opsi_order]="DINE IN"; break;
					case 2: opsi[opsi_order]="TAKE AWAY"; break;
					case 3: opsi[opsi_order]="DELIVERY"; break;
					default: cout<<"Menu tidak tersedia."<<endl; break;
					}	
				cout<<"\t\t\t\t\t\t\t| Anda memilih: "<<opsi[opsi_order]; 
				cout<<endl;
				}
	
			sleep(2);
			system("cls");
			
			if(pilih1[opsi_order]==1 || pilih1[opsi_order]==2){
				cout<<endl<<endl<<endl<<endl;
				cout<<"\t\t\t\t\t\t\t=============================================================="<<endl;
				cout<<"\t\t\t\t\t\t\t=              M I R A G I' S    C H I C K E N               ="<<endl;
				cout<<"\t\t\t\t\t\t\t=             MIRAGI, Restoran Ayam Khas Korea!              ="<<endl;
				cout<<"\t\t\t\t\t\t\t=                    Hubungi 021-022020                      ="<<endl;
				cout<<"\t\t\t\t\t\t\t=============================================================="<<endl;
				cout<<"\t\t\t\t\t\t\t=                  HARAP TUNGGU SEBENTAR                     ="<<endl;
				cout<<"\t\t\t\t\t\t\t=         ANDA AKAN DIALIHKAN KE HALAMAN SELANJUTNYA         ="<<endl;
				cout<<"\t\t\t\t\t\t\t=============================================================="<<endl;
				sleep (4);
				system ("cls");
				}
				
			if(pilih1[opsi_order]==3){
				cout<<endl<<endl<<endl<<endl;
				cout<<"\t\t\t\t\t\t\t=============================================================="<<endl;
				cout<<"\t\t\t\t\t\t\t=              M I R A G I' S    C H I C K E N               ="<<endl;
				cout<<"\t\t\t\t\t\t\t=             MIRAGI, Restoran Ayam Khas Korea!              ="<<endl;
				cout<<"\t\t\t\t\t\t\t=                    Hubungi 021-022020                      ="<<endl;
				cout<<"\t\t\t\t\t\t\t=============================================================="<<endl;
				cout<<"\t\t\t\t\t\t\t=               LAYANAN PESAN ANTAR (DELIVERY)               ="<<endl;
				cout<<"\t\t\t\t\t\t\t=============================================================="<<endl;
				cout<<"\t\t\t\t\t\t\t=            LENGKAPI DATA BERIKUT DENGAN SESUAI             ="; getline(cin,data); cout<<endl;
				cout<<"\t\t\t\t\t\t\t= | Nama = "; getline(cin,nama); cout<<endl;
				cout<<"\t\t\t\t\t\t\t= | Alamat = "; getline(cin,alamat); cout<<endl;
				cout<<"\t\t\t\t\t\t\t= | RT/RW = "; getline(cin,rtrw); cout<<endl;
				cout<<"\t\t\t\t\t\t\t= | Kelurahan = "; getline(cin,kelurahan); cout<<endl;
				cout<<"\t\t\t\t\t\t\t= | Kecamatan = "; getline(cin,kecamatan); cout<<endl;
				cout<<"\t\t\t\t\t\t\t= | Kota = "; getline(cin,kota); cout<<endl;
				cout<<"\t\t\t\t\t\t\t= | Provinsi = "; getline(cin,provinsi); cout<<endl;
				cout<<"\t\t\t\t\t\t\t= | Terima kasih sudan menginput data, harap tunggu sebentar ya!"<<endl;
				sleep(4);
				system("cls");
				
				cout<<endl<<endl<<endl<<endl;
				cout<<"\t\t\t\t\t\t\t=============================================================="<<endl;
				cout<<"\t\t\t\t\t\t\t=              M I R A G I' S    C H I C K E N               ="<<endl;
				cout<<"\t\t\t\t\t\t\t=             MIRAGI, Restoran Ayam Khas Korea!              ="<<endl;
				cout<<"\t\t\t\t\t\t\t=                    Hubungi 021-022020                      ="<<endl;
				cout<<"\t\t\t\t\t\t\t=============================================================="<<endl;
				cout<<"\t\t\t\t\t\t\t=               LAYANAN PESAN ANTAR (DELIVERY)               ="<<endl;
				cout<<"\t\t\t\t\t\t\t=                KONFIRMASI ALAMAT PENGIRIMAN                ="<<endl;  
				cout<<"\t\t\t\t\t\t\t=               PASTIKAN DATA ANDA TELAH SESUAI              ="<<endl;
				cout<<"\t\t\t\t\t\t\t=============================================================="<<endl;
				cout<<"\t\t\t\t\t\t\t= | Nama = "<<nama; cout<<endl;
				cout<<"\t\t\t\t\t\t\t= | Alamat = "<<alamat<<"\t\t| RT/RW = "<<rtrw<<endl;
				cout<<"\t\t\t\t\t\t\t= | Kelurahan = "<<kelurahan<<"\t\t| Kecamatan = "<<kecamatan<<endl;
				cout<<"\t\t\t\t\t\t\t= | Kota = "<<kota<<"\t\t| Provinsi = "<<provinsi<<endl;
				cout<<"\t\t\t\t\t\t\t=============================================================="<<endl;
				cout<<"\t\t\t\t\t\t\t=     DATA ANDA TELAH ERSIMPAN DALAM SISTEM DELIVERY KAMI    ="<<endl;
				cout<<"\t\t\t\t\t\t\t=                 HARAP TUNGGU SEBENTAR                      ="<<endl;
				cout<<"\t\t\t\t\t\t\t=        ANDA AKAN DIALIHKAN KE HALAMAN SELANJUTNYA...       ="<<endl;
				cout<<"\t\t\t\t\t\t\t=============================================================="<<endl;
				sleep(5);
				system("cls");
				}
		
		cout<<endl<<endl<<endl<<endl;
		cout<<"\t\t\t\t\t\t==============================================================================="<<endl;
		cout<<"\t\t\t\t\t\t=                       M I R A G I' S    C H I C K E N                       ="<<endl;
		cout<<"\t\t\t\t\t\t=                      MIRAGI, Restoran Ayam Khas Korea!                      ="<<endl;
		cout<<"\t\t\t\t\t\t=                             Hubungi 021-022020                              ="<<endl;
		cout<<"\t\t\t\t\t\t==============================================================================="<<endl;
		cout<<"\t\t\t\t\t\t=                      STRUK SEMENTARA PEMBELANJAAN ANDA                      ="<<endl;
		cout<<"\t\t\t\t\t\t==============================================================================="<<endl;
		cout<<"\t\t\t\t\t\t= Nama Pemesan = "<<nama<<endl;
		cout<<"\t\t\t\t\t\t= Pesanan untuk = "<<opsi[opsi_order]<<endl;
		cout<<"\t\t\t\t\t\t= Struk anda akan ditampilkan dibawah.";
		sleep(2);
		
		cout<<endl<<endl;
		cout<<"\t\t\t\t\t\t--------------------------------------------------------------------------------"<<endl;	
		cout<<"\t\t\t\t\t\t\t                 NOTA PEMBELIAN MIRAGI'S CHICKEN                    "<<endl;
		cout<<"\t\t\t\t\t\t--------------------------------------------------------------------------------"<<endl;
		cout<<"\t\t\t\t\t\tNO	NAMA MENU    	            	HARGA	        JUMLAH         SUB TOTAL "<<endl;
		cout<<"\t\t\t\t\t\t--------------------------------------------------------------------------------"<<endl;
		for (int a=0;a<pembelian;a++){
			  cout<<"\t\t\t\t\t\t";cout<<a+1<<"      	"<<menu[a]<<"      	"<<harga[a]<<"	 	"<<jumlah[a]<<"	    	"<<subtotal[a]<<endl;
		}
		
		cout<<"\t\t\t\t\t\t---------------------------------------------------------------------------------"<<endl;
		cout<<"\t\t\t\t\t\t| PPN (10%)                            = Rp."<<PPN<<endl;
		cout<<"\t\t\t\t\t\t| PB1 (5%)                             = Rp."<<PB1<<endl;
		cout<<"\t\t\t\t\t\t| TOTAL YANG HARUS ANDA BAYAR          = Rp."<<totalbayar<<endl;
		cout<<"\t\t\t\t\t\t---------------------------------------------------------------------------------"<<endl;
		cout<<endl;
		cout<<"\t\t\t\t\t\t| APAKAH ANDA INGIN MENAMBAH MENU PESANAN?"<<endl;
		cout<<"\t\t\t\t\t\t| TEKAN y BILA INGIN MENAMBAH PESANAN."<<endl;
		cout<<"\t\t\t\t\t\t| TEKAN t BILA TIDAK INGIN MENAMBAH PESANAN."<<endl;
		cout<<"\t\t\t\t\t\t---------------------------------------------------------------------------------"<<endl;
		cout<<"\t\t\t\t\t\t| Masukkan pilihan anda = "; cin>>ulang2;
		sleep(2);
		system("cls");
	}while(ulang2!='t');
		cout<<endl<<endl<<endl<<endl;
		cout<<"\t\t\t\t\t\t---------------------------------------------------------------------------------"<<endl;
		cout<<"\t\t\t\t\t\t| HARAP TUNGGU SEBENTAR, ANDA AKAN DIALIHKAN KE HALAMAN OPSI PEMBAYARAN.        -"<<endl;
		cout<<"\t\t\t\t\t\t---------------------------------------------------------------------------------"<<endl;
		sleep(2);
		system("cls");
		
		cout<<endl<<endl<<endl<<endl;
		cout<<"\t\t\t\t\t\t=============================================================================="<<endl;
		cout<<"\t\t\t\t\t\t=                      M I R A G I' S    C H I C K E N                       ="<<endl;
		cout<<"\t\t\t\t\t\t=                     MIRAGI, Restoran Ayam Khas Korea!                      ="<<endl;
		cout<<"\t\t\t\t\t\t=                            Hubungi 021-022020                              ="<<endl;
		cout<<"\t\t\t\t\t\t=============================================================================="<<endl;
		cout<<"\t\t\t\t\t\t=                       OPSI PEMBAYARAN YANG TERSEDIA                        ="<<endl;
		cout<<"\t\t\t\t\t\t=============================================================================="<<endl;
		cout<<"\t\t\t\t\t\t= 1. UANG TUNAI                                                              ="<<endl;
		cout<<"\t\t\t\t\t\t= 2. DEBIT                                                                   ="<<endl;
		cout<<"\t\t\t\t\t\t= 3. E-WALLET (OVO)                                                          ="<<endl;
		cout<<"\t\t\t\t\t\t=============================================================================="<<endl;
		cout<<"\t\t\t\t\t\t= Masukkan opsi pembayaran anda = ";	cin>>pilih2[opsi_pembayaran];
	    
	    	if (pilih2[opsi_pembayaran]<=3){
	    		switch(pilih2[opsi_pembayaran]){
					case 1: opsi1[opsi_pembayaran]="PEMBAYARAN TUNAI "; break;
					case 2: opsi1[opsi_pembayaran]="PEMBAYARAN DEBIT "; break;
					case 3: opsi1[opsi_pembayaran]="PEMBAYARAN E-WALLET "; break;
					default: cout<<"PILIHAN TIDAK TERSEDIA ."<<endl; break;
					}	
				cout<<"\t\t\t\t\t\t| Anda memilih: "<<opsi1[opsi_pembayaran]; 
				cout<<endl;
				}
		sleep(2);
		system("cls");
		
		if(pilih2[opsi_pembayaran]==1){
			cout<<endl<<endl<<endl<<endl;
			cout<<"\t\t\t\t\t\t=============================================================================="<<endl;
			cout<<"\t\t\t\t\t\t=                      M I R A G I' S    C H I C K E N                       ="<<endl;
			cout<<"\t\t\t\t\t\t=                     MIRAGI, Restoran Ayam Khas Korea!                      ="<<endl;
			cout<<"\t\t\t\t\t\t=                            Hubungi 021-022020                              ="<<endl;
			cout<<"\t\t\t\t\t\t=============================================================================="<<endl;
			cout<<"\t\t\t\t\t\t=                          OPSI PEMBAYARAN TUNAI                             ="<<endl;
			cout<<"\t\t\t\t\t\t=============================================================================="<<endl;
			cout<<"\t\t\t\t\t\t= Nama Pemesan = "<<nama<<endl;
			cout<<"\t\t\t\t\t\t= Pesanan Untuk = "<<opsi[opsi_order]<<endl;
			cout<<"\t\t\t\t\t\t= Opsi Pembayaran = "<<opsi1[opsi_pembayaran]<<endl<<endl;			
			cout<<"\t\t\t\t\t\t--------------------------------------------------------------------------------"<<endl;	
			cout<<"\t\t\t\t\t\t\t                 NOTA PEMBELIAN MIRAGI'S CHICKEN                    "<<endl;
			cout<<"\t\t\t\t\t\t--------------------------------------------------------------------------------"<<endl;
			cout<<"\t\t\t\t\t\tNO	NAMA MENU    	            	HARGA	        JUMLAH         SUB TOTAL "<<endl;
			cout<<"\t\t\t\t\t\t--------------------------------------------------------------------------------"<<endl;
			for (int a=0;a<pembelian;a++){
			  cout<<"\t\t\t\t\t\t";cout<<a+1<<"      	"<<menu[a]<<"      	"<<harga[a]<<"	 	"<<jumlah[a]<<"	    	"<<subtotal[a]<<endl;
			}
		
			cout<<"\t\t\t\t\t\t---------------------------------------------------------------------------------"<<endl;
			cout<<"\t\t\t\t\t\t| PPN (10%)                            = Rp."<<PPN<<endl;
			cout<<"\t\t\t\t\t\t| PB1 (5%)                             = Rp."<<PB1<<endl;
			cout<<"\t\t\t\t\t\t| TOTAL YANG HARUS ANDA BAYAR          = Rp."<<totalbayar<<endl;
			cout<<"\t\t\t\t\t\t---------------------------------------------------------------------------------"<<endl;
			cout<<"\t\t\t\t\t\t| Nominal uang anda                    = Rp. "; cin>>uang_bayar;
			sleep(3);
			system("cls");
			}
			
		if(pilih2[opsi_pembayaran]==2){
			cout<<endl<<endl<<endl<<endl;
			cout<<"\t\t\t\t\t\t=============================================================================="<<endl;
			cout<<"\t\t\t\t\t\t=                      M I R A G I' S    C H I C K E N                       ="<<endl;
			cout<<"\t\t\t\t\t\t=                     MIRAGI, Restoran Ayam Khas Korea!                      ="<<endl;
			cout<<"\t\t\t\t\t\t=                            Hubungi 021-022020                              ="<<endl;
			cout<<"\t\t\t\t\t\t=============================================================================="<<endl;
			cout<<"\t\t\t\t\t\t=                          OPSI PEMBAYARAN DEBIT                             ="<<endl;
			cout<<"\t\t\t\t\t\t=============================================================================="<<endl;
			cout<<"\t\t\t\t\t\t= Nama Pemesan = "<<nama<<endl;
			cout<<"\t\t\t\t\t\t= Pesanan Untuk = "<<opsi[opsi_order]<<endl;
			cout<<"\t\t\t\t\t\t= Opsi Pembayaran = "<<opsi1[opsi_pembayaran]<<endl<<endl;
			cout<<"\t\t\t\t\t\t--------------------------------------------------------------------------------"<<endl;	
			cout<<"\t\t\t\t\t\t\t                 NOTA PEMBELIAN MIRAGI'S CHICKEN                    "<<endl;
			cout<<"\t\t\t\t\t\t--------------------------------------------------------------------------------"<<endl;
			cout<<"\t\t\t\t\t\tNO	NAMA MENU    	            	HARGA	        JUMLAH         SUB TOTAL "<<endl;
			cout<<"\t\t\t\t\t\t--------------------------------------------------------------------------------"<<endl;
			for (int a=0;a<pembelian;a++){
			  cout<<"\t\t\t\t\t\t";cout<<a+1<<"      	"<<menu[a]<<"      	"<<harga[a]<<"	 	"<<jumlah[a]<<"	    	"<<subtotal[a]<<endl;
			}
			cout<<"\t\t\t\t\t\t---------------------------------------------------------------------------------"<<endl;
			cout<<"\t\t\t\t\t\t---------------------------------------------------------------------------------"<<endl;
			cout<<"\t\t\t\t\t\t| HARAP BERIKAN KARTU DEBIT YANG INGIN ANDA GUNAKAN PADA PELAYAN KASIR KAMI.     "<<endl;
			cout<<"\t\t\t\t\t\t| PELAYAN AKAN MELETAKKAN KARTU DI MESIN EDC DAN MEMASUKKAN NOMINAL YANG TERTERA."<<endl;
			cout<<"\t\t\t\t\t\t---------------------------------------------------------------------------------"<<endl;
			cout<<"\t\t\t\t\t\t---------------------------------------------------------------------------------"<<endl;
			cout<<"\t\t\t\t\t\t| PPN (10%)                            = Rp."<<PPN<<endl;
			cout<<"\t\t\t\t\t\t| PB1 (5%)                             = Rp."<<PB1<<endl;
			cout<<"\t\t\t\t\t\t| TOTAL YANG HARUS ANDA BAYAR          = Rp."<<totalbayar<<endl;
			cout<<"\t\t\t\t\t\t---------------------------------------------------------------------------------"<<endl;
			cout<<"\t\t\t\t\t\t| NOMINAL BAYAR (DIINPUT KASIR)        = Rp. "; cin>>uang_bayar;
			cout<<"\t\t\t\t\t\t| MASUKKAN PIN KARTU DEBIT ANDA PADA MESIN EDC YANG TELAH DIBERIKAN              "<<endl;
			cout<<"\t\t\t\t\t\t| PIN ANDA: "; cin>>pin_pembayaran;
			sleep(3);
			system("cls");
			cout<<endl;
			cout<<"\t\t\t\t\t\t| PEMBAYARAN DEBIT ANDA TELAH TERKONFIRMASI OLEH SISTEM KAMI."<<endl;
			cout<<"\t\t\t\t\t\t| PEMBAYARAN BERHASIL. TERIMA KASIH."<<endl;	
			}
			
		if(pilih2[opsi_pembayaran]==3){
			cout<<endl<<endl<<endl<<endl;
			cout<<"\t\t\t\t\t\t=============================================================================="<<endl;
			cout<<"\t\t\t\t\t\t=                      M I R A G I' S    C H I C K E N                       ="<<endl;
			cout<<"\t\t\t\t\t\t=                     MIRAGI, Restoran Ayam Khas Korea!                      ="<<endl;
			cout<<"\t\t\t\t\t\t=                            Hubungi 021-022020                              ="<<endl;
			cout<<"\t\t\t\t\t\t=============================================================================="<<endl;
			cout<<"\t\t\t\t\t\t=                         OPSI PEMBAYARAN E-WALLET                           ="<<endl;
			cout<<"\t\t\t\t\t\t=============================================================================="<<endl;
			cout<<"\t\t\t\t\t\t= Nama Pemesan = "<<nama<<endl;
			cout<<"\t\t\t\t\t\t= Pesanan Untuk = "<<opsi[opsi_order]<<endl;
			cout<<"\t\t\t\t\t\t= Opsi Pembayaran = "<<opsi1[opsi_pembayaran]<<endl<<endl;
			cout<<"\t\t\t\t\t\t--------------------------------------------------------------------------------"<<endl;	
			cout<<"\t\t\t\t\t\t\t                 NOTA PEMBELIAN MIRAGI'S CHICKEN                    "<<endl;
			cout<<"\t\t\t\t\t\t--------------------------------------------------------------------------------"<<endl;
			cout<<"\t\t\t\t\t\tNO	NAMA MENU    	            	HARGA	        JUMLAH         SUB TOTAL "<<endl;
			cout<<"\t\t\t\t\t\t--------------------------------------------------------------------------------"<<endl;
			for (int a=0;a<pembelian;a++){
			  cout<<"\t\t\t\t\t\t";cout<<a+1<<"      	"<<menu[a]<<"      	"<<harga[a]<<"	 	"<<jumlah[a]<<"	    	"<<subtotal[a]<<endl;
			}
			cout<<"\t\t\t\t\t\t---------------------------------------------------------------------------------"<<endl;
			cout<<"\t\t\t\t\t\t| HARAP MELAKUKAN TRANSFER KE OVO A/N MIRAGI DENGAN NOMOR 393580818765122.       "<<endl;
			cout<<"\t\t\t\t\t\t| KASIR KAMI AKAN MENGECEK PEMBAYARAN ANDA.                                      "<<endl;
			cout<<"\t\t\t\t\t\t---------------------------------------------------------------------------------"<<endl;
			cout<<"\t\t\t\t\t\t| PPN (10%)                            = Rp."<<PPN<<endl;
			cout<<"\t\t\t\t\t\t| PB1 (5%)                             = Rp."<<PB1<<endl;
			cout<<"\t\t\t\t\t\t| TOTAL YANG HARUS ANDA BAYAR          = Rp."<<totalbayar<<endl;
			cout<<"\t\t\t\t\t\t---------------------------------------------------------------------------------"<<endl;
			cout<<"\t\t\t\t\t\t| SILAHKAN MELAKUKAN TRANSFER. KAMI AKAN MENUNGGU HINGGA PEMBAYARAN BERHASIL.    "<<endl;
			cout<<"\t\t\t\t\t\t| INPUT NOMINAL TRANSFER               = Rp. "; cin>>uang_bayar;
			sleep(3);
			system("cls");
			cout<<endl;
			cout<<"\t\t\t\t\t\t| PEMBAYARAN E-WALLET ANDA SUDAH TERKONFIRMASI OLEH SISTEM KAMI."<<endl;
			cout<<"\t\t\t\t\t\t| PEMBAYARAN BERHASIL. TERIMA KASIH."<<endl;
		}
		
		if(uang_bayar<totalbayar){
			cout<<endl<<endl<<endl<<endl;
			cout<<"\t\t\t\t\t\t=============================================================================="<<endl;
			cout<<"\t\t\t\t\t\t=                      M I R A G I' S    C H I C K E N                       ="<<endl;
			cout<<"\t\t\t\t\t\t=                     MIRAGI, Restoran Ayam Khas Korea!                      ="<<endl;
			cout<<"\t\t\t\t\t\t=                            Hubungi 021-022020                              ="<<endl;
			cout<<"\t\t\t\t\t\t=============================================================================="<<endl;
			cout<<"\t\t\t\t\t\t=                   PEMBAYARAN PESANAN BELUM TERKONFIRMASI                   ="<<endl;
			cout<<"\t\t\t\t\t\t=============================================================================="<<endl;
			cout<<"\t\t\t\t\t\t=                       Mohon maaf, uang anda kurang.                        ="<<endl;
			cout<<"\t\t\t\t\t\t=            Harap melakukan pembayaran sesuai nominal yang tertera.         ="<<endl;
			cout<<"\t\t\t\t\t\t=                              Terima kasih.                                 ="<<endl;
			cout<<"\t\t\t\t\t\t=============================================================================="<<endl;
			cout<<"\t\t\t\t\t\t= Uang anda kurang   = Rp."<<(uang_bayar-(totalbayar))<<endl;
			cout<<"\t\t\t\t\t\t= TEKAN 0 BILA TIDAK INGIN MENGULANG PEMBAYARAN                              ="<<endl;
			cout<<"\t\t\t\t\t\t= TEKAN 1 BILA INGIN MENGULANG PEMBAYARAN                                    ="<<endl;
			cout<<"\t\t\t\t\t\t= Masukkan pilihan anda: "; cin>>ulang;
			sleep(2);
			
			if(ulang==0){
				cout<<endl<<endl<<endl<<endl;
				cout<<"\t\t\t\t\t\t=============================================================================="<<endl;
				cout<<"\t\t\t\t\t\t=                      M I R A G I' S    C H I C K E N                       ="<<endl;
				cout<<"\t\t\t\t\t\t=                     MIRAGI, Restoran Ayam Khas Korea!                      ="<<endl;
				cout<<"\t\t\t\t\t\t=                            Hubungi 021-022020                              ="<<endl;
				cout<<"\t\t\t\t\t\t=============================================================================="<<endl;
				cout<<"\t\t\t\t\t\t=                         PEMBAYARAN PESANAN GAGAL                           ="<<endl;
				cout<<"\t\t\t\t\t\t=============================================================================="<<endl;
				cout<<"\t\t\t\t\t\t=                    Mohon maaf, pembayaran anda gagal.                      ="<<endl;
				cout<<"\t\t\t\t\t\t=                    Nominal yang anda masukkan kurang.                      ="<<endl;
				cout<<"\t\t\t\t\t\t=      Anda menolak untuk melakukan pembayaran dengan nominal yang sesuai.   ="<<endl;
				cout<<"\t\t\t\t\t\t=          Pesanan anda gagal dan akan terhapus dari sistem kami.            ="<<endl;
				cout<<"\t\t\t\t\t\t=                              Terima kasih.                                 ="<<endl;
				cout<<"\t\t\t\t\t\t=============================================================================="<<endl;	
			}
			
			else if(ulang==1){
				cout<<endl<<endl<<endl<<endl;
				cout<<"\t\t\t\t\t\t--------------------------------------------------------------------------------"<<endl;
				cout<<"\t\t\t\t\t\t\t                 NOTA PEMBELIAN MIRAGI'S CHICKEN                    "<<endl;
				cout<<"\t\t\t\t\t\t--------------------------------------------------------------------------------"<<endl;
				cout<<"\t\t\t\t\t\tNO	NAMA MENU    	            	HARGA	        JUMLAH         SUB TOTAL "<<endl;
				cout<<"\t\t\t\t\t\t--------------------------------------------------------------------------------"<<endl;
				for (int a=0;a<pembelian;a++){
					  cout<<"\t\t\t\t\t\t";cout<<a+1<<"      	"<<menu[a]<<"      	"<<harga[a]<<"	 	"<<jumlah[a]<<"	    	"<<subtotal[a]<<endl;
					}
				
				cout<<"\t\t\t\t\t\t---------------------------------------------------------------------------------"<<endl;
				cout<<"\t\t\t\t\t\t| PPN (10%)                            = Rp."<<PPN<<endl;
				cout<<"\t\t\t\t\t\t| PB1 (5%)                             = Rp."<<PB1<<endl;
				cout<<"\t\t\t\t\t\t| TOTAL YANG HARUS ANDA BAYAR          = Rp."<<totalbayar<<endl;
				cout<<"\t\t\t\t\t\t---------------------------------------------------------------------------------"<<endl;
			}
			else{
				cout<<endl;
				cout<<"\t\t\t\t\t\t PILIHAN TIDAK TERSEDIA."<<endl;
			}
		}
		sleep(3);
		system("cls");	
		if(uang_bayar>=totalbayar){
			cout<<endl<<endl<<endl<<endl;
			cout<<"\t\t\t\t\t\t=============================================================================="<<endl;
			cout<<"\t\t\t\t\t\t=                      M I R A G I' S    C H I C K E N                       ="<<endl;
			cout<<"\t\t\t\t\t\t=                     MIRAGI, Restoran Ayam Khas Korea!                      ="<<endl;
			cout<<"\t\t\t\t\t\t=                            Hubungi 021-022020                              ="<<endl;
			cout<<"\t\t\t\t\t\t=============================================================================="<<endl;
			cout<<"\t\t\t\t\t\t=                       PEMBAYARAN PESANAN TERKONFIRMASI                     ="<<endl;
			cout<<"\t\t\t\t\t\t=============================================================================="<<endl;
			cout<<"\t\t\t\t\t\t=                             PEMBAYARAN BERHASIL.                           ="<<endl;
			cout<<"\t\t\t\t\t\t=            PEMBAYARAN TERKONFIRMASI PADA: "<<time;
			cout<<"\t\t\t\t\t\t------------------------------------------------------------------------------"<<endl;
			cout<<"\t\t\t\t\t\t=                         KEMBALIAN ANDA = Rp."<<(uang_bayar-(totalbayar));cout<<endl;
			cout<<"\t\t\t\t\t\t------------------------------------------------------------------------------"<<endl;
			cout<<endl<<endl;
			cout<<"\t\t\t\t\t\t------------------------------------------------------------------------------"<<endl;
			cout<<"\t\t\t\t\t\t=                 PESANAN ANDA TELAH MASUK KEDALAM SISTEM KAMI.              ="<<endl;
			cout<<"\t\t\t\t\t\t=       HARAP TUNGGU SEBENTAR, ANDA AKAN DIALIHKAN KE HALAMAN SELANJUTNYA    ="<<endl;
			cout<<"\t\t\t\t\t\t=                              TERIMA KASIH.                                 ="<<endl;
			cout<<"\t\t\t\t\t\t=============================================================================="<<endl;
			sleep(8);
			system("cls");
		}
		if(pilih1[opsi_order]==1){
			cout<<endl<<endl<<endl<<endl;
			cout<<"\t\t\t\t\t\t=============================================================================="<<endl;
			cout<<"\t\t\t\t\t\t=                      M I R A G I' S    C H I C K E N                       ="<<endl;
			cout<<"\t\t\t\t\t\t=                     MIRAGI, Restoran Ayam Khas Korea!                      ="<<endl;
			cout<<"\t\t\t\t\t\t=                            Hubungi 021-022020                              ="<<endl;
			cout<<"\t\t\t\t\t\t=============================================================================="<<endl;
			cout<<"\t\t\t\t\t\t=                BAGIAN PEMILIHAN NOMOR MEJA (KHUSUS DINE IN)                ="<<endl;
			cout<<"\t\t\t\t\t\t=============================================================================="<<endl;
			cout<<"\t\t\t\t\t\t= PANDUAN:                                                                   ="<<endl;
			cout<<"\t\t\t\t\t\t= 1.) MEJA DENGAN NOMOR 1-8 MEMILIKI 2 KURSI TERSEDIA DI TIAP MEJA.          ="<<endl;
			cout<<"\t\t\t\t\t\t= 2.) MEJA DENGAN NOMOR 9-20 MEMILIKI 4 KURSI TERSEDIA DI TIAP MEJA.         ="<<endl;
			cout<<"\t\t\t\t\t\t= 3.) MEJA DENGAN NOMOR 21-28 MEMILIKI 6 KURSI TERSEDIA DI TIAP MEJA.        ="<<endl;
			cout<<"\t\t\t\t\t\t= 4.) MEJA DENGAN NOMOR 29-30 MEMILIKI 12 KURSI TERSEDIA DI TIAP MEJA        ="<<endl;
			cout<<"\t\t\t\t\t\t=============================================================================="<<endl;
			cout<<"\t\t\t\t\t\t| Masukkan nomor meja yang anda pilih = "; cin>>pilihmeja;
			cout<<"\t\t\t\t\t\t------------------------------------------------------------------------------"<<endl;
			if(pilihmeja>=1 && pilihmeja<=8){
				cout<<"\t\t\t\t\t\t| Anda memilih meja dengan 2 kursi."<<endl;
			}
			else if(pilihmeja>=9 && pilihmeja<=20){
				cout<<"\t\t\t\t\t\t| Anda memilih meja dengan 4 kursi."<<endl;
			}
			else if(pilihmeja>=21 && pilihmeja<=28){
				cout<<"\t\t\t\t\t\t| Anda memilih meja dengan 6 kursi."<<endl;
			}
			else if(pilihmeja>=29 && pilihmeja<=30){
				cout<<"\t\t\t\t\t\t| Anda memilih meja dengan 12 kursi."<<endl;
			}
			else{
				cout<<"\t\t\t\t\t\t| Pilihan tidak tersedia.";
			}
			cout<<"\t\t\t\t\t\t------------------------------------------------------------------------------"<<endl;
			cout<<"\t\t\t\t\t\t| Anda memilih meja dengan nomor "<<pilihmeja<<". Meja tersebut tersedia."<<endl;
			cout<<"\t\t\t\t\t\t| Harap tunggu sebentar, anda akan mendapatkan nomor antrian."<<endl;
			cout<<"\t\t\t\t\t\t------------------------------------------------------------------------------"<<endl<<endl;
			sleep(6);
			system("cls");
			
			cout<<endl<<endl<<endl<<endl;
			nomorantrian=(pilihmeja+2);
			cout<<"\t\t\t\t\t\t=============================================================================="<<endl;
			cout<<"\t\t\t\t\t\t=                      M I R A G I' S    C H I C K E N                       ="<<endl;
			cout<<"\t\t\t\t\t\t=                     MIRAGI, Restoran Ayam Khas Korea!                      ="<<endl;
			cout<<"\t\t\t\t\t\t=                            Hubungi 021-022020                              ="<<endl;
			cout<<"\t\t\t\t\t\t=============================================================================="<<endl;
			cout<<"\t\t\t\t\t\t=                        NOMOR ANTRIAN PESANAN ANDA                          ="<<endl;
			cout<<"\t\t\t\t\t\t=============================================================================="<<endl;
			cout<<"\t\t\t\t\t\t= Nama Pemesan = "<<nama<<endl;
			cout<<"\t\t\t\t\t\t= Pesanan Untuk = "<<opsi[opsi_order]<<endl;
			cout<<"\t\t\t\t\t\t= Status Pembayaran = Terkonfirmasi."<<endl;
			cout<<"\t\t\t\t\t\t= Nomor Meja = "<<pilihmeja<<endl;
			cout<<"\t\t\t\t\t\t= Nomor Antrian = "<<nomorantrian<<endl<<endl;
			
			cout<<"\t\t\t\t\t\t--------------------------------------------------------------------------------"<<endl;	
			cout<<"\t\t\t\t\t\t\t                 NOTA PEMBELIAN MIRAGI'S CHICKEN                    "<<endl;
			cout<<"\t\t\t\t\t\t--------------------------------------------------------------------------------"<<endl;
			cout<<"\t\t\t\t\t\tNO	NAMA MENU    	            	HARGA	        JUMLAH         SUB TOTAL "<<endl;
			cout<<"\t\t\t\t\t\t--------------------------------------------------------------------------------"<<endl;
			for (int a=0;a<pembelian;a++){
			  cout<<"\t\t\t\t\t\t";cout<<a+1<<"      	"<<menu[a]<<"      	"<<harga[a]<<"	 	"<<jumlah[a]<<"	    	"<<subtotal[a]<<endl;
			}
		
			cout<<"\t\t\t\t\t\t---------------------------------------------------------------------------------"<<endl;
			cout<<"\t\t\t\t\t\t| TOTAL YANG TELAH ANDA BAYAR          = Rp."<<totalbayar<<endl;
			cout<<"\t\t\t\t\t\t---------------------------------------------------------------------------------"<<endl<<endl<<endl;
			cout<<"\t\t\t\t\t\t---------------------------------------------------------------------------------"<<endl;
			cout<<"\t\t\t\t\t\t= Pesanan dengan nomor antrian "<<nomorantrian<<" akan diantar ke meja "<<pilihmeja<<" dalam 15 menit."<<endl;
		}
		cout<<"\t\t\t\t\t\t= Terima kasih telah melakukan pemesanan makanan di M I R A G I'S  C H I C K E N"<<endl;
		cout<<"\t\t\t\t\t\t---------------------------------------------------------------------------------"<<endl;
		cout<<endl<<endl<<endl;
		cout<<"\t\t\t\t\t\t\t\t MIRAGI'S CHICKEN, Restoran Ayam Khas Korea!"<<endl;
	
    return 0;
    
}
