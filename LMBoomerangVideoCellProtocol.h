

@protocol LMBoomerangVideoCellProtocol <NSObject>
@property (assign,nonatomic) float videoSpeedup; 
@optional
-(void)setVideoSpeedup:(float)arg1;
-(float)videoSpeedup;

@required
-(CGRect*)playbackFrame;
-(void)play;
-(void)stop;

@end

