// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from random.djinni

#import "RCTCoreLGRandomNumberGenerator.h"


@implementation RCTCoreLGRandomNumberGenerator
//Export module
RCT_EXPORT_MODULE(RCTCoreLGRandomNumberGenerator)

-(instancetype)init
{
    self = [super init];
    //Init Objc implementation
    if(self)
    {
        self.objcImpl = [[LGRandomNumberGeneratorImpl alloc] init];
    }
    return self;
}

/**
 * Generates random bytes.
 * @params size number of bytes to generate
 * @return 'size' random bytes
 */
RCT_REMAP_METHOD(getRandomBytes,getRandomBytes:(int32_t)size withResolver:(RCTPromiseResolveBlock)resolve rejecter:(RCTPromiseRejectBlock)reject) {

    id result = [self.objcImpl getRandomBytes:size];
    if(result)
    {
        resolve(result);
    }
    else
    {
        reject(@"impl_call_error", @"Error while calling LGRandomNumberGeneratorImpl::getRandomBytes", nil);
    }
}

/**
 * Generates random 32 bits integer.
 * @return random 32 bits integer
 */
RCT_REMAP_METHOD(getRandomInt,getRandomIntWithResolver:(RCTPromiseResolveBlock)resolve rejecter:(RCTPromiseRejectBlock)reject) {

    id result = [self.objcImpl getRandomInt];
    if(result)
    {
        resolve(result);
    }
    else
    {
        reject(@"impl_call_error", @"Error while calling LGRandomNumberGeneratorImpl::getRandomInt", nil);
    }
}

/**
 * Generates random 64 bits integer.
 * @return random 64 bits integer
 */
RCT_REMAP_METHOD(getRandomLong,getRandomLongWithResolver:(RCTPromiseResolveBlock)resolve rejecter:(RCTPromiseRejectBlock)reject) {

    id result = [self.objcImpl getRandomLong];
    if(result)
    {
        resolve(result);
    }
    else
    {
        reject(@"impl_call_error", @"Error while calling LGRandomNumberGeneratorImpl::getRandomLong", nil);
    }
}

/**
 * Generates random byte.
 * @return random byte
 */
RCT_REMAP_METHOD(getRandomByte,getRandomByteWithResolver:(RCTPromiseResolveBlock)resolve rejecter:(RCTPromiseRejectBlock)reject) {

    id result = [self.objcImpl getRandomByte];
    if(result)
    {
        resolve(result);
    }
    else
    {
        reject(@"impl_call_error", @"Error while calling LGRandomNumberGeneratorImpl::getRandomByte", nil);
    }
}
@end
