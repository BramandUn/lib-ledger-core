// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from bitcoin_like_wallet.djinni

#import "RCTCoreLGBitcoinLikeBlock.h"


@implementation RCTCoreLGBitcoinLikeBlock
//Export module
RCT_EXPORT_MODULE(RCTCoreLGBitcoinLikeBlock)

-(instancetype)init
{
    self = [super init];
    //Init Objc implementation
    if(self)
    {
        self.objcImpl = [[LGBitcoinLikeBlock alloc] init];
    }
    return self;
}

/**
 *Hash of block
 *@return string representing hash of this block
 */
RCT_REMAP_METHOD(getHash,getHashWithResolver:(RCTPromiseResolveBlock)resolve rejecter:(RCTPromiseRejectBlock)reject) {

    id result = [self.objcImpl getHash];
    if(result)
    {
        resolve(result);
    }
    else
    {
        reject(@"impl_call_error", @"Error while calling LGBitcoinLikeBlock::getHash", nil);
    }
}

/**
 *Height of block in blockchain
 *@return 64 bits integer, height of block
 */
RCT_REMAP_METHOD(getHeight,getHeightWithResolver:(RCTPromiseResolveBlock)resolve rejecter:(RCTPromiseRejectBlock)reject) {

    id result = [self.objcImpl getHeight];
    if(result)
    {
        resolve(result);
    }
    else
    {
        reject(@"impl_call_error", @"Error while calling LGBitcoinLikeBlock::getHeight", nil);
    }
}

/**
 *Timestamp when block was mined
 *@return Date object, date when block was appended to blockchain
 */
RCT_REMAP_METHOD(getTime,getTimeWithResolver:(RCTPromiseResolveBlock)resolve rejecter:(RCTPromiseRejectBlock)reject) {

    id result = [self.objcImpl getTime];
    if(result)
    {
        resolve(result);
    }
    else
    {
        reject(@"impl_call_error", @"Error while calling LGBitcoinLikeBlock::getTime", nil);
    }
}
@end
