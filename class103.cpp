// a c++ program that calculate 
// the entered number
// is a prime number or not

#include  <iostream>
using namespace std;
int main()
{
   unsigned int number ;
   bool isPrime = true;
   // entering a number 
   cout<<"Enter a number(bigger than 2): ";
   cin>>number;

//finding wheter the number is prime or not 
 for ( int i=2 ; i< number ; i++)
        if ( number % i == 0 )
          { isPrime = false;
            break;
          }
// writing the output      
if ( isPrime == true  )
    cout << number << " is a prime number." << endl;
else
    cout << number << " is not a prime number." << endl;



            
        
   /*for (int i = 5; i <= 20; i+=2) {
       cout <<  i <<  endl;
   }
   return 0;
   */
}
