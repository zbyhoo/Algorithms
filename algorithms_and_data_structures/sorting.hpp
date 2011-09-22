//
//  sorting.h
//  algorithms_and_data_structures
//
//  Created by Zbigniew Kominek on 9/22/11.
//  Copyright 2011 zbyhoo. All rights reserved.
//

#ifndef ADS_SORTING_HPP
#define ADS_SORTING_HPP

namespace ads
{
    namespace sorting
    {
        template <class value_type, class random_access_iterator>
        void insertion_sort(random_access_iterator first, random_access_iterator last)
        {
            random_access_iterator j = first;
            
            for (++j; j != last; ++j)
            {
                value_type key = *j;
                random_access_iterator i = j;
                --i;

                bool end_of_array = false;
                while (*i > key)
                {
                    random_access_iterator next = i;
                    ++next;
                    
                    *next = *i;
                    
                    if (i == first)
                    {
                        end_of_array = true;
                        break;
                    }
                    --i;
                }
                
                random_access_iterator next = i;
                if (!end_of_array)
                    ++next;
                *next = key;
            }
            
        }
    };
};

#endif
