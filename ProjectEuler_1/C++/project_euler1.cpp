#include <iostream>
#include <chrono>

int main() {
    auto start_time = std::chrono::high_resolution_clock::now();

    int threes = 0;
    int fives = 0;

    for (int i = 0; i < 1000; ++i) {
        threes += 3;
        fives += 5;
    }

    std::cout << threes << std::endl;
    std::cout << fives << std::endl;
    std::cout << threes + fives << std::endl;

    auto end_time = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(end_time - start_time);

    std::cout << "Duration: " << duration.count() << " microseconds" << std::endl;

    return 0;
}
