
#import <Instagram/IGTimerProxyObjectType.h>

@class IGTrackBarView, IGStatusBarOverlayViewPresenter, NSTimer, IGStatusBarVolumeViewConfiguration, NSString;

@interface IGStatusBarVolumeViewController : NSObject <IGTimerProxyObjectType> {

	char _useStatusBarVolumeView;
	char _forceVolumeViewForFullscreen;
	IGTrackBarView* _volumeView;
	IGStatusBarOverlayViewPresenter* _presenter;
	NSTimer* _autoHideTimer;
	id _currentConfigContext;
	IGStatusBarVolumeViewConfiguration* _defaultConfig;

}

@property (nonatomic,readonly) IGTrackBarView * volumeView;                                     //@synthesize volumeView=_volumeView - In the implementation block
@property (nonatomic,readonly) IGStatusBarOverlayViewPresenter * presenter;                     //@synthesize presenter=_presenter - In the implementation block
@property (nonatomic,retain) NSTimer * autoHideTimer;                                           //@synthesize autoHideTimer=_autoHideTimer - In the implementation block
@property (assign,nonatomic,__weak) id currentConfigContext;                                    //@synthesize currentConfigContext=_currentConfigContext - In the implementation block
@property (nonatomic,readonly) IGStatusBarVolumeViewConfiguration * defaultConfig;              //@synthesize defaultConfig=_defaultConfig - In the implementation block
@property (assign,nonatomic) char useStatusBarVolumeView;                                       //@synthesize useStatusBarVolumeView=_useStatusBarVolumeView - In the implementation block
@property (assign,nonatomic) char forceVolumeViewForFullscreen;                                 //@synthesize forceVolumeViewForFullscreen=_forceVolumeViewForFullscreen - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedController;
-(void)setForceVolumeViewForFullscreen:(char)arg1 ;
-(void)setConfig:(id)arg1 context:(id)arg2 ;
-(void)updateStatusBarEnabledState;
-(void)unsetConfigForContext:(id)arg1 ;
-(void)showVolumeView:(char)arg1 completion:(/*^block*/id)arg2 ;
-(void)invalidateAutoHideTimer;
-(void)updateConfig:(id)arg1 ;
-(void)applicationDidChangeStatusBarFrame:(id)arg1 ;
-(void)showView:(char)arg1 completion:(/*^block*/id)arg2 ;
-(void)enableStatusBarVolumeView:(char)arg1 ;
-(char)useStatusBarVolumeView;
-(void)setCurrentConfigContext:(id)arg1 ;
-(id)currentConfigContext;
-(char)forceVolumeViewForFullscreen;
-(char)allowStatusBarVolumeView;
-(void)didPressVolumeButton:(id)arg1 ;
-(void)didFireTimer:(id)arg1 ;
-(void)setUseStatusBarVolumeView:(char)arg1 ;
-(NSTimer *)autoHideTimer;
-(void)setAutoHideTimer:(NSTimer *)arg1 ;
-(IGTrackBarView *)volumeView;
-(void)dealloc;
-(id)init;
-(void)applicationWillResignActive:(id)arg1 ;
-(IGStatusBarVolumeViewConfiguration *)defaultConfig;
-(IGStatusBarOverlayViewPresenter *)presenter;
@end

