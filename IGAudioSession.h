

@class MPMusicPlayerController;

@interface IGAudioSession : NSObject {

	char _overrideMuteSwitch;
	MPMusicPlayerController* _musicPlayerController;
	float _previousVolume;

}

@property (assign,nonatomic) char overrideMuteSwitch;                                        //@synthesize overrideMuteSwitch=_overrideMuteSwitch - In the implementation block
@property (nonatomic,readonly) MPMusicPlayerController * musicPlayerController;              //@synthesize musicPlayerController=_musicPlayerController - In the implementation block
@property (assign,nonatomic) float previousVolume;                                           //@synthesize previousVolume=_previousVolume - In the implementation block
+(id)sharedInstance;
-(void)activateRecordingSession:(char)arg1 ;
-(void)setPreviousVolume:(float)arg1 ;
-(float)previousVolume;
-(void)activatePlaybackSession;
-(void)activateRecordingSession;
-(char)overrideMuteSwitch;
-(void)setOverrideMuteSwitch:(char)arg1 ;
-(MPMusicPlayerController *)musicPlayerController;
-(void)dealloc;
-(id)init;
-(void)volumeChanged:(id)arg1 ;
-(void)audioSessionRouteChange:(id)arg1 ;
-(void)didBecomeActive;
-(void)willResignActive;
@end

