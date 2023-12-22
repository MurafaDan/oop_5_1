#include <iostream>

using namespace std;

class TransportAerian {
public:
    std::string tipTransport = "Transport Aerian";
};

class TransportDePasageri :public TransportAerian {
public:
    std::string tipTransportPasageri = "Transport de Pasageri";
};

class LinerBoing747 : public TransportDePasageri {
public:
    std::string model = "Boing 747";
};

int main() {
    LinerBoing747 avion; // 2
    LinerBoing747 * llll; // 0
    LinerBoing747 ** lllll = new LinerBoing747*[5]; // 0
    LinerBoing747 uu[6]; // 12

    TransportAerian tt; // 1
    TransportAerian *tt2 = new TransportAerian; // 0

    delete tt2;

    std::cout << "Tip transport: " << avion.tipTransport << std::endl;
    std::cout << "Tip transport de pasageri: " << avion.tipTransportPasageri << std::endl;
    std::cout << "Model avion: " << avion.model << std::endl;

    return 0;
}
