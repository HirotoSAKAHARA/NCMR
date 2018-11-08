#include <vector>

class TestJoypad
{
public:
	TestJoypad(void);
	void Update(void);

private:
	std::vector<char> buttons;
	std::vector<int>  axis;
};
