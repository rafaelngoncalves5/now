#include <iostream>
// (since C++11)
#include <chrono>

int main() {
    const auto now = std::chrono::system_clock::now();
    const std::time_t t_c = std::chrono::system_clock::to_time_t(now);
    // Cast ctime on t_c
    std::cout << std::ctime(&t_c);
    // Won't close as soon as I execute it
    std::getchar();
    // === Compiled with g++ ===
}