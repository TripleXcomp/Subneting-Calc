// Author = Sulthan Agung Mufli
// compiler = Dev C++


#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;

int main() {
	int prefix, subnet, mask, broad, pangkat, pilihan;
	unsigned int range,host;
	short int akhir;
	short int x=0;
	
	awal :
		system("color A");
		printf("############################################################ \n");
		printf("##                   PROGRAM SUBNETING                    ## \n");
		printf("##                                                        ## \n");
		printf("##                                                        ## \n");
		printf("##                                         Sulthan Agung  ## \n");
		printf("############################################################ \n");
		
		cout<<endl;
		
		pertama :
		cout << "Masukkan nilai prefix (8-30) : ";
		cin >> prefix;
		
		if (prefix>=31 || prefix>=32 || prefix==0 || prefix<8)
		{
			cout<<"Maaf, Prefix /"<<prefix <<" tidak bisa dikategorikan sebagai jaringan"<<endl<<endl;
			goto pertama;
			
		// Kelas  C	
		} else if (prefix <=30 && prefix>=24) {
 
		    pangkat = 32 - prefix;
		    subnet = pow (2, pangkat);
		    mask = 256 - subnet;
		 
		    cout << endl << "Maka subnet mask dari prefix /" << prefix <<" adalah 255.255.255." << mask << endl;
		    cout << "Total IP adalah " << subnet << " IP" << endl;
		    host = subnet - 2;
		    cout << "Jumlah host yang bisa digunakan adalah " << host << " IP" << endl << endl;
		    system("pause");
		    
		    cout << "Range networknya adalah : " << endl;
		 
	    do {
	        cout << "192.168.1." << x ;
	        x = x + subnet;
	        broad = x - 1;
	        cout << " - 192.168.1." << broad << endl;
	    } while (x<=255);
	    system("pause");
	 
	    cout << endl << "IP yang bisa dipakai adalah : " << endl;
	 
	    short int y=1;
	    do {
	        cout << "192.168.1." << y;
	        y = y + subnet;
	        akhir = y - 3;
	        cout << " - 192.168.1." << akhir << endl;
	    } while (y<255);
	    system("pause");
	    
	    // Kelas B
		} else if (prefix <24 && prefix >=16) {
 
		    pangkat = 24 - prefix;
		    subnet = pow (2, pangkat);
		    mask = 256 - subnet;
		 
		    cout << "\nMaka subnet mask dari prefix /" << prefix << " adalah 255.255." << mask << ".0" << endl;
		    range = pow (2, (32 - prefix));
		    cout << "Total IP adalah " << range << " IP" << endl;
		    host = (pow (2, (32 - prefix))) - 2;
		    cout << "Jumlah host yang bisa digunakan adalah " << host << " IP" << endl << endl;
		    system("pause");
		    cout << "Range networknya adalah : " << endl;
		 
		do {
		    cout << "172.16." << x << ".0";
		    x = x + subnet;
		    broad = x - 1;
		    cout << " - 172.16." << broad << ".255" << endl;
		} while (x<=255);
		    system("pause");
		 
		    cout << endl << "IP yang bisa dipakai adalah : " << endl;
		 
		    short int y=0;
		do {
		    cout << "172.16." << y << ".1";
		    y = y + subnet;
		    akhir = y - 1;
		    cout << " - 172.16." << akhir << ".254" << endl;
		} while (y<255);
		system("pause");
		 
		 // Kelas A
		} else if (prefix <16 && prefix >=8) {
 
		    pangkat = 16 - prefix;
		    subnet = pow (2, pangkat);
		    mask = 256 - subnet;
		 
		    cout << "\nMaka subnet mask dari prefix /" << prefix << " adalah 255." << mask << ".0.0" << endl;
		    range = pow (2, (32 - prefix));
		    cout << "Total IP adalah " << range << " IP" << endl;
		    host = (pow (2, (32 - prefix))) - 2;
		    cout << "Jumlah host yang bisa digunakan adalah " << host << " IP" << endl << endl;
		    system("pause");
		    cout << "Range networknya adalah : " << endl;
 
	    do {
	        cout << "10." << x << ".0.0";
	        x = x + subnet;
	        broad = x - 1;
	        cout << " - 10." << broad << ".255.255" << endl;
	    } while (x<=255);
	    system("pause");
 
	    cout << endl << "IP yang bisa dipakai adalah : " << endl;
	 
	    short int y=0;
	    do {
	        cout << "10." << y << ".0.1";
	        y = y + subnet;
	        akhir = y - 1;
	        cout << " - 10." << akhir << ".255.254" << endl;
	    } while (y<255);
 
	system("pause");
	}
	
	system("cls");
	goto awal;
	
}
