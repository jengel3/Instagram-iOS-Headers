

@class NSMutableDictionary;

@interface IGFeedVideoStateManager : NSObject {

	NSMutableDictionary* _states;
	NSMutableDictionary* _startTimes;

}

@property (nonatomic,readonly) NSMutableDictionary * states;                  //@synthesize states=_states - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * startTimes;              //@synthesize startTimes=_startTimes - In the implementation block
-(id)allManagedVideos;
-(id)playerForVideo:(id)arg1 ;
-(void)removeManagedObjectsForVideo:(id)arg1 ;
-(void)managePlayer:(id)arg1 videoView:(id)arg2 forVideo:(id)arg3 ;
-(id)videoViewForVideo:(id)arg1 ;
-(void)setStartTime:(float)arg1 forVideo:(id)arg2 ;
-(float)startTimeForVideo:(id)arg1 ;
-(NSMutableDictionary *)startTimes;
-(id)init;
-(NSMutableDictionary *)states;
@end

