#pragma once

#ifndef GRAPH_H
#define GRAPH_H

#include <iostream>
#include <vector>
#include <map>
#include <set>

class Graph {
public:
    // Добавление ребра между двумя людьми
    void addEdge(const std::string& person1, const std::string& person2);

    // Функция для поиска всех пар, расстояние между которыми не превышает 3
    void findPairsWithinThreeHandshakes();

private:
    std::map<std::string, std::set<std::string>> adjList; // Список смежности
};

#endif // GRAPH_H

