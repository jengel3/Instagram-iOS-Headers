

@class NSString;

@interface IGFeedItemTracker : NSObject {

	char _trackWithNoLatency;
	/*^block*/id _trackingTokenBlock;
	NSString* _eventPrefix;

}

@property (nonatomic,copy) id trackingTokenBlock;                  //@synthesize trackingTokenBlock=_trackingTokenBlock - In the implementation block
@property (assign,nonatomic) char trackWithNoLatency;              //@synthesize trackWithNoLatency=_trackWithNoLatency - In the implementation block
@property (nonatomic,copy) NSString * eventPrefix;                 //@synthesize eventPrefix=_eventPrefix - In the implementation block
+(void)reportEvent:(id)arg1 immediately:(char)arg2 ;
-(void)logEvent:(id)arg1 module:(id)arg2 forFeedItem:(id)arg3 withExtraDictionary:(id)arg4 ;
-(void)logEvent:(id)arg1 forFeedItem:(id)arg2 withExtraDictionary:(id)arg3 ;
-(void)logEvent:(id)arg1 module:(id)arg2 forFeedItem:(id)arg3 withExtraDictionary:(id)arg4 navState:(id)arg5 ;
-(char)trackWithNoLatency;
-(id)trackingTokenBlock;
-(NSString *)eventPrefix;
-(void)trackTimespentForFeedItem:(id)arg1 module:(id)arg2 timespent:(double)arg3 extra:(id)arg4 ;
-(void)setTrackWithNoLatency:(char)arg1 ;
-(void)setTrackingTokenBlock:(id)arg1 ;
-(void)setEventPrefix:(NSString *)arg1 ;
-(id)eventWithSuffix:(id)arg1 ;
@end

