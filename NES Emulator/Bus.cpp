#include "Bus.h"

Bus::Bus() {
	for (auto& i : ram) i = 0x00;
}
Bus::~Bus() {

}