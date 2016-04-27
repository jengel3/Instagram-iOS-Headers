

@class NSMutableSet;

@interface IGFeedVideoManager : NSObject {

	NSMutableSet* _inUsePool;
	NSMutableSet* _availablePool;

}

@property (nonatomic,readonly) int playerInUseCount; 
@property (nonatomic,readonly) NSMutableSet * inUsePool;                  //@synthesize inUsePool=_inUsePool - In the implementation block
@property (nonatomic,readonly) NSMutableSet * availablePool;              //@synthesize availablePool=_availablePool - In the implementation block
+(id)sharedFeedVideoManager;
-(void)finishUsingPlayer:(id)arg1 ;
-(id)dequeueReusablePlayer;
-(NSMutableSet *)inUsePool;
-(NSMutableSet *)availablePool;
-(void)notifyPlayerUsageChange;
-(int)playerInUseCount;
-(void)dealloc;
-(id)init;
-(void)didReceiveMemoryWarning:(id)arg1 ;
@end

