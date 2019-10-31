#include <iostream>
#include "passenger/Passenger.h"
#include "passenger/OutgoingPassenger.h"
#include "passenger/IncomingPassenger.h"

using namespace std;

int main()
{
    Passenger* passenger = new Passenger(new OutgoingPassenger());
    passenger->visit();

    passenger = new Passenger(new IncomingPassenger());
    passenger->visit();

    return 0;
}
