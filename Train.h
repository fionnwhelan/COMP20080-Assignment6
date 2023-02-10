class Train : public Vehicle, public Equipment
{
private:
    int num_cars;

public:
    Train(int train_id, float v);
    void set_num_cars(int in_num_cars);
    int ret_num_cars();
    void print_details();
    void depreciateEquipment();
};
