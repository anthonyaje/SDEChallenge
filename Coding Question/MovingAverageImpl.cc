#include "MovingAverageImpl.hpp"

namespace anthony {

    MovingAverageImpl::MovingAverageImpl(int N) : n_(N), start_(0), sum_(0) {}

    void MovingAverageImpl::AddElement(int el) {
        data_.push_back(el);
        sum_ += el;
        
        if (data_.size() > n_) {
            sum_ -= data_[start_];
            start_++;
        }
    }

    double MovingAverageImpl::GetMovingAvg() {
        if (data_.size() < n_) {
            return sum_ / data_.size();
        }

        return sum_ / n_;
    }

    int MovingAverageImpl::GetElement(int index) {
        if (index >= data_.size()) {
            throw "Index out of bound";
        }

        return data_[index];
    }

    size_t MovingAverageImpl::Size() {
        return data_.size();
    }

    int MovingAverageImpl::GetWindowSize() {
        return n_;
    }

} // namespace anthony