// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from bitcoin_like_wallet.djinni

#include "NJSBitcoinLikeOperationCpp.hpp"

using namespace v8;
using namespace node;
using namespace std;

NAN_METHOD(NJSBitcoinLikeOperation::getTransaction) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSBitcoinLikeOperation::getTransaction needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    NJSBitcoinLikeOperation* obj = Nan::ObjectWrap::Unwrap<NJSBitcoinLikeOperation>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSBitcoinLikeOperation::getTransaction : implementation of BitcoinLikeOperation is not valid");
    }

    auto result = cpp_impl->getTransaction();

    //Wrap result in node object
    auto arg_0_wrap = NJSBitcoinLikeTransaction::wrap(result);
    auto arg_0 = Nan::ObjectWrap::Unwrap<NJSBitcoinLikeTransaction>(arg_0_wrap)->handle();


    //Return result
    info.GetReturnValue().Set(arg_0);
}

NAN_METHOD(NJSBitcoinLikeOperation::New) {
    //Only new allowed
    if(!info.IsConstructCall())
    {
        return Nan::ThrowError("NJSBitcoinLikeOperation function can only be called as constructor (use New)");
    }
    NJSBitcoinLikeOperation *node_instance = new NJSBitcoinLikeOperation(nullptr);

    if(node_instance)
    {
        //Wrap and return node instance
        node_instance->Wrap(info.This());
        node_instance->Ref();
        info.GetReturnValue().Set(info.This());
    }
}


Nan::Persistent<ObjectTemplate> NJSBitcoinLikeOperation::BitcoinLikeOperation_prototype;

Handle<Object> NJSBitcoinLikeOperation::wrap(const std::shared_ptr<ledger::core::api::BitcoinLikeOperation> &object) {
    Nan::HandleScope scope;
    Local<ObjectTemplate> local_prototype = Nan::New(BitcoinLikeOperation_prototype);

    Handle<Object> obj;
    if(!local_prototype.IsEmpty())
    {
        obj = local_prototype->NewInstance();
        NJSBitcoinLikeOperation *new_obj = new NJSBitcoinLikeOperation(object);
        if(new_obj)
        {
            new_obj->Wrap(obj);
            new_obj->Ref();
        }
    }
    else
    {
        Nan::ThrowError("NJSBitcoinLikeOperation::wrap: object template not valid");
    }
    return obj;
}

void NJSBitcoinLikeOperation::Initialize(Local<Object> target) {
    Nan::HandleScope scope;

    Local<FunctionTemplate> func_template = Nan::New<FunctionTemplate>(NJSBitcoinLikeOperation::New);
    Local<ObjectTemplate> objectTemplate = func_template->InstanceTemplate();
    objectTemplate->SetInternalFieldCount(1);

    func_template->SetClassName(Nan::New<String>("NJSBitcoinLikeOperation").ToLocalChecked());

    //SetPrototypeMethod all methods
    Nan::SetPrototypeMethod(func_template,"getTransaction", getTransaction);
    //Set object prototype
    BitcoinLikeOperation_prototype.Reset(objectTemplate);

    //Add template to target
    target->Set(Nan::New<String>("NJSBitcoinLikeOperation").ToLocalChecked(), func_template->GetFunction());
}
