#pragma once

#include "Human.hpp"

#include <algorithm>
#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
    std::vector< char > ret_v(people.size());

    // Twoja implementacja tutaj

    std::reverse(people.begin(), people.end());
    std::transform(people.begin(), people.end(), ret_v.begin(), [](Human& h) {
        if (h.isMonster() == 1)
            return 'n';
        else
            return 'y';
    });

    std::for_each(people.begin(), people.end(), [](Human& h) { h.birthday(); });

    return ret_v;
}
