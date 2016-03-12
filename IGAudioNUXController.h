

@protocol IGAudioNUXControllerDelegate;
@class IGMediaOverlayIndicator;

@interface IGAudioNUXController : NSObject {

	char _hasShownPlaybackNUX;
	id<IGAudioNUXControllerDelegate> _delegate;
	IGMediaOverlayIndicator* _indicator;

}

@property (assign,nonatomic,__weak) id<IGAudioNUXControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) IGMediaOverlayIndicator * indicator;                           //@synthesize indicator=_indicator - In the implementation block
@property (assign,nonatomic) char hasShownPlaybackNUX;                                      //@synthesize hasShownPlaybackNUX=_hasShownPlaybackNUX - In the implementation block
-(void)didPressVolumeButton:(id)arg1 ;
-(IGMediaOverlayIndicator *)indicator;
-(void)setIndicator:(IGMediaOverlayIndicator *)arg1 ;
-(void)didChangeMuteSwitch:(id)arg1 ;
-(void)updateIndicatorWithAudioEnabled:(char)arg1 ;
-(void)showNUXForHardwareVolumeControl;
-(char)hasShownPlaybackNUX;
-(void)setHasShownPlaybackNUX:(char)arg1 ;
-(id)initWithIndicator:(id)arg1 ;
-(void)showOneTapIndicatorNUX;
-(void)didTapOnVideo;
-(void)setDelegate:(id<IGAudioNUXControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<IGAudioNUXControllerDelegate>)delegate;
@end

