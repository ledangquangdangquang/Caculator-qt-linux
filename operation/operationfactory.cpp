#include "operationfactory.h"
#include "addoperation.h"
#include "suboperation.h"
#include "muloperation.h"
#include "divoperation.h"

std::unique_ptr<Operation> OperationFactory::getOperation(QChar op) {
    switch (op.unicode()) {
    case '+': return std::make_unique<AddOperation>();
    case '-': return std::make_unique<SubOperation>();
    case '*': return std::make_unique<MulOperation>();
    case '/': return std::make_unique<DivOperation>();
    default: return nullptr;
    }
}


