

@class NSMutableArray;

@interface IGAnalyticsEventCollector : NSObject {

	NSMutableArray* _events;

}

@property (nonatomic,readonly) NSMutableArray * events;              //@synthesize events=_events - In the implementation block
+(id)sharedInstance;
-(void)addAnalyticEvent:(id)arg1 ;
-(id)collectedEvents;
-(void)clearCollectedEvents;
-(id)init;
-(NSMutableArray *)events;
@end

