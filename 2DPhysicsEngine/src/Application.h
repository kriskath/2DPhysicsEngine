#ifndef APPLICATION_H
#define APPLICATION_H

#include "./Graphics.h"
#include "Physics/Particle.h"

class Application {
private:
    bool running = false;
    Uint32 timePreviousFrame;
    Particle* particle;

public:
    Application() = default;
    ~Application() = default;
    bool IsRunning();
    void Setup();
    void Input();
    void Update();
    void Render();
    void Destroy();

private:
    void Wait();
};

#endif