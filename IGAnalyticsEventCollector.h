

@class NSMutableArray;

@interface IGAnalyticsEventCollector : NSObject {

	NSMutableArray* _events;

}

@property (nonatomic,readonly) NSMutableArray * events;              //@synthesize events=_events - In the implementation block
+(id)sharedInstance;
-(id)collectedEvents;
-(void)clearCollectedEvents;
-(void)addAnalyticEvent:(id)arg1 ;
-(id)init;
-(NSMutableArray *)events;
@end

