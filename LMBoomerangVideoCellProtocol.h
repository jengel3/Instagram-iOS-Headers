

@protocol LMBoomerangVideoCellProtocol <NSObject>
@property (assign,nonatomic) float videoSpeedup; 
@optional
-(float)videoSpeedup;
-(void)setVideoSpeedup:(float)arg1;

@required
-(CGRect*)playbackFrame;
-(void)play;
-(void)stop;

@end

