#include "Graph.h"

void Graph::addEdge(const std::string& person1, const std::string& person2) {
    adjList[person1].insert(person2);
    adjList[person2].insert(person1);
}

void Graph::findPairsWithinThreeHandshakes() {
    for (const auto& pair : adjList) {
        std::string startPerson = pair.first;
        std::set<std::string> visited;
        std::vector<std::pair<std::string, int>> q;

        // Ќачинаем BFS с текущей вершины
        q.push_back({ startPerson, 0 });
        visited.insert(startPerson);

        while (!q.empty()) {
            auto current = q.front();
            std::string currentPerson = current.first;
            int distance = current.second;
            q.erase(q.begin());

            if (distance == 3) {
                continue;
            }

            for (const std::string& neighbor : adjList[currentPerson]) {
                if (visited.find(neighbor) == visited.end()) {
                    visited.insert(neighbor);
                    q.push_back({ neighbor, distance + 1 });

                    // ≈сли рассто€ние меньше или равно 3, выводим пару
                    if (distance + 1 <= 3) {
                        std::cout << "(" << startPerson << ", " << neighbor << ")" << std::endl;
                    }
                }
            }
        }
    }
}
