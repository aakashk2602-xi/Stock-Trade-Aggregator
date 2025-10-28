#ifndef STOCK_AGGREGATOR_H
#define STOCK_AGGREGATOR_H

#include <iostream>
#include <string>

class StockTrade {
private:
    std::string stock_symbol;  // e.g. TCS, INFY, RELIANCE
    unsigned shares_traded = 0;
    double price_per_share = 0.0;

public:
    // Constructors
    StockTrade() = default;
    StockTrade(const std::string& symbol, unsigned shares, double price)
        : stock_symbol(symbol), shares_traded(shares), price_per_share(price) {}

    // Getter for symbol
    std::string symbol() const { return stock_symbol; }

    // Operator overloads
    friend std::istream& operator>>(std::istream& in, StockTrade& item) {
        in >> item.stock_symbol >> item.shares_traded >> item.price_per_share;
        return in;
    }

    friend std::ostream& operator<<(std::ostream& out, const StockTrade& item) {
        double total_value = item.shares_traded * item.price_per_share;
        out << "Stock: " << item.stock_symbol
            << " | Shares: " << item.shares_traded
            << " | Price: " << item.price_per_share
            << " | Total Value: " << total_value;
        return out;
    }

    // Combine two StockTrade entries with the same symbol
    StockTrade& operator+=(const StockTrade& rhs) {
        if (stock_symbol == rhs.stock_symbol) {
            double total_value = (shares_traded * price_per_share) +
                                 (rhs.shares_traded * rhs.price_per_share);
            shares_traded += rhs.shares_traded;
            price_per_share = total_value / shares_traded;  // weighted average
        }
        return *this;
    }
};

#endif // STOCK_AGGREGATOR_H
