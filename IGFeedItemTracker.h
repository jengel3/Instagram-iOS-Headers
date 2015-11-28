
#import <Instagram/IGImpressionTracker.h>

@class NSString;

@interface IGFeedItemTracker : IGImpressionTracker {

	char _trackWithNoLatency;
	/*^block*/id _trackingTokenBlock;
	NSString* _eventPrefix;

}

@property (nonatomic,copy) id trackingTokenBlock;                  //@synthesize trackingTokenBlock=_trackingTokenBlock - In the implementation block
@property (assign,nonatomic) char trackWithNoLatency;              //@synthesize trackWithNoLatency=_trackWithNoLatency - In the implementation block
@property (nonatomic,copy) NSString * eventPrefix;                 //@synthesize eventPrefix=_eventPrefix - In the implementation block
-(void)setTrackWithNoLatency:(char)arg1 ;
-(void)setEventPrefix:(NSString *)arg1 ;
-(id)eventWithSuffix:(id)arg1 ;
-(char)trackWithNoLatency;
-(id)trackingTokenBlock;
-(NSString *)eventPrefix;
-(id)trackEvent:(id)arg1 forFeedItem:(id)arg2 ;
-(id)trackTimespentForFeedItem:(id)arg1 withTimespent:(double)arg2 ;
-(void)setTrackingTokenBlock:(id)arg1 ;
@end

