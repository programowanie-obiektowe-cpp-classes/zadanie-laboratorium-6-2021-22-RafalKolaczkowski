#pragma once

#include <string>

class Human
{
public:
    Human() : name{"Anonymous"}, age{0}, likes_dogs{true}, likes_cats{true} {}
    Human(std::string name_, size_t age_, bool ld, bool lk)
        : name{std::move(name_)}, age{age_}, likes_dogs{ld}, likes_cats{lk}
    {}

    const std::string& getName() const { return name; }
    size_t              getAge() const { return age; }
    bool               isMonster() const { return !likes_dogs && !likes_cats; }
    void               birthday() { ++age; }

private:
    std::string  name;
    size_t age;
    bool         likes_dogs;
    bool         likes_cats;
};
