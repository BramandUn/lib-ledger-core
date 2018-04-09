// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from logger.djinni

#ifndef DJINNI_GENERATED_NJSLOGPRINTER_HPP
#define DJINNI_GENERATED_NJSLOGPRINTER_HPP


#include "../../../core/src/api/ExecutionContext.hpp"
#include "NJSExecutionContext.hpp"
#include <memory>
#include <string>

#include <nan.h>
#include <node.h>
#include "../../../core/src/api/LogPrinter.hpp"

using namespace v8;
using namespace node;
using namespace std;
using namespace ledger::core::api;

class NJSLogPrinter: public Nan::ObjectWrap, public ledger::core::api::LogPrinter {
public:

    static void Initialize(Local<Object> target);
    ~NJSLogPrinter()
    {
        persistent().Reset();
        njs_impl.Reset();
        njs_impl.Reset();
    };
    NJSLogPrinter(Local<Object> njs_implementation){njs_impl.Reset(njs_implementation);};

    /**
     *Print different encountered errors
     *@param message, string
     */
    void printError(const std::string & message);

    /**
     *Print useful information messages
     *@param message, string
     */
    void printInfo(const std::string & message);

    /**
     *Print debug messages
     *@param message string
     */
    void printDebug(const std::string & message);

    /**
     *Print warning messages
     *@param message, string
     */
    void printWarning(const std::string & message);

    /**
     *Print messages from APDU comand interpretation loop
     *@param message, string
     */
    void printApdu(const std::string & message);

    /**
     *Print critical errors causing a core dump or error from which recovery is impossible
     *@param message, string
     */
    void printCriticalError(const std::string & message);

    /**
     *Get context in which printer is executed (print)
     *@return ExecutionContext object
     */
    std::shared_ptr<ExecutionContext> getContext();

private:
    /**
     *Print different encountered errors
     *@param message, string
     */
    static NAN_METHOD(printError);

    /**
     *Print useful information messages
     *@param message, string
     */
    static NAN_METHOD(printInfo);

    /**
     *Print debug messages
     *@param message string
     */
    static NAN_METHOD(printDebug);

    /**
     *Print warning messages
     *@param message, string
     */
    static NAN_METHOD(printWarning);

    /**
     *Print messages from APDU comand interpretation loop
     *@param message, string
     */
    static NAN_METHOD(printApdu);

    /**
     *Print critical errors causing a core dump or error from which recovery is impossible
     *@param message, string
     */
    static NAN_METHOD(printCriticalError);

    /**
     *Get context in which printer is executed (print)
     *@return ExecutionContext object
     */
    static NAN_METHOD(getContext);

    static NAN_METHOD(New);

    static NAN_METHOD(addRef);
    static NAN_METHOD(removeRef);
    Nan::Persistent<Object> njs_impl;
};
#endif //DJINNI_GENERATED_NJSLOGPRINTER_HPP
