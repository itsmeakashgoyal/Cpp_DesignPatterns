#include <iostream>

class DriveStrategy {
    public:
        virtual void drive() = 0;
};

class NormalDrive : public DriveStrategy {
    public:
        void drive() {
            std::cout<<"Normal Drive"<<std::endl;
        }
};

class SportsDrive : public DriveStrategy {
    public:
        void drive() {
            std::cout<<"Sports Drive"<<std::endl;
        }
};

class Vehicle {
    private:
        DriveStrategy* driveStrategy;
    public:
        Vehicle(DriveStrategy* driveStrategy) {
            this->driveStrategy = driveStrategy;
        }
        void drive() {
            driveStrategy->drive();
        }
};

class Car : public Vehicle {
    public:
        Car() : Vehicle(new NormalDrive) {}
};

class Sports: public Vehicle {
    public:
        Sports() : Vehicle(new SportsDrive) {}
};