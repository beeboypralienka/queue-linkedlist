#include<iostream>
#include "Queue.h"
using namespace std;

void menu(){
	cout<<"\n Queue Linked-List\n";
	cout<<"1. Enqueue\n2. Dequeue\n3. Display\n4. Quit";
}

int main(){
    Queue queue;
    char choice;        
    menu();
    while(true){
    	do{					
	        cout<<"\n\nMasukkan salah satu pilihan di atas: ";
	        cin>>choice;
	        if(choice=='1'){	        	
				queue.enqueue();
				system("cls");
				menu();
			}else if(choice=='2'){				
				system("cls");
				menu();
				queue.dequeue();				
			}else if(choice=='3'){
				system("cls");
				menu();				
				queue.display();				
			}else if(choice=='4'){
				exit(0);
			}else{
				system("cls");
				menu();
				cout<<endl<<endl<<"Maaf, pilihan tidak tersedia!"<<endl<<endl;
			}
		}
		while(
				(choice!='1')&&(choice!='2')&&(choice!='3')&&(choice!='4')
		);    
	}        		    
    return 0;
}
