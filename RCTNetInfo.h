
#import <Instagram/Instagram-Structs.h>
#import <Instagram/RCTEventEmitter.h>

@class NSString;

@interface RCTNetInfo : RCTEventEmitter {

	SCNetworkReachabilityRef _reachability;
	NSString* _status;
	NSString* _host;

}
+(id)moduleName;
+(id)__rct_export__950;
+(void)load;
-(id)initWithHost:(id)arg1 ;
-(void)getCurrentConnectivity:(/*^block*/id)arg1 reject:(/*^block*/id)arg2 ;
-(id)supportedEvents;
-(void)startObserving;
-(void)stopObserving;
@end

