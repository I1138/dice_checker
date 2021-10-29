#pragma once
// DiceCheck
// A Tool for checking D20 Balance
// Author: Ian Bolin

// d20.hpp - contains d20, a class for storing the face relationships of a D20

#include <vector>
#include <cstdint>

class D20
{
public:
    D20();
    ~D20();

    void addRolls(std::vector<int64_t> &rolls);
    std::vector<double> getResultsByFace();

private:
    std::vector<int64_t>
        weighted_rolls;
    static std::vector<std::vector<std::vector<int64_t>::iterator>> adjacencyDistance1;
    static std::vector<std::vector<std::vector<int64_t>::iterator>> adjacencyDistance2;
    static const int64_t ADJACENCY_0_VALUE = 3;
    static const int64_t ADJACENCY_1_VALUE = 2;
    static const int64_t ADJACENCY_2_VALUE = 1;
};
