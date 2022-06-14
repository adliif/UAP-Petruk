#include <iostream>
#include <conio.h>
#include <queue>
using namespace std;

void display(queue <string> sampel){
    cout << "\n============================================\n";
    if(sampel.empty()){
        cout << "\t\t Data kosong";
    }else{
        while(!sampel.empty()){
        cout << " |" << sampel.front() << "| ";
        sampel.pop();
        }
    }
    cout << "\n============================================\n";
}

void Subsidi(){
	queue <string> sampel;
	string nama;
    	int pilihan;
	
	while(true){
        	system("cls");
       		display(sampel);

		cout << "++========================================++\n"
		     << "||   [1] Jumlah antrian sembako           ||\n"
		     << "||   [2] Masukkan data warga ke antrian   ||\n"
		     << "||   [3] Hapus data warga dari antrian    ||\n"
		     << "||   [4] Exit                             ||\n"
		     << "++========================================++\n\n" 
		     << "Masukkan pilihan anda : "; cin >> pilihan;

		switch(pilihan){
			case 1 : 
                		cout << "Jumlah antrian : " << sampel.size() << endl;
				getch(); break;
				
			case 2 : 
                		cout << "Masukkan data  : "; cin >> nama; sampel.push(nama);
                 		cout << "\nAtas nama " << nama << " telah ditambahkan ke dalam antrian\n";
		        	getch(); break;
		
			case 3 : 
                 		if(!sampel.empty()){
                    			sampel.pop();
	  	        		cout << "\nSubsidi atas nama " << nama << " sudah diambil\n";
                		}else {
                    			cout << "Data Kosong\n";
                		}
				getch(); break;

			case 4 : 
                		cout << "Terima kasih\n";
                		exit(1);
				getch(); break;

			default : 
                		cout << "Pilihan anda salah\n";
                		getch();
	      	}
	}
}

int main(){
	
    Subsidi();
	
}
