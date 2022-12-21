#pragma once

#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>

template<typename T>

void yaz (T a,int b = 1)
{
    std::cout << a;

    if(b == 1)
    {
        std::cout << "\n";
    } 
}



class Kutuphane
{
    private:
        std::vector<std::string> kitaplar;
        std::ifstream dosya;
    public:
        Kutuphane(std::string dosyaismi);

        void kitap_ekle(std::string kitap_ismi);
        void kitap_sil(std::string kitap_ismi);
        void kitap_sil(int index);

        void kitaplari_yazdir();
};
