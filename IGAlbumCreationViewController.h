
#import <UIKit/UIViewController.h>
#import <Instagram/IGAlbumAddTextViewControllerDelegate.h>
#import <Instagram/IGAlbumCameraViewControllerDelegate.h>

@protocol IGAlbumCreationViewControllerNavigationDelegate, UIViewControllerTransitioningDelegate;
@class IGReelCreationModel, IGAlbumCameraViewController, NSString;

@interface IGAlbumCreationViewController : UIViewController <IGAlbumAddTextViewControllerDelegate, IGAlbumCameraViewControllerDelegate> {

	char _configuringTitleBeforeSharing;
	id<IGAlbumCreationViewControllerNavigationDelegate> _navigationDelegate;
	IGReelCreationModel* _albumModel;
	id<UIViewControllerTransitioningDelegate> _albumTitleTransitionDelegate;
	IGAlbumCameraViewController* _cameraViewController;

}

@property (nonatomic,retain) IGReelCreationModel * albumModel;                                                           //@synthesize albumModel=_albumModel - In the implementation block
@property (nonatomic,retain) id<UIViewControllerTransitioningDelegate> albumTitleTransitionDelegate;                     //@synthesize albumTitleTransitionDelegate=_albumTitleTransitionDelegate - In the implementation block
@property (nonatomic,readonly) IGAlbumCameraViewController * cameraViewController;                                       //@synthesize cameraViewController=_cameraViewController - In the implementation block
@property (assign,nonatomic) char configuringTitleBeforeSharing;                                                         //@synthesize configuringTitleBeforeSharing=_configuringTitleBeforeSharing - In the implementation block
@property (assign,nonatomic,__weak) id<IGAlbumCreationViewControllerNavigationDelegate> navigationDelegate;              //@synthesize navigationDelegate=_navigationDelegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)albumAddTextViewController:(id)arg1 didFinishWithText:(id)arg2 position:(float)arg3 ;
-(void)albumCameraViewControllerDidDismiss:(id)arg1 ;
-(IGReelCreationModel *)albumModel;
-(void)setAlbumModel:(IGReelCreationModel *)arg1 ;
-(void)albumCameraViewControllerDidTapAddText:(id)arg1 ;
-(void)albumCameraViewControllerDidTapRetake:(id)arg1 ;
-(void)albumCameraViewController:(id)arg1 didEnterState:(int)arg2 ;
-(void)albumCameraViewController:(id)arg1 didPickAsset:(id)arg2 ;
-(void)albumCameraViewControllerDidTapNext:(id)arg1 ;
-(void)albumCameraViewController:(id)arg1 didTapDisabledAsset:(id)arg2 ;
-(id<UIViewControllerTransitioningDelegate>)albumTitleTransitionDelegate;
-(void)setAlbumTitleTransitionDelegate:(id<UIViewControllerTransitioningDelegate>)arg1 ;
-(char)configuringTitleBeforeSharing;
-(void)setConfiguringTitleBeforeSharing:(char)arg1 ;
-(void)dealloc;
-(id)init;
-(char)prefersStatusBarHidden;
-(void)loadView;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(IGAlbumCameraViewController *)cameraViewController;
-(id<IGAlbumCreationViewControllerNavigationDelegate>)navigationDelegate;
-(void)setNavigationDelegate:(id<IGAlbumCreationViewControllerNavigationDelegate>)arg1 ;
@end

