
#import <Instagram/IGEventAggregator.h>

@class NSMutableDictionary;

@interface IGAverageEvent : IGEventAggregator {

	NSMutableDictionary* _pendingAverages;

}

@property (nonatomic,retain) NSMutableDictionary * pendingAverages;              //@synthesize pendingAverages=_pendingAverages - In the implementation block
-(NSMutableDictionary *)pendingAverages;
-(id)createCounterForAverage:(id)arg1 withFirstValue:(double)arg2 ;
-(void)setPendingAverages:(NSMutableDictionary *)arg1 ;
-(void)recordAverage:(id)arg1 value:(double)arg2 ;
-(void)save;
-(void)reset;
-(id)initWithDelegate:(id)arg1 ;
@end

