

@protocol IGVideoViewLogging;
@interface IGFeedVideoViewSession : NSObject {

	char _tracking;
	char _playing;
	float _videoViewStartTime;
	int _videoViewStartLoopCount;
	id<IGVideoViewLogging> _logger;

}

@property (assign,nonatomic) char tracking;                                //@synthesize tracking=_tracking - In the implementation block
@property (assign,nonatomic) char playing;                                 //@synthesize playing=_playing - In the implementation block
@property (assign,nonatomic) float videoViewStartTime;                     //@synthesize videoViewStartTime=_videoViewStartTime - In the implementation block
@property (assign,nonatomic) int videoViewStartLoopCount;                  //@synthesize videoViewStartLoopCount=_videoViewStartLoopCount - In the implementation block
@property (nonatomic,readonly) id<IGVideoViewLogging> logger;              //@synthesize logger=_logger - In the implementation block
-(id)initWithLogger:(id)arg1 ;
-(void)updateWithCellPercentVisible:(float)arg1 player:(id)arg2 ;
-(void)videoDidStopForPlayer:(id)arg1 cellPercentVisible:(float)arg2 ;
-(void)videoDidStartForPlayer:(id)arg1 cellPercentVisible:(float)arg2 ;
-(void)setVideoViewStartTime:(float)arg1 ;
-(void)setVideoViewStartLoopCount:(int)arg1 ;
-(float)videoViewStartTime;
-(int)videoViewStartLoopCount;
-(id<IGVideoViewLogging>)logger;
-(void)setTracking:(char)arg1 ;
-(char)tracking;
-(char)playing;
-(void)setPlaying:(char)arg1 ;
@end

