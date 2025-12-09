class ParkingSystem {
private:
    int count[3];
public:
    ParkingSystem(int big, int medium, int small) {
        count[0]=big;
        count[1]=medium;
        count[2]=small;
    }
    
    bool addCar(int carType) {
        if(count[carType-1]>=1){
            count[carType-1]--;
            return true;
        }
        return false;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */