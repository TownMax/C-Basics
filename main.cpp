#include <iostream>
using namespace std;

class LightSensor
{
private:
    int lightReadings[5];
public:
    // Constructor to copy readings
    LightSensor(int LR[])
    {
        for(int i = 0; i < 5; i++)
        {
            lightReadings[i] = LR[i];
        }
    }

    // Calculate average light level
    int AverageLightLevel()
    {
        int sum = 0;
        for(int i = 0; i < 5; i++)
        {
            sum += lightReadings[i];
        }
        return sum / 5;
    }

    // Determine light level
    void LightLevel()
    {
        int avg = AverageLightLevel();
        cout << "Average: " << avg << endl;

        if (avg < 400)
        {
            cout << "Low Light. LED ON\n";
        }
        else
        {
            cout << "Enough light. LED OFF\n";
        }
    }
};

int main()
{
    int sampleReadings[5] = {300, 450, 200, 500, 350};
    LightSensor Backyard(sampleReadings);
    Backyard.LightLevel();

    return 0;
}
