#include "variable_exp.h"

class Context {
public:
        bool Lookup(const char*) const;
        void Assign(VariableExp*, bool);
};
