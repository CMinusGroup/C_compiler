# include "llvm/IR/LLVMContext.h"
# include "llvm/IR/Module.h"
# include "llvm/IR/IRBuilder.h"
# include "llvm/Support/FileSystem.h"
# include "llvm/Bitcode/BitcodeWriter.h"
# include <iostream>

using namespace llvm;

static LLVMContext ctxt;
static IRBuilder<> builder(ctxt);

int main(int argc, char** argv) {

    Module* main_module = new Module("main_mddodule", ctxt);
    std::cout << main_module->getModuleIdentifier() << "\n";

	std::vector<Type*> param_type(3, Type::getDoubleTy(ctxt));

	FunctionType* prototype = FunctionType::get(Type::getDoubleTy(ctxt), param_type, false);

    FunctionType* func_type = FunctionType::get(builder.getInt32Ty(), false);
    Function* main_func = Function::Create(func_type,Function::ExternalLinkage, "main", main_module);
    Function* cal_func = Function::Create(prototype,Function::ExternalLinkage,"cal",main_module);
    BasicBlock* bc = BasicBlock::Create(ctxt, "", cal_func);
    
	builder.SetInsertPoint(bc);

    std::vector<Value*> args;
	for(auto& arg : cal_func->args())
		args.push_back(&arg);

	Value* temp = builder.CreateFMul(args[0], args[1], "temp");
	Value* ret = builder.CreateFMul(args[2], temp, "result");
	builder.CreateRet(ret);

    if (main_module->getFunction("main")) {
        std::cout << "Found function!\n";
    }

    std::error_code EC;
    llvm::raw_fd_ostream OS("module", EC, llvm::sys::fs::F_None);
    WriteBitcodeToFile(main_module->get(), OS);
    OS.flush();
    main_module->print(llvm::outs(),);
    return 0;
}