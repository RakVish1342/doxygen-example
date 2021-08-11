// Doxygen only recognizes files that have Classes in them. So to document this file which has standalone/global functions, the file needs to made "non-private" by adding the @file tag. If EXTRACT_ALL is set to YES in Doxyfile, then all files irrespective of this file tag will be picked up.
//
// Also note that having the WARN_AS_ERROR to YES and EXTRACT_ALL to YES helps sort through potential reasons why certain documents/files may not be getting documented properly.


/// @file 

#include <iostream>

/**
 * @brief ref_planner function definition
 *
 * @param x - param1
 * @param y - param2
 */

/**
 * ... text ...
 */
int ref_plan(int x, int y)
{
    /// comment 1
    std::cout << "REFERENCE PLANNER FUNC: " << x << std::endl;

    /// comment 2
    std::cout << "end of func" << y << std::endl;
}

int main()
{
    std::cout << "REFERENCE PLANNER MAIN" << std::endl;
    ref_plan(10, 20);

    return 0;
}
