#ifndef TICKET_HPP
#define TICKET_HPP

#include <string>

class Ticket {
public:
    Ticket(const std::string& ticketID, double fare);
    
    std::string getTicketID() const;
    double getFare() const;
    void setFare(double fare);
    
private:
    std::string ticketID;
    double fare;
};

#endif // TICKET_HPP