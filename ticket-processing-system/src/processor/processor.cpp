#include "processor.hpp"
#include <iostream>

// Method to create a new ticket
void TicketProcessor::createTicket(int id, double fare, const std::string& product, char route) {
    Ticket newTicket(id, fare, product, route);
    tickets.push_back(newTicket);
}