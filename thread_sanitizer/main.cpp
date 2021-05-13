#include <thread>

int main(){

    int globalVar{};

    // data race
    std::thread t1([&globalVar]{ ++globalVar; });
    std::thread t2([&globalVar]{ ++globalVar; });

    t1.join();
    t2.join();

}