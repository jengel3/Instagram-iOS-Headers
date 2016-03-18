

@interface IGVideoPlaybackConfiguration : NSObject {

	char _looping;
	char _audioEnabled;
	char _allowHardwareSoundControl;
	float _startTime;

}

@property (assign,nonatomic) char looping;                                //@synthesize looping=_looping - In the implementation block
@property (assign,nonatomic) char audioEnabled;                           //@synthesize audioEnabled=_audioEnabled - In the implementation block
@property (assign,nonatomic) float startTime;                             //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) char allowHardwareSoundControl;              //@synthesize allowHardwareSoundControl=_allowHardwareSoundControl - In the implementation block
+(id)defaultConfig;
-(char)audioEnabled;
-(void)setAllowHardwareSoundControl:(char)arg1 ;
-(char)allowHardwareSoundControl;
-(char)looping;
-(void)setLooping:(char)arg1 ;
-(void)setAudioEnabled:(char)arg1 ;
-(void)setStartTime:(float)arg1 ;
-(float)startTime;
@end

