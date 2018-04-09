// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from thread_dispatcher.djinni

#import "RCTCoreLGExecutionContext.h"


@implementation RCTCoreLGExecutionContext
//Export module
RCT_EXPORT_MODULE(RCTCoreLGExecutionContext)

-(instancetype)init
{
    self = [super init];
    //Init Objc implementation
    if(self)
    {
        self.objcImpl = [[LGExecutionContextImpl alloc] init];
    }
    return self;
}

/**
 *Execute a given runnable
 *@param runnalbe, Runnable object
 */
RCT_REMAP_METHOD(execute,execute:(nullable LGRunnable *)runnable) {

    [self.objcImpl execute:runnable];
}

/**
 *Execute a given runnable with a delay
 *@param runnalbe, Runnable object
 *@param millis, 64 bits integer, delay in milli-seconds
 */
RCT_REMAP_METHOD(delay,delay:(nullable LGRunnable *)runnable
                      millis:(int64_t)millis) {

    [self.objcImpl delay:runnable millis:millis];
}
@end
