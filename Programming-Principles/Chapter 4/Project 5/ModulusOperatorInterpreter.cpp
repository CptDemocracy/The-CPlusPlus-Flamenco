#include <stdexcept>
#include <string>
#include <memory>

#include "MathOperator.h"
#include "ModulusOperator.h"

#include "MathOperatorInterpreter.h"
#include "ModulusOperatorInterpreter.h"

void ModulusOperatorInterpreter::InterpretMathOperator(
    const std::string& str, 
    std::unique_ptr<MathOperator>& OutResult) const 
{
    try {
        if (str == "%") {
            OutResult.reset(new ModulusOperator { });
        } else {
            OutResult.reset(nullptr);
        }
    } catch (const std::bad_alloc&) {
        throw;
    }
}
