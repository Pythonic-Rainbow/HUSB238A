#ifndef REGISTER_HPP
#define REGISTER_HPP

namespace husb238a {
    class HUSB238A;

    class Register {
    public:
        virtual RegisterAddress get_addr();

        uint8_t get_val() const { return _val; }

    protected:
        ~Register() = default;
        Register() = default;

        uint8_t _val{}; // Value of the register. Note: This is not guaranteed to be up to date!

        bool get_bit(const uint8_t mask) const {
            return husb238a::get_bit(_val, mask);
        }

        uint8_t get_bits(const uint8_t mask) const {
            return husb238a::get_bits(_val, mask);
        }

    private:

        void set_val(const uint8_t value) {
            _val = value;
        }

        friend class HUSB238A;
    };
}

#endif //REGISTER_HPP
