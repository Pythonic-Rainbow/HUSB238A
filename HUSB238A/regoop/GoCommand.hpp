#ifndef GOCOMMAND_HPP
#define GOCOMMAND_HPP

namespace husb238a {
    class GoCommand final : public WRegister {
    public:
        RegisterAddress get_addr() override {
            return GO_COMMAND;
        }

        void go(const fieldval::GoCommand value) {
            _val = value;
        }
    };
} // husb238a

#endif //GOCOMMAND_HPP
