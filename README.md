# Parallel Programming Algorithms and Implementations

A comprehensive collection of parallel programming implementations, examples, and utilities. This repository focuses on different parallel programming paradigms including shared memory programming (OpenMP, Pthreads), distributed memory programming (MPI), and GPU programming (CUDA, OpenCL [not yet implemented]).

## Overview

This repository serves as both a practical resource for parallel programming implementations and an educational tool for understanding parallel computing concepts. Each implementation includes detailed documentation, performance analysis, and usage examples.

### Project structure
```
├── README.md
├── src/
│   ├── process_vs_threads/
│   │   ├── process_example.cpp  # Code using fork()
│   │   ├── thread_example.cpp   # Code using std::thread
│   │   ├── Makefile             # Compilation script
│   │   └── README.md            # Explanation of differences
│   ├── openmp/
│   │   ├──
│   │   ├──
│   │   └──
│   ├── pthreads/
│   │   ├──
│   │   └──
│   ├── mpi/
│   │   ├──
│   │   └──
│   ├── cuda/
│   │   ├──
│   │   └──
│   └── opencl/
│       ├──
│       └──
└── docs/
    ├──
    └──
```

## Related Projects
For a practical example of these parallel programming concepts in action, check out our dedicated password recovery project:
- [zip-cracker](https://github.com/archibald-carrion/zip-cracker): Educational project demonstrating parallel programming concepts through password recovery implementations
