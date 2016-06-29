
#import <UIKit/UIViewController.h>
#import <Instagram/IGAlbumFullscreenViewControllerDelegate.h>
#import <Instagram/IGFeedNetworkSourceDelegate.h>

@protocol IGAlbumNetworkSourceViewControllerDelegate;
@class IGAlbumProfileNetworkSource, IGAlbumFocusCoordinator, IGAlbumFullscreenViewController, UIActivityIndicatorView, NSString;

@interface IGAlbumNetworkSourceViewController : UIViewController <IGAlbumFullscreenViewControllerDelegate, IGFeedNetworkSourceDelegate> {

	char _viewHasAppeared;
	char _showNoAlbumItemsErrorAndDismiss;
	id<IGAlbumNetworkSourceViewControllerDelegate> _delegate;
	IGAlbumProfileNetworkSource* _networkSource;
	IGAlbumFocusCoordinator* _focusCoordinator;
	IGAlbumFullscreenViewController* _fullScreenViewController;
	UIActivityIndicatorView* _activityIndicator;

}

@property (nonatomic,__weak,readonly) id<IGAlbumNetworkSourceViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) IGAlbumProfileNetworkSource * networkSource;                                   //@synthesize networkSource=_networkSource - In the implementation block
@property (nonatomic,retain) IGAlbumFocusCoordinator * focusCoordinator;                                    //@synthesize focusCoordinator=_focusCoordinator - In the implementation block
@property (nonatomic,retain) IGAlbumFullscreenViewController * fullScreenViewController;                    //@synthesize fullScreenViewController=_fullScreenViewController - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * activityIndicator;                                   //@synthesize activityIndicator=_activityIndicator - In the implementation block
@property (assign,nonatomic) char viewHasAppeared;                                                          //@synthesize viewHasAppeared=_viewHasAppeared - In the implementation block
@property (assign,nonatomic) char showNoAlbumItemsErrorAndDismiss;                                          //@synthesize showNoAlbumItemsErrorAndDismiss=_showNoAlbumItemsErrorAndDismiss - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)createFullScreenViewController;
-(void)showNoAlbumItemsAndDismiss;
-(void)setShowNoAlbumItemsErrorAndDismiss:(char)arg1 ;
-(id)initWithChannelPK:(id)arg1 delegate:(id)arg2 ;
-(IGAlbumFullscreenViewController *)fullScreenViewController;
-(void)setFullScreenViewController:(IGAlbumFullscreenViewController *)arg1 ;
-(char)showNoAlbumItemsErrorAndDismiss;
-(void)feedNetworkSource:(id)arg1 didFinishLoadingObjects:(id)arg2 forFetchAction:(int)arg3 ;
-(void)albumFullscreenViewControllerShouldDismiss:(id)arg1 dismissReason:(unsigned)arg2 ;
-(IGAlbumFocusCoordinator *)focusCoordinator;
-(void)setNetworkSource:(IGAlbumProfileNetworkSource *)arg1 ;
-(void)setFocusCoordinator:(IGAlbumFocusCoordinator *)arg1 ;
-(IGAlbumProfileNetworkSource *)networkSource;
-(id<IGAlbumNetworkSourceViewControllerDelegate>)delegate;
-(char)prefersStatusBarHidden;
-(void)loadView;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(UIActivityIndicatorView *)activityIndicator;
-(void)setActivityIndicator:(UIActivityIndicatorView *)arg1 ;
-(char)viewHasAppeared;
-(void)setViewHasAppeared:(char)arg1 ;
@end

