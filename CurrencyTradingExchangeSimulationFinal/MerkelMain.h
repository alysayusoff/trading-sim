#pragma once
#include <vector>
#include "OrderBookEntry.h"
#include "OrderBook.h"
#include "Wallet.h"


class MerkelMain
{
public:
    MerkelMain();
    /** Call this to start the sim */
    void init();

private:
    void printMenu();
    void printHelp();
    void printMarketStats();
    void enterAsk();
    void enterBid();
    void printWallet();
    void gotoNextTimeframe();
    int getUserOption();
    void processUserOption(int userOption);

    std::string currentTime;

    OrderBook orderBook{ "C:\\Users\\ASUS\\OneDrive\\Documents\\SIM-UOL\\Y2S1\\CM2005 Object Oriented Programming\\20200317.csv" };

    Wallet wallet;
};
