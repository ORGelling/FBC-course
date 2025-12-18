#include "factory.ih"

void Factory::reverse(Train &train)
{
    size_t totalCars = train.cars().size();
    revert(train.cars());
    put(train.cars(), d_rhs, totalCars);
}
