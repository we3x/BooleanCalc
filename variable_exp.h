#include "boolean_exp.h"
#include "context.h"

class VariableExp : public BooleanExp {
public:
        VariableExp();
        virtual ~VariableExp();

        virtual bool Evaluate(Context&);
        virtual BooleanExp* Replace(const char*, BooleanExp&);
        virtual BooleanExp* Copy() const;
private:
        char* _name;
};
