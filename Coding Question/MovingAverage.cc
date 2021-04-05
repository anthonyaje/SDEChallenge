#include <vector>

#include "MovingAverage.hpp"
#include "MovingAverageImpl.hpp"

namespace anthony {

MovingAverage::MovingAverage(int N) {
    impl_ = std::make_unique<MovingAverageImpl>(N);
}; 

MovingAverage::~MovingAverage() = default;

void MovingAverage::AddElement(int el) {
    impl_->AddElement(el);
}

double MovingAverage::GetMovingAvg() {
    return impl_->GetMovingAvg();
}

int MovingAverage::GetElement(int index) {
    return impl_->GetElement(index);
}

size_t MovingAverage::Size() {
    return impl_->Size();
}

int MovingAverage::WindowSize() {
    return impl_->GetWindowSize();
}

} // namespace anthony