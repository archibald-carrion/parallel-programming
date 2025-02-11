# Process vs Threads

## **Processes vs. Threads:**
1. **Processes**  
   - A process is an independent program in execution.
   - Each process has its own memory space (address space), meaning data is not shared between processes unless explicitly done (e.g., using IPC - Inter-Process Communication).
   - Processes are managed by the operating system, and context switching between them is relatively expensive.
   - Each process has its own resources, such as file descriptors, heap, and stack.

2. **Threads**  
   - A thread is a lightweight subunit of a process.
   - Threads within the same process share the same memory space, allowing easy data sharing.
   - Since they share resources, communication between threads is faster than between processes.
   - However, improper synchronization can lead to **race conditions**, where multiple threads try to access and modify shared data simultaneously.

---

### Process Example
`process_example.cpp` demonstrates process creation using `fork()`. The parent creates a child process and waits for it to complete.

### Thread Example
`thread_example.cpp` demonstrates thread creation using `std::thread`. Two threads are spawned and executed concurrently.


## Build and Run
To compile and run the examples:
```sh
make
./build/process_example
./build/thread_example
```
To clean up:
```sh
make clean
```

## **Key Differences:**
| Feature      | Processes (`fork()`) | Threads (`std::thread`) |
|-------------|----------------------|-------------------------|
| Memory      | Separate for each process | Shared among threads |
| Communication | Uses IPC (pipes, message queues, etc.) | Direct (shared memory) |
| Creation Overhead | High (copying memory, initializing resources) | Low (lightweight, fast) |
| Performance | More overhead due to context switching | Faster due to shared resources |
| Isolation | Processes are independent | Threads affect each other |