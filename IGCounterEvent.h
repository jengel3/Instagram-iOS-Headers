
#import <Instagram/IGEventAggregator.h>

@class NSMutableDictionary;

@interface IGCounterEvent : IGEventAggregator {

	NSMutableDictionary* _pendingCounters;

}
-(void)incrementCounter:(id)arg1 byAmount:(int)arg2 ;
-(void)save;
-(void)reset;
@end

