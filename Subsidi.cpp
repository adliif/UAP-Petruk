#include <iostream>
#include <queue.h>
using namespace std;

	void Subsidi(){
		queue <int> Q;
		int q, i;
	
		while(1){
			cout<<"<<========================================>>"<<endl;
			cout<<"||    1. Jumlah antrian sembako           ||"<<endl;
			cout<<"||    2. Masukkan data warga ke antrian   ||"<<endl;
			cout<<"||    3. Hapus data warga dari antrian    ||"<<endl;
			cout<<"||    4. Exit                             ||"<<endl;
			cout<<"<<========================================>>"<<endl;
			cout<<endl;
			cout<<"Masukkan pilihan anda : ";cin>>q;
			system("cls");
			
			switch(q){
				case 1 : cout<<"Jumlah antrian : "<<Q.size()<<endl;
				break;
				
				case 2 : cout<<"Masukkan data  : ";cin>>i; Q.push(i);
				break;
				
				case 3 : i = Q.front();
						 Q.pop();
						 cout<<"Data "<<i<<" sudah dihapus"<<endl;
				break;
				
				case 4 : exit(1);
				break;
				
				default : cout<<"Pilihan anda salah"<<endl;
			}
		}
	}

int main(){
	
	Subsidi();
	
return 0;}
