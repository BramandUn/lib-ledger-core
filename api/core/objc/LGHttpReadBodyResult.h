// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from http_client.djinni

#import "LGError.h"
#import <Foundation/Foundation.h>

/**Structure representing Http response body */
@interface LGHttpReadBodyResult : NSObject
- (nonnull instancetype)initWithError:(nullable LGError *)error
                                 data:(nullable NSData *)data;
+ (nonnull instancetype)HttpReadBodyResultWithError:(nullable LGError *)error
                                               data:(nullable NSData *)data;

/**Optional Error structure, error in case of http request failure */
@property (nonatomic, readonly, nullable) LGError * error;

/**Optional binary, data returned by http request in case of success */
@property (nonatomic, readonly, nullable) NSData * data;

@end
