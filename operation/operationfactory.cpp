#include "operationfactory.h"
#include "addoperation.h"
#include "suboperation.h"
#include "muloperation.h"
#include "divoperation.h"
#include "sqrtoperation.h"
#include "modoperation.h"
#include "powoperation.h"
#include <QString>

std::unique_ptr<Operation> OperationFactory::getOperation(const QString& op) {
    if (op == QString("+")) return std::make_unique<AddOperation>();
    else if (op == QString("-")) return std::make_unique<SubOperation>();
    else if (op == QString("*")) return std::make_unique<MulOperation>();
    else if (op == QString("/")) return std::make_unique<DivOperation>();
    else if (op == QString("sqrt")) return std::make_unique<SqrtOperation>();
    else if (op == QString("mod")) return std::make_unique<ModOperation>();
    else if (op == QString("^")) return std::make_unique<PowOperation>();
    else return nullptr;
}
