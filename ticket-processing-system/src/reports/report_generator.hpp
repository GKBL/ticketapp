#ifndef REPORT_GENERATOR_HPP
#define REPORT_GENERATOR_HPP

#include <vector>
#include "ticket.hpp"

class ReportGenerator {
public:
    ReportGenerator();
    void generateTicketReport(const std::vector<Ticket>& tickets);
    void generateSummaryReport(const std::vector<Ticket>& tickets);
};

#endif // REPORT_GENERATOR_HPP