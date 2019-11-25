//
class Vector
{
public:
	Vector(size_t sz);
	Vector(const Vector& v);//copy constructor
	Vector& operator=(const Vector& v);//copy assignment
	Vector(Vector&& v);//move constructor
	Vector& operator=(Vector&& v);//move assignment
	size_t Size()const { return size; }
	int& operator[](int i) { return nums[i]; }
	int& operator[](int i) const { return nums[i]; }
	void Reserve(size_t new_allocation);
	~Vector();
private:
	size_t size;//space that is readilly available for array
	size_t space;//keeps track of reserve
	int* nums;
};