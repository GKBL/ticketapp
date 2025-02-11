#ifndef PROCESSOR_HPP
#define PROCESSOR_HPP

#include <vector>
#include "../ticket/ticket.hpp"
#include "../validators/input_validator.hpp"

class TicketProcessor {

private:
    std::vector<Ticket> tickets;

public:
    TicketProcessor();

    void createTicket(int id, double fare, const std::string& product, char route);
    void processTicket(Ticket& ticket);
    void applyDiscount(Ticket& ticket, double discountPercentage);
};

#endif // PROCESSOR_HPP