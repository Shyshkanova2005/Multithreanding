#include <iostream>
#include <thread>
#include <chrono> 
using namespace std;

void printMessage() {
    cout << "Hello" << endl; 
}

int sumanum() {
    int suma = 0;
    for (int i = 0; i <= 10; ++i) {
        suma += i;
    cout << "Result: " << suma<< endl;
    }
    return suma;
}
int add(int a, int b) {
    cout << "Result: " << a + b << endl;
    return a + b;
   
}



int main() {
    thread t1(printMessage);  
      
    
    thread t2(sumanum); 
 
  
    thread t3(add, 10, 10); 



    t1.join(); 
    t2.join();
    t3.join();
  

    return 0;
}
