

@interface IGVideoPlaybackConfigBuilder : NSObject {

	char _withLooping;
	char _withAudioEnabled;
	char _withHardwareSoundControl;
	char _withOneTapIndicatorNUX;
	char _withTimeIndicator;
	char _withCaption;

}

@property (assign,nonatomic) char withLooping;                           //@synthesize withLooping=_withLooping - In the implementation block
@property (assign,nonatomic) char withAudioEnabled;                      //@synthesize withAudioEnabled=_withAudioEnabled - In the implementation block
@property (assign,nonatomic) char withHardwareSoundControl;              //@synthesize withHardwareSoundControl=_withHardwareSoundControl - In the implementation block
@property (assign,nonatomic) char withOneTapIndicatorNUX;                //@synthesize withOneTapIndicatorNUX=_withOneTapIndicatorNUX - In the implementation block
@property (assign,nonatomic) char withTimeIndicator;                     //@synthesize withTimeIndicator=_withTimeIndicator - In the implementation block
@property (assign,nonatomic) char withCaption;                           //@synthesize withCaption=_withCaption - In the implementation block
-(id)withLooping:(char)arg1 ;
-(id)withAudioEnabled:(char)arg1 ;
-(id)withOneTapIndicatorNUX:(char)arg1 ;
-(id)playbackConfig;
-(char)withLooping;
-(char)withAudioEnabled;
-(char)withHardwareSoundControl;
-(char)withOneTapIndicatorNUX;
-(char)withTimeIndicator;
-(char)withCaption;
-(id)withHardwareSoundControl:(char)arg1 ;
-(id)withTimeIndicator:(char)arg1 ;
-(id)withCaption:(char)arg1 ;
-(void)setWithLooping:(char)arg1 ;
-(void)setWithAudioEnabled:(char)arg1 ;
-(void)setWithHardwareSoundControl:(char)arg1 ;
-(void)setWithOneTapIndicatorNUX:(char)arg1 ;
-(void)setWithTimeIndicator:(char)arg1 ;
-(void)setWithCaption:(char)arg1 ;
-(id)init;
@end

