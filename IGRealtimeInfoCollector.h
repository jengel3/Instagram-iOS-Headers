

@class NSMutableArray;

@interface IGRealtimeInfoCollector : NSObject {

	NSMutableArray* _info;

}

@property (nonatomic,readonly) NSMutableArray * info;              //@synthesize info=_info - In the implementation block
+(id)sharedInstance;
-(id)collectedInfo;
-(void)clearCollectedInfo;
-(id)init;
-(NSMutableArray *)info;
-(void)addInfo:(id)arg1 ;
@end

