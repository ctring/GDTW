#ifndef GENEX_SRC_MANHATTAN_H
#define GENEX_SRC_MANHATTAN_H

#include <cmath>

#include "TimeSeries.hpp"
#include "Exception.hpp"

class Manhattan
{

public:
  data_t dist(data_t x_1, data_t x_2) const
  {
    return std::abs(x_1 - x_2);
  }

  data_t init() const
  {
    return 0;
  }

  data_t reduce(data_t next, data_t prev, const data_t x_1, const data_t x_2) const
  {
    return prev + dist(x_1, x_2);
  }

  data_t norm(data_t total, const TimeSeries& t, const TimeSeries& t_2) const
  {
    return total;
  }

  void clean(data_t x) {}
};

#endif // GENEX_SRC_MINKOWSKI_H
