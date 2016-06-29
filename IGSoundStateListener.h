

@protocol IGSoundStateListenerDelegate;
@interface IGSoundStateListener : NSObject {

	char _shouldEnableAudio;
	id<IGSoundStateListenerDelegate> _delegate;

}

@property (assign,nonatomic) char shouldEnableAudio;                                        //@synthesize shouldEnableAudio=_shouldEnableAudio - In the implementation block
@property (assign,nonatomic,__weak) id<IGSoundStateListenerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(char)shouldEnableAudio;
-(void)didReceiveMuteStateDidChangeNotification:(id)arg1 ;
-(void)didReceiveDidPressVolumeButtonNotification:(id)arg1 ;
-(void)setShouldEnableAudio:(char)arg1 ;
-(void)setDelegate:(id<IGSoundStateListenerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<IGSoundStateListenerDelegate>)delegate;
@end

