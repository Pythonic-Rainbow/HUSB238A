#include "I2C.hpp"

#include <Wire.h>

namespace husb238a {
    I2C::I2C(const uint8_t addr) {
        _addr = addr;
        Wire.begin();
    }

    bool I2C::can_ack() const {
        Wire.beginTransmission(_addr);
        return Wire.endTransmission() == 0;
    }

    int I2C::read_register(const uint8_t reg_addr, const uint8_t length) const {
        Wire.beginTransmission(_addr);  // START
        Wire.write(reg_addr);  // Write slave addr
        Wire.endTransmission(false); // Repeated Start
        Wire.requestFrom(_addr, length); // Request <length> bytes from slave
        return Wire.read();  // Return actual read result
    }

    int I2C::write_register(const uint8_t reg_addr, const uint8_t reg_value) const {
        Wire.beginTransmission(_addr);  // START
        Wire.write(reg_addr);  // Write slave addr
        Wire.write(reg_value);  // Write value
        const int end_tx = Wire.endTransmission();  // STOP
        return end_tx;  // Stop result
    }
}
