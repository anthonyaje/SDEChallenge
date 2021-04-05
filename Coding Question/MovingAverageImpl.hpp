#pragma once 

#include <vector>

namespace anthony {

// The implementation class that holds the actual logic
class MovingAverageImpl {
    public:
        MovingAverageImpl(int N);

        void AddElement(int el);

        double GetMovingAvg();

        int GetElement(int index);

        size_t Size();

        int GetWindowSize();

    private:
        int n_;
        std::vector<int> data_;
        double sum_;
        long long start_;
};

} // namespace anthony