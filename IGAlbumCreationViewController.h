
#import <UIKit/UIViewController.h>
#import <Instagram/IGAlbumCameraViewControllerDelegate.h>
#import <Instagram/IGAlbumCameraPreviewViewControllerDelegate.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>

@protocol IGAlbumCreationViewControllerNavigationDelegate;
@class IGAlbumComposerWaterfallLoggingContext, IGAlbumCameraViewController, NSString;

@interface IGAlbumCreationViewController : UIViewController <IGAlbumCameraViewControllerDelegate, IGAlbumCameraPreviewViewControllerDelegate, UIViewControllerTransitioningDelegate> {

	char _configuringTitleBeforeSharing;
	id<IGAlbumCreationViewControllerNavigationDelegate> _navigationDelegate;
	int _state;
	IGAlbumComposerWaterfallLoggingContext* _loggingContext;
	IGAlbumCameraViewController* _cameraViewController;

}

@property (nonatomic,readonly) IGAlbumCameraViewController * cameraViewController;                                       //@synthesize cameraViewController=_cameraViewController - In the implementation block
@property (assign,nonatomic) char configuringTitleBeforeSharing;                                                         //@synthesize configuringTitleBeforeSharing=_configuringTitleBeforeSharing - In the implementation block
@property (assign,nonatomic) int state;                                                                                  //@synthesize state=_state - In the implementation block
@property (assign,nonatomic,__weak) id<IGAlbumCreationViewControllerNavigationDelegate> navigationDelegate;              //@synthesize navigationDelegate=_navigationDelegate - In the implementation block
@property (nonatomic,retain) IGAlbumComposerWaterfallLoggingContext * loggingContext;                                    //@synthesize loggingContext=_loggingContext - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cameraPreviewViewControllerDidTapCancel:(id)arg1 ;
-(void)cameraPreviewViewControllerDidTapShare:(id)arg1 asset:(id)arg2 albumModel:(id)arg3 ;
-(void)albumCameraViewControllerDidDismissFromCloseButton:(id)arg1 ;
-(void)albumCameraViewControllerDidTapFlashButton:(id)arg1 ;
-(void)albumCameraViewController:(id)arg1 didEnterState:(int)arg2 ;
-(void)albumCameraViewControllerDidTapSwitchCamerasButton:(id)arg1 ;
-(void)albumCameraViewController:(id)arg1 didOutputAsset:(id)arg2 ;
-(id)itemInfoFromAsset:(id)arg1 albumModel:(id)arg2 uploadID:(id)arg3 ;
-(void)albumCameraViewController:(id)arg1 didTapDisabledAsset:(id)arg2 ;
-(char)configuringTitleBeforeSharing;
-(void)setConfiguringTitleBeforeSharing:(char)arg1 ;
-(void)setLoggingContext:(IGAlbumComposerWaterfallLoggingContext *)arg1 ;
-(IGAlbumComposerWaterfallLoggingContext *)loggingContext;
-(void)dealloc;
-(int)state;
-(void)setState:(int)arg1 ;
-(char)prefersStatusBarHidden;
-(void)loadView;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidDisappear:(char)arg1 ;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(IGAlbumCameraViewController *)cameraViewController;
-(id<IGAlbumCreationViewControllerNavigationDelegate>)navigationDelegate;
-(void)setNavigationDelegate:(id<IGAlbumCreationViewControllerNavigationDelegate>)arg1 ;
@end

