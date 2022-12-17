#include <kutuphane.hpp>

Kutuphane::Kutuphane(std::string dosya)
{
    std::string dosya;
    std::ifstream dosya("kitap_isimleri.txt");
    if(!dosya.is_open())
    {
        yaz("Dosya acilamadi", 1);
        return 0;
    }
    std::string baslik;
    while(std::getline(dosya, baslik, ','))
    {
        if(!baslik.empty())
        {
            
            Kutuphane::kitaplar.push_back(baslik);
        }
    }
}

void Kutuphane::kitaplari_yazdir()
{
    int sayac = 1;

    for(const auto& kitapismi: Kutuphane::kitaplar)
    {
        std::cout << sayac+1 << kitapismi<< ",";            
    }
}

void Kutuphane::kitap_ekle(std::string kitap_ismi)
{
        std::ofstream yazdir("kitap_isimleri.txt", std::ios::app);
        yazdir << kitap_ismi << ",";
}

void Kutuphane::kitap_sil(int index)
{
    std::string baslik;
    
    while(std::getline(dosya, baslik, ','))
    {
        basliklar.push_back(baslik);
    }
    dosya.close(); // DOSYA KAPANIYOR
    Kutuphane::kitaplar.erase(Kutuphane::kitaplar.begin() + (index-1));
    std::ofstream cikti("kitap_isimleri.txt");
    cikti.clear();
    for(const auto& kitap_ismi: Kutuphane::kitaplar)
    {
        cikti << kitap_ismi << ",";            
    }
    cikti.close();
}

