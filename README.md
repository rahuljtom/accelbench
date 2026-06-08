# AccelBench

AccelBench is a C++/CUDA benchmark suite for transformer-inference kernels with PyTorch correctness tests and Nsight profiling.

## Goals

- Learn modern C++
- Learn CUDA
- Learn GPU performance engineering
- Implement transformer-relevant kernels
- Benchmark against PyTorch references
- Profile with Nsight Compute and Nsight Systems

## Planned Kernels

- Vector Add
- Reduction
- Transpose
- Softmax
- RMSNorm
- LayerNorm
- Naive MatMul
- Tiled MatMul
- Fused Bias GELU