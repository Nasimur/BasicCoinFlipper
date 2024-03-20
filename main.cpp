#include <iostream> 

#include <cstdlib> 

#include <ctime> 
  
using namespace std; 
 

void CoinFlip() { //creates coinflip function,  

    if (rand() % 2 == 0) { 

        cout << "Coin landed on Heads" << endl; 

} 

else {  

    cout << "Coin landed on Tails" << endl; 

} 

} 

  

  

int main(){; 

char FlipOrExit; 

  

srand(time(0)); //actually allows the CoinFlip function to work 

  

cout << "Press \"A\" to flip a coin or press \"X\" to exit the program. \n"; 

    cin >> FlipOrExit; 

       if (FlipOrExit=='A'){  

        CoinFlip(); 

        FlipOrExit =='0'; 

        cout << endl; 

       } else if(FlipOrExit=='X'){ 

           cout << "Exited program successfully."; 

           return 0; 

       } else { 

           cout << "Program failed. Please run again. \n"; 

           return 0; 

       } 

        

       while (FlipOrExit = '0'){ 

    cout << "Would you like to flip the coin again? \nPress \"A\" to flip a coin again or press \"X\" to exit the program. \n"; 

    cin >> FlipOrExit; 

       if (FlipOrExit=='A'){  

        CoinFlip(); 

        FlipOrExit =='0'; 

        cout << endl; 

       } else if(FlipOrExit=='X'){ 

           cout << "Exited program successfully."; 

           return 0; 

       } else { 

           cout << "Program failed. Please run again. \n"; 

           return 0; 

       }   

       } 
        

return 0; 

}
