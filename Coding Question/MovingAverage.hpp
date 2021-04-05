#pragma once

#include <vector>
#include <memory>

namespace anthony {

// Forward declare the implementation class
// Implementation is defined in MovingAverageImpl.hpp/cc
class MovingAverageImpl;

// Interface of MovingAverage class 
class MovingAverage {
    public:
        // Constructor
        // args:
        //   int N      : The length of the moving average of last N elements  
        MovingAverage(int N);

        // Destructor
        ~MovingAverage();

        // Adding an element
        // args:
        //   int el     : The element to be added 
        void AddElement(int el);

        // Retrieve the moving average
        // returns:
        //   double     : The average of the last N elements
        // Note:
        //   If the number of elements is less than N, then the average of those elements
        double GetMovingAvg();

        // Retrieve the element at a certain position
        // args: 
        //   int index  : The index of element. (index starts from 0) 
        int GetElement(int index);

        // Get the size of the current data structur
        // returns:
        //   size_t     : The number of elements currently in the data structure
        size_t Size();

        // Get the N (average window size)
        int WindowSize();
        
    private:
        std::unique_ptr<MovingAverageImpl> impl_;
};
} // namespace anthony