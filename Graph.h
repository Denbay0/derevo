#pragma once

#ifndef GRAPH_H
#define GRAPH_H

#include <iostream>
#include <vector>
#include <map>
#include <set>

class Graph {
public:
    // ���������� ����� ����� ����� ������
    void addEdge(const std::string& person1, const std::string& person2);

    // ������� ��� ������ ���� ���, ���������� ����� �������� �� ��������� 3
    void findPairsWithinThreeHandshakes();

private:
    std::map<std::string, std::set<std::string>> adjList; // ������ ���������
};

#endif // GRAPH_H

