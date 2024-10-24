#ifndef I2CSLAVE_HPP
#define I2CSLAVE_HPP

#include "GlobalImport.h"

namespace HUSB238A {

/**
 * @brief Connection to an I2C device.
 *
 * This class contains methods required to read/write to an I2C device.
 */
class I2C {
public:
    /**
     * Instantiates an I2C connection to an address.
     * @param addr Slave address
     */
    explicit I2C(uint8_t addr);

    /**
     * Tests whether the slave can acknowledge I2C requests from us.
     * @return true if the slave can acknowledge, false otherwise
     */
    bool can_ack() const;

    /**
    * Reads a register
    * @param reg_addr Register address
    * @param length Length of bytes to read. Defaults to 1.
    * @return -1 if error, otherwise the value of the register
    */
    int read_register(uint8_t reg_addr, uint8_t length = 1) const;

    /**
    * Writes to a register
    * @param reg_addr Register address
    * @param reg_value Value to write
    * @return 0 if success, otherwise error code (Error Code meaning depends on implementation)
    */
    int write_register(uint8_t reg_addr, uint8_t reg_value) const;

private:
    uint8_t _addr;  // Address of the slave
};

}

#endif //I2CSLAVE_HPP
