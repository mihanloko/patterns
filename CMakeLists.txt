cmake_minimum_required(VERSION 3.15)
project(patterns)

set(CMAKE_CXX_STANDARD 14)

add_executable(patterns main.cpp passenger/Passenger.cpp passenger/Passenger.h documents/Document.cpp documents/Document.h passenger/IncomingPassenger.cpp passenger/IncomingPassenger.h passenger/OutgoingPassenger.cpp passenger/OutgoingPassenger.h passenger/IVisitingServices.cpp passenger/IVisitingServices.h documents/Ticket.cpp documents/Ticket.h flights/Flight.cpp flights/Flight.h flights/InternationalFlight.cpp flights/InternationalFlight.h flights/DomesticFlight.cpp flights/DomesticFlight.h Logger.cpp Logger.h compulsory/CompulsoryService.cpp compulsory/CompulsoryService.h compulsory/PlaceOfBoarding.cpp compulsory/PlaceOfBoarding.h compulsory/BoardingProxy.cpp compulsory/BoardingProxy.h)