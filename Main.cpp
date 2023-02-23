#include "Header.h"
#include "Fraction.h"
namespace fs = std::filesystem;
using namespace std;
Fraction Left;
Fraction Center;
Fraction Right;

void savewrite()
{
    ofstream out;
    out.open("C:/Users/admin/Desktop/GameVane/Text/save.txt");
    if (out.is_open())
    {
        out << Left.setout() << endl << Center.setout() << endl << Right.setout() << endl;
    }
    out.close();

}

void saveride()
{
    string line;
    ifstream in("C:/Users/admin/Desktop/GameVane/Text/save.txt"); // окрываем файл для чтения
    if (in.is_open())
    {
        while (getline(in, line))
        {
            cout << line << endl;
        }
    }
    in.close();
}

int main()
{
   
    saveride();
    std::string path = "C:/Users/admin/Desktop/GameVane/Text";
    for (const auto& file : fs::directory_iterator(path))
    std::cout << file.path() << std::endl;
   
}

