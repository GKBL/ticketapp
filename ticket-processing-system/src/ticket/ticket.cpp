#include "ticket.hpp"
#include <iostream>
#include <string>

// Constructor
Ticket::Ticket(int id, double fare, const std::string& product, char route) 
    : ticketID(id), fare(fare), product(product), route(route) {}

// Getters
int Ticket::getTicketID() const {
    return ticketID;
}

double Ticket::getFare() const {
    return fare;
}

std::string Ticket::getProduct() const {
    return product;
}

char Ticket::getRoute() const {
    return route;
}

// Setters
void Ticket::setFare(double newFare) {
    fare = newFare;
}

// Method to display ticket information
void Ticket::displayTicketInfo() const {
    std::cout << "Ticket ID: " << ticketID << std::endl;
    std::cout << "Fare: $" << fare << std::endl;
    std::cout << "Product: " << product << std::endl;
    std::cout << "Route: " << route << std::endl;
}