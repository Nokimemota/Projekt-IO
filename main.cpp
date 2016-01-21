#include "Zazadzacz.h"
int main()
{
	std::unique_ptr<Zarzadzacz> zaz(new ZarzadzaczK_O());
	zaz->Play();
}