#ifndef TICKET_HPP
#define TICKET_HPP

#include <string>

class Ticket {
private:
    int ticketID;
    double fare;
    std::string product;
    char route;

public:
    Ticket(int id, double fare, const std::string& product, char route);

    int getTicketID() const;
    double getFare() const;
    std::string getProduct() const;
    char getRoute() const;

    void setFare(double newFare);
    void displayTicketInfo() const;
};

#endif // TICKET_HPP