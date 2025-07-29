#include "operationfactory.h"
#include "addoperation.h" // +
#include "suboperation.h" // -
#include "muloperation.h" // *
#include "divoperation.h" // /
#include "sqrtoperation.h"// sqrt
#include "modoperation.h" // mod
#include "powoperation.h" // ^
#include "sinoperation.h" // sin
#include <QString>

std::unique_ptr<Operation> OperationFactory::getOperation(const QString& op) {
    if (op == QString("+")) return std::make_unique<AddOperation>();
    else if (op == QString("-")) return std::make_unique<SubOperation>();
    else if (op == QString("*")) return std::make_unique<MulOperation>();
    else if (op == QString("/")) return std::make_unique<DivOperation>();
    else if (op == QString("sqrt")) return std::make_unique<SqrtOperation>();
    else if (op == QString("mod")) return std::make_unique<ModOperation>();
    else if (op == QString("^")) return std::make_unique<PowOperation>();
    else if (op == QString("sin")) return std::make_unique<SinOperation>();
    else return nullptr;
}
