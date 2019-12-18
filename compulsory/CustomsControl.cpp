//
// Created by mikhail on 12.11.2019.
//

#include "CustomsControl.h"

CustomsControl::CustomsControl(int priority) : CompulsoryService(priority) {}

bool CustomsControl::serve(Passenger *passenger) {
    return true;
}
