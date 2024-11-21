#ifndef GOCOMMAND_HPP
#define GOCOMMAND_HPP

namespace husb238a {
    class GoCommand final : public WRegister {
    public:
        RegisterAddress get_addr() override {
            return GO_COMMAND;
        }

        fval::GoCommand::T go() const {
            return static_cast<fval::GoCommand::T>(get_val());
        }

        void go(const fval::GoCommand::T value) {
            _val = value;
        }
    };
} // husb238a

#endif //GOCOMMAND_HPP
