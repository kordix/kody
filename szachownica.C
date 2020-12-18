#include "iostream"
// demo2.C - Sample C++ program 
int main(void) 
{
int n;	
    std::cout << "Podaj wymiar szachownicy.\n";
    std::cin >> n;
    
    for(int i=0;i<n;i++){
	    
	    
	    for(int j=0;j<n;j++){
	if(i%2 == 0){
		    
		    if(j%2 == 0){
	std::cout << "o";
	}else{
		std::cout << "x";
	    }}else {
		    if(j%2 == 0){
           std::cout << "x";
		    }else{
			    std::cout << "o";
		    }
	    }

	  

	    
    }
	    std::cout << "\n";
    }

    return 0;
}
