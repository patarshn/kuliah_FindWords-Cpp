//1717051051 - Patar Martua Doli Siahaan
//1717051045 - Naomy Tiara Dewi
//1717051021 - Brenda Natalia

#include <iostream>
using namespace std;

//--Agar semua kata menjadi huruf kapital
char toUpper( char *word){
	int x = 'A' - 'a';
	if (x < 0) x*=-1;
	
	for (int i=0;word[i];i++){
		if ('A' < 'a'){
		if (word[i] >= 'a') word[i]-=x;}
		else{
		if (word[i] <= 'A') word[i]+=x;}
		
	}
}

//ngehitung panjang array
int longOf(char *word){
	int x;
	for (int i=0;word[i] ;i++){
		x = i;
	}	
	return x;
}

int main(){
  
  char puzzle[15][15] ={{'T','G','B','W','W','I','N','T','E','R','W','S','E','S','N'},
	                {'A','A','U','N','T','T','M','M','H','F','O','O','D','N','B'},
	                {'J','L','W','C','Q','L','D','Z','M','P','M','V','D','M','R'},
	                {'A','S','A','G','M','Q','U','W','V','V','B','S','O','H','I'},
	                {'B','W','P','L','O','T','A','N','A','D','T','P','G','N','C'},
	                {'R','E','W','N','G','O','D','J','C','P','N','A','T','N','K'},
	                {'E','E','O','T','W','O','S','B','Q','H','A','R','R','S','A'},
	                {'A','Z','C','G','E','S','W','E','W','N','A','K','N','P','B'},
	                {'D','I','N','N','E','R','Q','O','D','L','W','D','C','A','R'},
	                {'O','N','O','P','K','W','M','P','A','R','K','T','Z','C','C'},
	                {'Q','B','F','R','O','G','M','A','M','W','P','W','E','E','Y'},
	                {'L','Q','Z','Q','N','N','M','R','Z','J','J','S','C','L','G'},
	                {'M','O','S','G','Z','C','Z','D','T','D','B','O','O','T','O'},
                        {'P','D','C','R','Z','M','S','N','G','R','D','N','R','P','Z'},
	                {'O','H','N','K','Z','W','A','T','E','R','J','G','T','R','A'}};

//pemanggil puzzle//					 
for (int pb=0;pb<15;pb++){
	for (int pk=0;pk<15;pk++){
		cout<<puzzle[pb][pk]<<" ";
	}cout<<endl;
}

//input kata yang akan dicari
char word[15];
cin>>word;
toUpper(word);
longOf(word);

int banyak = 0;
	for (int pb=0;pb<15;pb++){
	for (int pk=0;pk<15;pk++){
	int ada[8] = {0,0,0,0,0,0,0,0};
		 if (puzzle[pb][pk] == word[0]){ 
			
			for(int i=1;i<=longOf(word);i++){
				if (puzzle[pb+i][pk] == word[i]) ada[0]++;
				if (puzzle[pb-i][pk] == word[i]) ada[1]++;
				if (puzzle[pb][pk+i] == word[i]) ada[2]++;
				if (puzzle[pb][pk-i] == word[i]) ada[3]++;
				if (puzzle[pb+i][pk+i] == word[i]) ada[4]++;
				if (puzzle[pb+i][pk-i] == word[i]) ada[5]++;
				if (puzzle[pb-i][pk+i] == word[i]) ada[6]++;
				if (puzzle[pb-i][pk-i] == word[i]) ada[7]++;
			}
			if (longOf(word) == 0){ 
			banyak++;
			}
			else{
			for(int l=0;l<8;l++){
			if (ada[l] == longOf(word)) {
			banyak++;
				}
			}
}
	
		}
	}
}
if (banyak > 0){
	cout<<"ada";
}
else cout<<"tidak ada";	
}
