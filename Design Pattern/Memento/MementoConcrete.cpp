#include "MementoConcrete.h"

MementoConcrete::MementoConcrete(std::string state): _state(state) {

	this->_state = state;
	std::time_t timeNow = std::time(0);
	this->_date = std::ctime(&timeNow);

}

std::string MementoConcrete::state() const {
	return this->_state;
}

std::string MementoConcrete::date() const {
	return this->_date;
}

std::string MementoConcrete::getName() const {
	return this->_date + " / (" + this->_state.substr(0, 9) + "...)" ; // substr (position, len)
}
