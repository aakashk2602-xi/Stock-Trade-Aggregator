#include <iostream>
#include "stock_aggregator.h"

int main(){
	StockTrade currshare;    			//object current share of type StockTrade
	if (std::cin >> currshare){			//first row in share details is read by currshare
		StockTrade share;   			//this object will help in reading after first row 
		while (std::cin >> share){     		//will read after first row
			if (currshare.symbol() == share.symbol()){
				currshare+=share;	//processes transaction details with same share company name
			}else{
				std::cout << currshare << std::endl;  
				currshare=share;	// new share's value is assigned  
			}
		}    //while loop ends here
		std::cout << currshare << std::endl; 	//will print the last share's transaction details
	}else{
		std::cerr << "No Input Entered!?" << std::endl;	
		return -1;
	}
	return 0;
}
