#import "SentryIntegrationProtocol.h"
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface SentryFramesTrackingIntegration : NSObject <SentryIntegrationProtocol>

- (void)stop;

@end

NS_ASSUME_NONNULL_END
