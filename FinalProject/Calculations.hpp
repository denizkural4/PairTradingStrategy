//
//  Calculations.hpp
//  FinalProject
//
//  Created by Cristobal Gonzalez on 2/26/21.
//  Copyright © 2021 NYU. All rights reserved.
//

#ifndef Calculations_hpp
#define Calculations_hpp

#include <stdio.h>
#include "Database.hpp"
#include "PairTrading.h"


int CalculateVolatility(sqlite3 * db, map <string, StockPairPrices> & AllPairs, string BackTestStartDate);
int CalculateBackTest(sqlite3 * db, map <string, StockPairPrices> & AllPairs);
int CalculateEachPnL(sqlite3 * db, map <string, StockPairPrices> & AllPairs, string BackTestStartDate);


#endif /* Calculations_hpp */
