// This file does not have a class within it. All such files are hidden unless made visible using EXTRACT_ALL to YES in the Doxyfile OR having the @file parameter at the beginning of the file

#include <iostream>

/**
 * @brief path_planner function definition
 *
 * @param x - param1
 * @param y - param2
 */
int path_plan(int x, int y)
{
    /// comment 1
    std::cout << "PATH PLANNER FUNC: " << x << std::endl;

    /// comment 2
    std::cout << "end of func" << y << std::endl;
}

int main()
{
    std::cout << "PATH PLANNER MAIN" << std::endl;
    path_plan(10, 20);

    return 0;
}
