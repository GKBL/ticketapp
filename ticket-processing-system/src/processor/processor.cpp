#include "processor.hpp"
#include <iostream>

// Method to create a new ticket
void TicketProcessor::createTicket(int id, double fare, const std::string& product, char route) {
    Ticket newTicket(id, fare, product, route);
    tickets.push_back(newTicket);
}


void TicketProcessor::applyDiscount(Ticket& ticket, double discountPercentage) {
    double basePrice = ticket.getBasePrice();
    double discountAmount = basePrice * discountPercentage / 100;
    ticket.setDiscount(discountAmount);
}

void TicketProcessor::processTicket(Ticket& ticket) {
    // Validate the ticket
    if (!InputValidator::validate(ticket)) {
        throw std::invalid_argument("Invalid ticket data");
    }

    // Apply some processing logic, e.g., calculate final price
    double basePrice = ticket.getBasePrice();
    double discount = ticket.getDiscount();
    double finalPrice = basePrice - (basePrice * discount / 100);
    ticket.setFinalPrice(finalPrice);
}
