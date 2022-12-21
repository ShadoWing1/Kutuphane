#include <kutuphane.hpp>

#define KITAP_EKLE 1
#define KITAP_SIL 2
#define KITAPLARI_YAZDIR 3

int main(int argc, char const *argv[])
{
    Kutuphane kutuphane("kitap_isimleri.txt");
    
    std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
    std::cout << " 1: kitap ekler 2: kitap siler 3: kitaplari gösterir ";
    std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << "\n";

    int cevap;
    std::cin >> cevap;
    std::cout << u8"\033[2J\033[1;1H\n";

    switch (cevap)
    {
    case 1: {
        std::cout << "asdasd\n";
        std::string kitap_ismi;
        std::getline(std::cin, kitap_ismi);
        std::getline(std::cin, kitap_ismi);
        kutuphane.kitap_ekle(kitap_ismi);
    } break;

    case 2:
        int a;
        std::cout << "Kac numarali kitap " << "\n";
        std::cout << ":";
        std::cin >> a;
        kutuphane.kitap_sil(a);
        break;
    
    case 3:
        kutuphane.kitaplari_yazdir();
        break;
    
    default:
        break;
    }
    
    return 0;
}

