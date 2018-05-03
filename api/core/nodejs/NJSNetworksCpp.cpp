// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from networks.djinni

#include "NJSNetworksCpp.hpp"

using namespace v8;
using namespace node;
using namespace std;

NAN_METHOD(NJSNetworks::bitcoin) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSNetworks::bitcoin needs 0 arguments");
    }

    //Check if parameters have correct types

    auto result = Networks::bitcoin();

    //Wrap result in node object
    auto arg_0 = Nan::New<Object>();
    auto arg_0_1 = Nan::New<String>(result.Identifier).ToLocalChecked();
    Nan::DefineOwnProperty(arg_0, Nan::New<String>("Identifier").ToLocalChecked(), arg_0_1);
    Local<Array> arg_0_2 = Nan::New<Array>();
    for(size_t arg_0_2_id = 0; arg_0_2_id < result.P2PKHVersion.size(); arg_0_2_id++)
    {
        auto arg_0_2_elem = Nan::New<Uint32>(result.P2PKHVersion[arg_0_2_id]);
        arg_0_2->Set((int)arg_0_2_id,arg_0_2_elem);
    }

    Nan::DefineOwnProperty(arg_0, Nan::New<String>("P2PKHVersion").ToLocalChecked(), arg_0_2);
    Local<Array> arg_0_3 = Nan::New<Array>();
    for(size_t arg_0_3_id = 0; arg_0_3_id < result.P2SHVersion.size(); arg_0_3_id++)
    {
        auto arg_0_3_elem = Nan::New<Uint32>(result.P2SHVersion[arg_0_3_id]);
        arg_0_3->Set((int)arg_0_3_id,arg_0_3_elem);
    }

    Nan::DefineOwnProperty(arg_0, Nan::New<String>("P2SHVersion").ToLocalChecked(), arg_0_3);
    Local<Array> arg_0_4 = Nan::New<Array>();
    for(size_t arg_0_4_id = 0; arg_0_4_id < result.XPUBVersion.size(); arg_0_4_id++)
    {
        auto arg_0_4_elem = Nan::New<Uint32>(result.XPUBVersion[arg_0_4_id]);
        arg_0_4->Set((int)arg_0_4_id,arg_0_4_elem);
    }

    Nan::DefineOwnProperty(arg_0, Nan::New<String>("XPUBVersion").ToLocalChecked(), arg_0_4);
    auto arg_0_5 = Nan::New<Integer>((int)result.FeePolicy);
    Nan::DefineOwnProperty(arg_0, Nan::New<String>("FeePolicy").ToLocalChecked(), arg_0_5);
    auto arg_0_6 = Nan::New<Number>(result.DustAmount);
    Nan::DefineOwnProperty(arg_0, Nan::New<String>("DustAmount").ToLocalChecked(), arg_0_6);
    auto arg_0_7 = Nan::New<String>(result.MessagePrefix).ToLocalChecked();
    Nan::DefineOwnProperty(arg_0, Nan::New<String>("MessagePrefix").ToLocalChecked(), arg_0_7);
    auto arg_0_8 = Nan::New<Boolean>(result.UsesTimestampedTransaction);
    Nan::DefineOwnProperty(arg_0, Nan::New<String>("UsesTimestampedTransaction").ToLocalChecked(), arg_0_8);


    //Return result
    info.GetReturnValue().Set(arg_0);
}

NAN_METHOD(NJSNetworks::New) {
    //Only new allowed
    if(!info.IsConstructCall())
    {
        return Nan::ThrowError("NJSNetworks function can only be called as constructor (use New)");
    }
    NJSNetworks *node_instance = new NJSNetworks(nullptr);

    if(node_instance)
    {
        //Wrap and return node instance
        node_instance->Wrap(info.This());
        node_instance->Ref();
        info.GetReturnValue().Set(info.This());
    }
}


Nan::Persistent<ObjectTemplate> NJSNetworks::Networks_prototype;

Handle<Object> NJSNetworks::wrap(const std::shared_ptr<ledger::core::api::Networks> &object) {
    Nan::HandleScope scope;
    Local<ObjectTemplate> local_prototype = Nan::New(Networks_prototype);

    Handle<Object> obj;
    if(!local_prototype.IsEmpty())
    {
        obj = local_prototype->NewInstance();
        NJSNetworks *new_obj = new NJSNetworks(object);
        if(new_obj)
        {
            new_obj->Wrap(obj);
            new_obj->Ref();
        }
    }
    else
    {
        Nan::ThrowError("NJSNetworks::wrap: object template not valid");
    }
    return obj;
}

void NJSNetworks::Initialize(Local<Object> target) {
    Nan::HandleScope scope;

    Local<FunctionTemplate> func_template = Nan::New<FunctionTemplate>(NJSNetworks::New);
    Local<ObjectTemplate> objectTemplate = func_template->InstanceTemplate();
    objectTemplate->SetInternalFieldCount(1);

    func_template->SetClassName(Nan::New<String>("NJSNetworks").ToLocalChecked());

    //SetPrototypeMethod all methods
    Nan::SetPrototypeMethod(func_template,"bitcoin", bitcoin);
    //Set object prototype
    Networks_prototype.Reset(objectTemplate);

    //Add template to target
    target->Set(Nan::New<String>("NJSNetworks").ToLocalChecked(), func_template->GetFunction());
}
