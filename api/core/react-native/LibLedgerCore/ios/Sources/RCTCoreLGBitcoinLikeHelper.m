// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from bitcoin_like_wallet.djinni

#import "RCTCoreLGBitcoinLikeHelper.h"


@implementation RCTCoreLGBitcoinLikeHelper
//Export module
RCT_EXPORT_MODULE(RCTCoreLGBitcoinLikeHelper)

-(instancetype)init
{
    self = [super init];
    //Init Objc implementation
    if(self)
    {
        self.objcImpl = [[LGBitcoinLikeHelper alloc] init];
    }
    return self;
}

/**
 *Constructs a BitcoinLikeOutput object from script and amount objects
 *@param script binary please refer to BitcoinLikeOutput::getScript()
 *@param amount, Amount object, amount of output
 *@return BitcoinLikeOutput, resulting output object
 */
RCT_REMAP_METHOD(scriptToOutput,scriptToOutput:(nonnull NSData *)script
                                        amount:(nullable LGAmount *)amount withResolver:(RCTPromiseResolveBlock)resolve rejecter:(RCTPromiseRejectBlock)reject) {

    id result = [LGBitcoinLikeHelper scriptToOutput:script amount:amount];
    if(result)
    {
        resolve(result);
    }
    else
    {
        reject(@"impl_call_error", @"Error while calling LGBitcoinLikeHelper::scriptToOutput", nil);
    }
}

/**
 *Constructs a BitcoinLikeOutput object fromn address and amount objects
 *@param address, string, address that will own the BitcoinLikeOutput object
 *@param amount, Amount object, amount of output
 *@return BitcoinLikeOutput, resulting output object
 */
RCT_REMAP_METHOD(addressToOutput,addressToOutput:(nonnull NSString *)address
                                          amount:(nullable LGAmount *)amount withResolver:(RCTPromiseResolveBlock)resolve rejecter:(RCTPromiseRejectBlock)reject) {

    id result = [LGBitcoinLikeHelper addressToOutput:address amount:amount];
    if(result)
    {
        resolve(result);
    }
    else
    {
        reject(@"impl_call_error", @"Error while calling LGBitcoinLikeHelper::addressToOutput", nil);
    }
}

/**
 *Transforms a transaction to a binary
 *@param preparedTransaction, BitcoinLikePreparedTransaction object, transaction to serialize
 *@return serialized transaction
 */
RCT_REMAP_METHOD(serializeTransaction,serializeTransaction:(nonnull LGBitcoinLikePreparedTransaction *)preparedTransaction withResolver:(RCTPromiseResolveBlock)resolve rejecter:(RCTPromiseRejectBlock)reject) {

    id result = [LGBitcoinLikeHelper serializeTransaction:preparedTransaction];
    if(result)
    {
        resolve(result);
    }
    else
    {
        reject(@"impl_call_error", @"Error while calling LGBitcoinLikeHelper::serializeTransaction", nil);
    }
}

/**
 *Transform a serialized transaction to a transaction object
 *@param transaction, binary, serialized transaction
 *@return BitcoinLikeTransaction object
 */
RCT_REMAP_METHOD(parseTransaction,parseTransaction:(nonnull NSData *)transaction withResolver:(RCTPromiseResolveBlock)resolve rejecter:(RCTPromiseRejectBlock)reject) {

    id result = [LGBitcoinLikeHelper parseTransaction:transaction];
    if(result)
    {
        resolve(result);
    }
    else
    {
        reject(@"impl_call_error", @"Error while calling LGBitcoinLikeHelper::parseTransaction", nil);
    }
}
@end
