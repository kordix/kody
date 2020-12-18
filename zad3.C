#include <iostream>    
#include <cmath>
    




int main(void){
  float c;

      for(int a=1;a<400;a++){
            for(int b=1;b<400;b++){

                int c = sqrt(pow(a,2) + pow(b,2));

                if (c % 1 == 0){

                    if((a + b + c) < 1000 ){
			    
			    
			    
			    std::cout << a << "," << b << "," << c << "obwod" << a + b + c;
			    
			    std::cout << "\n";

                    }
                }
        
        
        }

        }
return 0;
}

