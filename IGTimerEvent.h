
#import <Instagram/IGEventAggregator.h>

@class NSMutableDictionary;

@interface IGTimerEvent : IGEventAggregator {

	NSMutableDictionary* _pendingEvents;

}

@property (nonatomic,retain) NSMutableDictionary * pendingEvents;              //@synthesize pendingEvents=_pendingEvents - In the implementation block
-(void)recordEvent:(id)arg1 forTimer:(id)arg2 uuid:(id)arg3 ;
-(void)startTimer:(id)arg1 uuid:(id)arg2 ;
-(id)keyForTimer:(id)arg1 uuid:(id)arg2 ;
-(id)processEvent:(id)arg1 ;
-(id)createEventObjectForTimer:(id)arg1 uuid:(id)arg2 ;
-(void)setPendingEvents:(NSMutableDictionary *)arg1 ;
-(void)save;
-(void)reset;
-(id)initWithDelegate:(id)arg1 ;
-(NSMutableDictionary *)pendingEvents;
@end

