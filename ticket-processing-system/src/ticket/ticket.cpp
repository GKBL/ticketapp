#include "ticket.hpp"

// Constructor
Ticket::Ticket(int id, double fare) : ticketID(id), fare(fare) {}

// Getters
int Ticket::getTicketID() const {
    return ticketID;
}

double Ticket::getFare() const {
    return fare;
}

// Setters
void Ticket::setFare(double newFare) {
    fare = newFare;
}

// Method to display ticket information
void Ticket::displayTicketInfo() const {
    std::cout << "Ticket ID: " << ticketID << std::endl;
    std::cout << "Fare: $" << fare << std::endl;
}