#ifndef PROCESSOR_HPP
#define PROCESSOR_HPP

#include "../ticket/ticket.hpp"
#include "../validators/input_validator.hpp"

class TicketProcessor {
public:
    TicketProcessor();

    Ticket createTicket(const std::string& fareInput);
    void processTicket(Ticket& ticket);
    void applyDiscount(Ticket& ticket, double discountPercentage);
};

#endif // PROCESSOR_HPP