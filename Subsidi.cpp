#include <iostream>
#include <conio.h>
#include <queue>
using namespace std;

void display(queue <string> sampel){
    cout << "\n============================================\n";
    if(sampel.empty()){
        cout << "\t    Data subsidi kosong";
    }else{
        while(!sampel.empty()){
        cout << "|" << sampel.front() << "| ";
        sampel.pop();
        }
    }
    cout << "\n============================================\n";
}

void QueueSubsidi(){
	queue <string> sampel;
	char nama[100];
    	int pil;
	
	while(true){
        	system("cls");
       		display(sampel);

		cout << "++========================================++\n"
		     << "|| [1] - Jumlah antrian subsidi           ||\n"
		     << "|| [2] - Masukkan data warga ke antrian   ||\n"
		     << "|| [3] - Hapus data warga dari antrian    ||\n"
		     << "|| [4] - Exit                             ||\n"
		     << "++========================================++\n\n" 
		     << "Masukkan pilihan anda : "; cin >> pil;
		     cout<<endl;

		switch(pil){
			case 1 : 
                		cout << "Jumlah antrian subsidi : " << sampel.size() << endl;
				getch();
				break;
				
			case 2 : 
                		cout << "Masukkan nama penerima subsidi  : "; cin.ignore(1, '\n'); gets(nama); sampel.push(nama);
                 		cout << "\nAtas nama " << nama << " telah ditambahkan ke dalam antrian\n";
		        	getch();
				break;
		
			case 3 : 
                 		if(!sampel.empty()){
	  	        		cout << "\nSubsidi atas nama " << sampel.front() << " sudah diambil\n";
					sampel.pop();
                		}else {
                    			cout << "Data penerima subsidi Kosong\n";
                		}
				getch();
				break;

			case 4 : 
                		cout << "Terima kasih\n";
                		exit(1);
				getch();
				break;

			default : 
                		cout << "Pilihan anda salah\n";
                		getch();
	      	}
	}
}

int main(){
	
    QueueSubsidi();
	
}
