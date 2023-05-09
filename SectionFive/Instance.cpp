#include <iostream>
#include <string.h>
using namespace std;
class Config
{
    public:
    static Config& GetInstance();
    void SetOption(string key, string value);
};
Config&::GetInstance()
{
    static Config Instance;
    return Instance;
}
void Config::SetOption(string key, string value)
{

}
int main (void)
{
    Config &appConfiguration = Config::GetInstance();
    appConfiguration.SetOption("scale", "big");
}