#pragma once
#include "FemaleClothing.h"
#include "ProductionDate.h"

class Coats: public FemaleClothing {

public:

    Coats(int id, string name, float price, int day, int month, int year, string colour,
          string material, string size, string brand);

    ~Coats();

    virtual float getPrice() override;
    virtual string getName() override;
    virtual unsigned int getId() override;
//    virtual ProductionDate *getPoductionDate();
    virtual string getColour() override;
    virtual string getMaterial() override;
    virtual string getSize() override;
    virtual string getBrand() override;
};