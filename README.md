>> Stock Trade Aggregator

A C++ program that simulates a simple stock trade aggregation system — 
inspired by the bookstore problem in C++ Primer.

---

Description
This program reads multiple stock trade transactions from a text file (`data/stock_trades.txt`) and aggregates:
- Total shares traded per stock symbol  
- Total revenue  
- Average price per share  

It demonstrates practical C++17 concepts such as:
- File I/O and data processing
- Working with classes and objects
- Operator overloading
- Encapsulation and data abstraction

├── include/
│   └── stock_aggregator.h         # Class definition for StockTrade (handles aggregation logic)
│
├── src/
│   └── stock_report.cpp           # Main program file – reads data and aggregates per stock
│
├── data/
│   ├── stock_trades.txt           # Input file containing 100+ sample stock trade entries
│   └── stock_output.txt           # Output file generated after running the program
│
├── build/
│   └── stock_report.exe           # Compiled binary (ignored in .gitignore)
│
├── .gitignore                     # Files/folders excluded from Git tracking (like build/)
├── README.md                      # Project overview and documentation
└── LICENSE (optional)             # License file (MIT recommended for open-source)

_____________________________________________________________________________________________________

#How to Compile and Run

#Compile
g++ -std=c++17 -Wall -Iinclude -o build/stock_report src/stock_report.cpp

#Run with redirected input and output
./build/stock_report < data/stock_trades.txt > data/stock_output.txt

#THEN TO DISPLAY stock_output.txt
cat data/stock_output.txt

_____________________________________________________________________________________________________


What i did here?

->Understand basic class and object usage in C++

->Learn file redirection and file-based input/output

->Practice modular project organization (include/src/data/build)

->Prepare for real-world C++ data processing or fintech-style projects

_________________________________________________________________________________________________________________________________________


#Future Improvements

Add CSV support

Include date/time for each trade

Visualize data using Python or C++ plotting libraries

__________________________________________________________________________________________________________________________________________


Author

Aakash Kumar
First Sem B.Tech(PIE | Birla Institute of Technology, Mesra) Student Project | C++ Learning Series

_____________________________________________THE_END___________________________________________________
