//
//  sorting.h
//  algorithms_and_data_structures
//
//  Created by Zbigniew Kominek on 9/22/11.
//  Copyright 2011 zbyhoo. All rights reserved.
//

#ifndef ADS_SORTING_HPP
#define ADS_SORTING_HPP

#import <iterator>

namespace ads
{
    namespace sorting
    {
        //! Sorts elements in the range [first, last) into ascending order using insertion sort algorithm
        //! Worst-case running time: O(n^2)
        template <class iterator_type>
        void insertion_sort(iterator_type first, iterator_type last)
        {
            typename std::iterator_traits<iterator_type>::value_type key;
            
            iterator_type j = first;
            
            for (++j; j != last; ++j)
            {
                key = *j;
                iterator_type i = j;
                --i;

                bool end_of_array = false;
                while (*i > key)
                {
                    iterator_type next = i;
                    ++next;
                    
                    *next = *i;
                    
                    if (i == first)
                    {
                        end_of_array = true;
                        break;
                    }
                    --i;
                }
                
                iterator_type next = i;
                if (!end_of_array)
                    ++next;
                *next = key;
            }
            
        }
    };
};

#endif
