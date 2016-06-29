

@protocol RCTFrameUpdateObserver <NSObject>
@property (getter=isPaused,nonatomic,readonly) char paused; 
@property (nonatomic,copy) id pauseCallback; 
@required
-(void)didUpdateFrame:(id)arg1;
-(id)pauseCallback;
-(void)setPauseCallback:(/*^block*/id)arg1;
-(char)isPaused;

@end

