#include "Graph.h"

int main() {
    Graph g;

    // Добавление ребер (дружеских связей)
    g.addEdge("Алиса", "Боб");
    g.addEdge("Алиса", "Даша");
    g.addEdge("Боб", "Кейт");
    g.addEdge("Bob", "Олег");
    g.addEdge("Кейт", "Женя");
    g.addEdge("Даша", "Олег");

    // Поиск и вывод пар знакомств через три рукопожатия
    g.findPairsWithinThreeHandshakes();

    return 0;
}
