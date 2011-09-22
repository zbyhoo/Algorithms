//
//  main.cpp
//  algorithms_and_data_structures
//
//  Created by Zbigniew Kominek on 9/22/11.
//  Copyright 2011 zbyhoo. All rights reserved.
//

#include "sorting.hpp"

#include <iostream>
#include <vector>
#include <iterator>

int main (int argc, const char * argv[])
{    
    std::vector<int> v;
    v.push_back(3);
    v.push_back(1);
    v.push_back(2);
    
    std::copy(v.begin(), v.end(), std::ostream_iterator<int>(std::cout, " "));
    std::cout << std::endl;
    
    ads::sorting::insertion_sort<int>(v.begin(), v.end());
    
    std::copy(v.begin(), v.end(), std::ostream_iterator<int>(std::cout, " "));
    std::cout << std::endl;
    
    return 0;
}

