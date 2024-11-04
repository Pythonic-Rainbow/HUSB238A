#ifndef RESET_HPP
#define RESET_HPP

namespace husb238a {

class Reset : public WRegister {
public:
    explicit Reset(const uint8_t value) : WRegister(value) {}

    RegisterAddress get_addr() override {
        return RESET;
    }

    bool get_sw_res() const {
        return _val;
    }

    void set_sw_res(const bool value) {
        _val = value;
    }
};

} // husb238a

#endif //RESET_HPP
