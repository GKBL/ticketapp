#include "processor.hpp"
// ...existing code...

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
// ...existing code...
