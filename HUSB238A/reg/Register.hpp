#ifndef REGISTER_HPP
#define REGISTER_HPP


namespace husb238a {

class Register {
public:
    virtual ~Register() = default;
    virtual RegisterAddress get_addr();

    uint8_t get_val() const { return _val; }

    bool get_bit(const uint8_t mask) const {
        return _val & mask;
    }

protected:
    explicit Register() { }
    uint8_t _val{}; // Value of the register. Note: This is not guaranteed to be up to date!
};

}

#endif //REGISTER_HPP
