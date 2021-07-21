
#pragma once

class CAnimal
{
public:
	virtual ~CAnimal();

    /** Display an animal. */
    virtual void DisplayAnimal() {}

    /** Keep track of the number of witch weight animals. */
    virtual void IsWitchWeight() {}

    /**Setter and getter for type of animal for the purpose of witch weight. */
    void setDuckType(int duckType) { mAnimalType = duckType; }
    int getDuckType() { return mAnimalType; }

private:
    int mAnimalType = 0;
};



