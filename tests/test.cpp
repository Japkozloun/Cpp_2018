#include <chrono>
#include <iostream>
using namespace std;

int main(){
    using Clock = std::chrono::high_resolution_clock;
    int num = Clock::period::num;
    long int s = Clock::now().time_since_epoch().count();
    std::cout << Clock::now().time_since_epoch().count() - s << endl;
    cout << s << endl;
}