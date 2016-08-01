

@class MPMusicPlayerController;

@interface IGAudioSession : NSObject {

	char _preventSystemVolumeChange;
	MPMusicPlayerController* _musicPlayerController;
	float _previousVolume;
	int _sessionState;

}

@property (nonatomic,readonly) MPMusicPlayerController * musicPlayerController;              //@synthesize musicPlayerController=_musicPlayerController - In the implementation block
@property (assign,nonatomic) float previousVolume;                                           //@synthesize previousVolume=_previousVolume - In the implementation block
@property (assign,nonatomic) int sessionState;                                               //@synthesize sessionState=_sessionState - In the implementation block
@property (assign,nonatomic) char preventSystemVolumeChange;                                 //@synthesize preventSystemVolumeChange=_preventSystemVolumeChange - In the implementation block
+(id)sharedInstance;
-(void)setPreventSystemVolumeChange:(char)arg1 ;
-(void)activatePlaybackSession;
-(void)activateAudioSession:(char)arg1 ;
-(void)setPreviousVolume:(float)arg1 ;
-(float)previousVolume;
-(char)preventSystemVolumeChange;
-(void)activateRecordingSession;
-(MPMusicPlayerController *)musicPlayerController;
-(void)dealloc;
-(id)init;
-(void)volumeChanged:(id)arg1 ;
-(void)audioSessionRouteChange:(id)arg1 ;
-(void)didBecomeActive;
-(void)setSessionState:(int)arg1 ;
-(int)sessionState;
-(void)didEnterBackground;
-(void)willResignActive;
@end

