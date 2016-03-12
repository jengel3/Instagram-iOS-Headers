
#import <Instagram/IGTimerProxyObjectType.h>

@class IGTrackBarView, IGStatusBarOverlayViewPresenter, NSTimer, NSString;

@interface IGStatusBarVolumeViewController : NSObject <IGTimerProxyObjectType> {

	char _useStatusBarVolumeView;
	IGTrackBarView* _volumeView;
	IGStatusBarOverlayViewPresenter* _presenter;
	NSTimer* _autoHideTimer;

}

@property (nonatomic,readonly) IGTrackBarView * volumeView;                              //@synthesize volumeView=_volumeView - In the implementation block
@property (nonatomic,readonly) IGStatusBarOverlayViewPresenter * presenter;              //@synthesize presenter=_presenter - In the implementation block
@property (nonatomic,retain) NSTimer * autoHideTimer;                                    //@synthesize autoHideTimer=_autoHideTimer - In the implementation block
@property (assign,nonatomic) char useStatusBarVolumeView;                                //@synthesize useStatusBarVolumeView=_useStatusBarVolumeView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedController;
-(void)invalidateAutoHideTimer;
-(void)setVolumeViewConfiguration:(id)arg1 ;
-(void)applicationDidChangeStatusBarFrame:(id)arg1 ;
-(void)updateStatusBarEnabledState;
-(void)showView:(char)arg1 completion:(/*^block*/id)arg2 ;
-(void)enableStatusBarVolumeView:(char)arg1 ;
-(char)useStatusBarVolumeView;
-(char)allowStatusBarVolumeView;
-(void)didPressVolumeButton:(id)arg1 ;
-(void)didFireTimer:(id)arg1 ;
-(void)useStatusBarVolumeView:(char)arg1 ;
-(void)showVolumeView:(char)arg1 completion:(/*^block*/id)arg2 ;
-(NSTimer *)autoHideTimer;
-(void)setAutoHideTimer:(NSTimer *)arg1 ;
-(void)setUseStatusBarVolumeView:(char)arg1 ;
-(IGTrackBarView *)volumeView;
-(void)dealloc;
-(id)init;
-(void)applicationWillResignActive:(id)arg1 ;
-(IGStatusBarOverlayViewPresenter *)presenter;
@end

