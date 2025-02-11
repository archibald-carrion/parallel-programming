/* process_vs_threads/thread_example.cpp - Demonstrates thread creation using std::thread */
#include <iostream>
#include <thread>

void threadFunction() {
    std::cout << "Thread ID: " << std::this_thread::get_id() << " is running." << std::endl;
}

int main() {
    std::thread t1(threadFunction);
    std::thread t2(threadFunction);

    t1.join();
    t2.join();

    return 0;
}
