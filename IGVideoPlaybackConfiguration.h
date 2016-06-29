

@interface IGVideoPlaybackConfiguration : NSObject {

	char _looping;
	char _audioEnabled;
	char _allowHardwareSoundControl;
	char _showOneTapIndicatorNUX;
	char _showTimeIndicator;
	char _allowCaption;

}

@property (nonatomic,readonly) char looping;                                //@synthesize looping=_looping - In the implementation block
@property (nonatomic,readonly) char audioEnabled;                           //@synthesize audioEnabled=_audioEnabled - In the implementation block
@property (nonatomic,readonly) char allowHardwareSoundControl;              //@synthesize allowHardwareSoundControl=_allowHardwareSoundControl - In the implementation block
@property (nonatomic,readonly) char showOneTapIndicatorNUX;                 //@synthesize showOneTapIndicatorNUX=_showOneTapIndicatorNUX - In the implementation block
@property (nonatomic,readonly) char showTimeIndicator;                      //@synthesize showTimeIndicator=_showTimeIndicator - In the implementation block
@property (nonatomic,readonly) char allowCaption;                           //@synthesize allowCaption=_allowCaption - In the implementation block
-(char)audioEnabled;
-(char)looping;
-(char)showOneTapIndicatorNUX;
-(char)allowHardwareSoundControl;
-(char)showTimeIndicator;
-(char)allowCaption;
-(id)initWithLooping:(char)arg1 audioEnabled:(char)arg2 allowHardwareSoundControl:(char)arg3 showOneTapIndicatorNUX:(char)arg4 showTimeIndicator:(char)arg5 allowCaption:(char)arg6 ;
-(id)init;
@end

