#include <iostream>
#include <string>
using namespace std;

int main() {
	
  
  string litery;
  string napis;
  getline (cin, napis);

  litery = "abcdefghijklmnoprstuqwxyz";
  
  const char *tablicaznakow[24] = { "a", "b", "c", "d", "e","f","g","h","i","j","k","l","m","n","o","p","r","s","t","u","w","x","y","z" }
 ; 
  

int tablicawynikow[24];

for( int a = 0; a <= 24; a++ ){
         tablicawynikow[a] = 0;

}


  cout << "\n";

  for (int i=0;i<napis.length();i++){
    
  for(int j=0;j<litery.length();j++)


    if(napis[i]==litery[j]){
      tablicawynikow[j] ++;
    }


  }
  


for(int i = 1; i <= 23; i++){
cout << tablicaznakow[i] << ":" <<tablicawynikow[i] << "\n";

}


  return 0;
}


