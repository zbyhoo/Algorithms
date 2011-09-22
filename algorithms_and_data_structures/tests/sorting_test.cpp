//
//  sorting_test.cpp
//  algorithms_and_data_structures
//
//  Created by Zbigniew Kominek on 9/22/11.
//  Copyright 2011 zbyhoo. All rights reserved.
//

#include "sorting.hpp"

#include <boost/test/unit_test.hpp>
#include <boost/assign/std/vector.hpp>

using namespace boost::assign;
using namespace ads::sorting;

BOOST_AUTO_TEST_SUITE(sorting_suite)

BOOST_AUTO_TEST_CASE(small_array_of_ints)
{
    // given
    std::vector<int> input;
    input += 3, 1, 2;
    
    std::vector<int> expected;
    expected += 1, 2, 3;
    
    // when
    insertion_sort<int>(input.begin(), input.end());
    
    // then
    BOOST_CHECK_EQUAL_COLLECTIONS(input.begin(), input.end(), expected.begin(), expected.end());
}

BOOST_AUTO_TEST_SUITE_END()
