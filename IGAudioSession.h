

@class NSDate, MPMusicPlayerController;

@interface IGAudioSession : NSObject {

	NSDate* _resignedActiveTime;
	MPMusicPlayerController* _musicPlayerController;
	char _overrideMuteSwitch;
	float _previousVolume;

}

@property (assign,nonatomic) char overrideMuteSwitch;              //@synthesize overrideMuteSwitch=_overrideMuteSwitch - In the implementation block
@property (assign,nonatomic) float previousVolume;                 //@synthesize previousVolume=_previousVolume - In the implementation block
+(id)sharedInstance;
-(void)updateCategoryForRecording:(char)arg1 ;
-(void)setPreviousVolume:(float)arg1 ;
-(float)previousVolume;
-(void)updateCategoryForPlayback;
-(void)updateCategoryForRecording;
-(char)overrideMuteSwitch;
-(void)setOverrideMuteSwitch:(char)arg1 ;
-(void)dealloc;
-(id)init;
-(void)volumeChanged:(id)arg1 ;
-(void)audioSessionRouteChange:(id)arg1 ;
-(void)didBecomeActive;
-(void)willResignActive;
@end

