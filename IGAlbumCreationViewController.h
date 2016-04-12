
#import <UIKit/UIViewController.h>
#import <Instagram/IGAlbumCameraViewControllerDelegate.h>
#import <Instagram/IGAlbumFullscreenViewControllerDelegate.h>
#import <Instagram/IGAlbumTitleViewControllerDelegate.h>

@protocol IGAlbumCreationViewControllerDataDelegate, IGAlbumCreationViewControllerNavigationDelegate, UIViewControllerTransitioningDelegate;
@class IGAlbumCreationViewModel, IGAlbumFullscreenViewController, IGAlbumCameraViewController, NSString;

@interface IGAlbumCreationViewController : UIViewController <IGAlbumCameraViewControllerDelegate, IGAlbumFullscreenViewControllerDelegate, IGAlbumTitleViewControllerDelegate> {

	id<IGAlbumCreationViewControllerDataDelegate> _dataDelegate;
	id<IGAlbumCreationViewControllerNavigationDelegate> _navigationDelegate;
	unsigned _viewMode;
	IGAlbumCreationViewModel* _viewModel;
	id<UIViewControllerTransitioningDelegate> _albumTitleTransitionDelegate;
	IGAlbumFullscreenViewController* _fullscreenController;
	IGAlbumCameraViewController* _cameraViewController;

}

@property (assign,nonatomic,__weak) id<IGAlbumCreationViewControllerDataDelegate> dataDelegate;                          //@synthesize dataDelegate=_dataDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<IGAlbumCreationViewControllerNavigationDelegate> navigationDelegate;              //@synthesize navigationDelegate=_navigationDelegate - In the implementation block
@property (assign,nonatomic) unsigned viewMode;                                                                          //@synthesize viewMode=_viewMode - In the implementation block
@property (nonatomic,retain) IGAlbumCreationViewModel * viewModel;                                                       //@synthesize viewModel=_viewModel - In the implementation block
@property (nonatomic,retain) id<UIViewControllerTransitioningDelegate> albumTitleTransitionDelegate;                     //@synthesize albumTitleTransitionDelegate=_albumTitleTransitionDelegate - In the implementation block
@property (nonatomic,retain) IGAlbumFullscreenViewController * fullscreenController;                                     //@synthesize fullscreenController=_fullscreenController - In the implementation block
@property (nonatomic,readonly) IGAlbumCameraViewController * cameraViewController;                                       //@synthesize cameraViewController=_cameraViewController - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)albumCameraViewControllerDidDismiss:(id)arg1 ;
-(void)albumCameraViewControllerDidTapAddPeople:(id)arg1 ;
-(void)albumCameraViewControllerDidTapTitle:(id)arg1 ;
-(void)albumCameraViewControllerDidTapRetake:(id)arg1 ;
-(void)albumCameraViewControllerDidTapCurrentAlbumButton:(id)arg1 ;
-(void)albumCameraViewController:(id)arg1 didEnterState:(int)arg2 ;
-(void)albumCameraViewController:(id)arg1 didPickAsset:(id)arg2 ;
-(void)currentAlbumUpdated:(id)arg1 ;
-(void)setupViewMode;
-(IGAlbumFullscreenViewController *)fullscreenController;
-(void)switchChildViewControllersFromController:(id)arg1 toController:(id)arg2 ;
-(void)setFullscreenController:(IGAlbumFullscreenViewController *)arg1 ;
-(void)initFullscreenController;
-(void)albumCameraViewController:(id)arg1 didTapDisabledAsset:(id)arg2 ;
-(void)albumFullscreenViewControllerShouldDismiss:(id)arg1 ;
-(void)albumFullscreenViewControllerDidTapCameraButton:(id)arg1 ;
-(void)albumTitleViewController:(id)arg1 didFinishWithTitle:(id)arg2 ;
-(id<UIViewControllerTransitioningDelegate>)albumTitleTransitionDelegate;
-(void)setAlbumTitleTransitionDelegate:(id<UIViewControllerTransitioningDelegate>)arg1 ;
-(IGAlbumCreationViewModel *)viewModel;
-(void)setViewModel:(IGAlbumCreationViewModel *)arg1 ;
-(void)dealloc;
-(id)init;
-(char)prefersStatusBarHidden;
-(void)loadView;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)dismiss;
-(unsigned)viewMode;
-(void)setDataDelegate:(id<IGAlbumCreationViewControllerDataDelegate>)arg1 ;
-(id<IGAlbumCreationViewControllerDataDelegate>)dataDelegate;
-(IGAlbumCameraViewController *)cameraViewController;
-(void)setViewMode:(unsigned)arg1 ;
-(id<IGAlbumCreationViewControllerNavigationDelegate>)navigationDelegate;
-(void)setNavigationDelegate:(id<IGAlbumCreationViewControllerNavigationDelegate>)arg1 ;
@end

