

#import <Instagram/Instagram-Structs.h>
@interface IGReachabilityAnnouncerAdaptor : NSObject {

	function<void (AFNetworkReachabilityStatus, AFNetworkReachabilityStatus)>* _reachabilityStateCallback;
	int _reachabilityState;

}

@property (assign) int reachabilityState;              //@synthesize reachabilityState=_reachabilityState - In the implementation block
-(int)reachabilityState;
-(void)setReachabilityState:(int)arg1 ;
-(id)initWithReachabilityStateCallback:(function<void (AFNetworkReachabilityStatus, AFNetworkReachabilityStatus)>*)arg1 ;
-(void)dealloc;
-(void)reachabilityDidChange:(id)arg1 ;
@end

