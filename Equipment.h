class Equipment
{
 private:
  float value;  // current value of this piece of equipment

 public:
  Equipment(float v);  	  	// sets initial value to v
  float getValue();       	// returns value
  void setValue(float v);	// sets value to v
  void depreciateEquipment();	// decreases value by 10%
  void print_value();   	// prints out value
};
