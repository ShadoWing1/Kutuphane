#include <iostream>
#include <fstream>
#include <kutuphane.hpp>
#include <string>

void dosyaYazma(const std::string& dosyaYolu)
{
    /*
    dosya'ya yazdırma
    */
    std::string a = "";
    yaz("Eklemek istediginiz kitabin ismini girin",1);
    yaz(": ",0);
    std::getline(std::cin, a);
    std::ofstream yazdir(dosyaYolu, std::ios::app);
    yazdir << (a) << ",";
}


template <typename T>
void testet(T a, T b, std::string testadi = "bilinmeyen")
{
    if( a != b)
    {
        std::cout << "Hatali test! test: "  << testadi << "\n";
    }
    else
    {
        std::cout << "Test basarili! test: "  << testadi << "\n";
    }
}