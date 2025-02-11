#include <iostream>
#include "ticket/ticket.hpp"
#include "processor/processor.hpp"
#include "validators/input_validator.hpp"
#include "utils/id_generator.hpp"

int main() {
    IDGenerator idGenerator;
    TicketProcessor ticketProcessor;
    InputValidator inputValidator;

    // Example of creating a new ticket
    std::string ticketID = idGenerator.generateID();
    double fare = 100.0; // Example fare
    Ticket newTicket(ticketID, fare);

    // Validate input data
    if (inputValidator.validateFare(fare)) {
        ticketProcessor.createTicket(newTicket);
        std::cout << "Ticket created successfully with ID: " << ticketID << std::endl;
    } else {
        std::cout << "Invalid fare input." << std::endl;
    }

    // Process the ticket
    ticketProcessor.processTicket(newTicket);

    return 0;
}