#include <kutuphane.hpp>

// hatlar hata1: vector 53 hatalı hata2: vectorle beraber silme işlemi hatalı

int main(int argc, char const *argv[])
{
    Kutuphane kutuphane;
    
    std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
    std::cout << "Arayuz";
    std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~";

    int cevap;
    std::cin >> cevap;
    std::cout << u8"\033[2J\033[1;1H\n";

    switch (cevap)
    {
    case KITAP_EKLE:
        std::cout << u8"\033[2J\033[1;1H";
        
        std::string kitap_ismi;
        std::getline(std::cin, kitap_ismi);
        kutuphane.kitap_ekle(kitap_ismi);
        break;

    case KITAP_SIL:
        std::cout << u8"\033[2J\033[1;1H";

        int index;
        std::cout << "Kac numarali kitap " << "\n";
        std::cout << ":";
        std::cin >> index;
        kutuphane.kitap_sil(index);
        break;
    
    case KITAPLARI_YAZDIR:
        std::cout << u8"\033[2J\033[1;1H";
        
        kutuphane.kitaplari_yazdir();
        break;
    default:
        break;
    }
    
    return 0;
}

