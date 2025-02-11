/* process_vs_threads/process_example.cpp - Demonstrates process creation using fork() */
#include <iostream>
#include <unistd.h> // for fork()
#include <sys/wait.h> // for wait()

int main() {
    pid_t pid = fork();

    if (pid < 0) {
        std::cerr << "Fork failed!" << std::endl;
        return 1;
    }
    else if (pid == 0) {
        // Child process
        std::cout << "Child Process: PID = " << getpid() << ", Parent PID = " << getppid() << std::endl;
    }
    else {
        // Parent process
        std::cout << "Parent Process: PID = " << getpid() << ", Child PID = " << pid << std::endl;
        wait(NULL); // Wait for child process to finish
    }
    std::cout <<"Ending process with PID = " << getpid() << std::endl;
    return 0;
}