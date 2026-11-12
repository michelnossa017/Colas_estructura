#include <iostream>
#include <vector>

class Cola {
private:
    std::vector<int> items;

public:
    bool estaVacia() {
        return items.empty();
    }

    void encolar(int item) {
        items.push_back(item);
    }

    int desencolar() {
        if (!estaVacia()) {
            int frente = items.front();
            items.erase(items.begin());
            return frente;
        }
        return -1;
    }

    int frente() {
        if (!estaVacia()) {
            return items.front();
        }
        return -1;
    }

    int tamano() {
        return items.size();
    }
};

int main() {
    Cola cola;
    cola.encolar(10);
    cola.encolar(20);
    cola.encolar(30);

    std::cout << cola.desencolar() << std::endl;
    std::cout << cola.frente() << std::endl;
    std::cout << cola.tamano() << std::endl;

    return 0;
}