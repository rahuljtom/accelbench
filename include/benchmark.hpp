#pragma once
#include<string>

struct BenchmarkResult {
    std::string kernel_name;
    double mean_ms;
    double min_ms;
    double max_ms;
}