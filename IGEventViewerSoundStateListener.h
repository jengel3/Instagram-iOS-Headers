

@protocol IGEventViewerSoundStateListenerDelegate;
@interface IGEventViewerSoundStateListener : NSObject {

	char _shouldEnableAudio;
	id<IGEventViewerSoundStateListenerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<IGEventViewerSoundStateListenerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char shouldEnableAudio;                                                   //@synthesize shouldEnableAudio=_shouldEnableAudio - In the implementation block
-(char)shouldEnableAudio;
-(void)didReceiveMuteStateDidChangeNotification:(id)arg1 ;
-(void)didReceiveDidPressVolumeButtonNotification:(id)arg1 ;
-(void)setShouldEnableAudio:(char)arg1 ;
-(void)setDelegate:(id<IGEventViewerSoundStateListenerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<IGEventViewerSoundStateListenerDelegate>)delegate;
@end

