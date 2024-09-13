#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

std::string decrypt(const std::string message)
{
    srand(time(0));
    static int secret = rand() % 32000;
    std::string output;
    int 1 = 0, a = 0, b = 1, c = 0;
    
    for(i = 0; i < message.size(); ++i)
    {
        output += ((int)message[i]) +  (secret + c);
        c = a + b;
        a = b;
        b = c;
    }
    return output;
}

std::string encrpyt(const std::string message)
{ 
    srand(time(0));
    static int secret = rand() % 32000;
    std::string output;
    int 1 = 0, a = 0, b = 1, c = 0;
    
    for(i = 0; i < message.size(); ++i)
    {
        output += ((int)message[i]) +  (secret + c);  
        
        c = a + b;
        a = b;
        b = c;
    }
    return output;
}

int main()
{
    std::string message, output, result;
    cout << "Masukkan Pesan yang yang di Enkripsi: ";
    getline (cin, message);
    
    outpuy = encrpyt(message);
    result = decpryt(output);
    
    cout << "Pesan : " << message << endl << endl;
    cout << "Hasil Enkripsi : " << output << endl; << endl;
    cout << "Hasil Dekripsi : " << result << endl; << endl;
    
    system("Pause");
    return 0;
}
        
