// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from configuration.djinni

#ifndef DJINNI_GENERATED_NJSBLOCKCHAINEXPLORERENGINES_HPP
#define DJINNI_GENERATED_NJSBLOCKCHAINEXPLORERENGINES_HPP


#include <memory>

#include <nan.h>
#include <node.h>
#include "../../../core/src/api/BlockchainExplorerEngines.hpp"

using namespace v8;
using namespace node;
using namespace std;
using namespace ledger::core::api;

class NJSBlockchainExplorerEngines: public Nan::ObjectWrap {
public:

    static void Initialize(Local<Object> target);
    virtual ~NJSBlockchainExplorerEngines() {};
    NJSBlockchainExplorerEngines(const std::shared_ptr<ledger::core::api::BlockchainExplorerEngines> &iBlockchainExplorerEngines):_BlockchainExplorerEngines(iBlockchainExplorerEngines){};

    static Handle<Object> wrap(const std::shared_ptr<ledger::core::api::BlockchainExplorerEngines> &object);
    static Nan::Persistent<ObjectTemplate> BlockchainExplorerEngines_prototype;
    std::shared_ptr<ledger::core::api::BlockchainExplorerEngines> getCppImpl(){return _BlockchainExplorerEngines;};

private:
    static NAN_METHOD(New);

    std::shared_ptr<ledger::core::api::BlockchainExplorerEngines> _BlockchainExplorerEngines;
};
#endif //DJINNI_GENERATED_NJSBLOCKCHAINEXPLORERENGINES_HPP
