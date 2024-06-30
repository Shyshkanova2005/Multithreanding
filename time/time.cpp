#include <iostream>
#include <thread>
#include <chrono> 
using namespace std;

void longRunningTask(int n, int number) {
    for (int i = 0; i < 5; ++i) {
        cout << "Thread# " << number << std::endl;
        cout << "Thread running " << i << std::endl;
        this_thread::sleep_for(chrono::seconds(n));
      
    }
}

int main()
{
    thread t1(longRunningTask, 1, 1);
    thread t2(longRunningTask, 4, 2);
    thread t3(longRunningTask, 6, 3);

    t1.join();
    t2.join();
    t3.join();

    return 0;
}


