#include <iostream>
#include <vector>
#include <string>


class Grille {
public:
    Grille();
    void afficher();

private:
    std::vector<std::vector<std::string>> grid;
};
