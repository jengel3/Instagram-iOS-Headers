

@class NSMutableArray;

@interface IGRealtimeEventCollector : NSObject {

	NSMutableArray* _events;

}

@property (nonatomic,readonly) NSMutableArray * events;              //@synthesize events=_events - In the implementation block
+(id)sharedInstance;
-(void)clearCollectedEvents;
-(id)collectedEvents;
-(void)addEvent:(id)arg1 ;
-(id)init;
-(NSMutableArray *)events;
@end

