#include <iostream>
#include <string.h>
using namespace std;
class AppConfig
{
    public:
    static AppConfig& GetInstance()
    {
        static AppConfig Instance;
        return Instance;
    }
    void SetConfig(string key, string value);
};
int main (void)
{
    AppConfig& myConfig = AppConfig::GetInstance();
    return 0;
}