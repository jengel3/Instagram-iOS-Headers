
#import <UIKit/UIViewController.h>
#import <Instagram/IGAlbumPlayerViewProgressDelegate.h>

@protocol IGAlbumFullscreenViewControllerDelegate;
@class IGKVOHandle, IGAlbumFocusCoordinator, IGAlbumPlayerView, IGAlbumPlayerViewConfiguration, IGGradientView, IGAlbumFullscreenProfilePictureView, IGTapButton, IGAlbumFullscreenProgressView, UISwipeGestureRecognizer, UITapGestureRecognizer, NSString;

@interface IGAlbumFullscreenViewController : UIViewController <IGAlbumPlayerViewProgressDelegate> {

	char _shouldShowCameraButton;
	char _isCurrentAlbum;
	IGKVOHandle* _focusCoordinatorObserver;
	IGAlbumFocusCoordinator* _focusCoordinator;
	id<IGAlbumFullscreenViewControllerDelegate> _delegate;
	IGAlbumPlayerView* _albumPlayerView;
	IGAlbumPlayerViewConfiguration* _albumPlayerConfig;
	IGGradientView* _topGradientView;
	IGAlbumFullscreenProfilePictureView* _profilePic;
	IGTapButton* _dismissButton;
	IGTapButton* _commentsButton;
	IGTapButton* _cameraButton;
	IGAlbumFullscreenProgressView* _progressView;
	UISwipeGestureRecognizer* _swipe;
	UITapGestureRecognizer* _tap;

}

@property (assign,nonatomic) char shouldShowCameraButton;                                                //@synthesize shouldShowCameraButton=_shouldShowCameraButton - In the implementation block
@property (nonatomic,readonly) IGKVOHandle * focusCoordinatorObserver;                                   //@synthesize focusCoordinatorObserver=_focusCoordinatorObserver - In the implementation block
@property (nonatomic,readonly) IGAlbumFocusCoordinator * focusCoordinator;                               //@synthesize focusCoordinator=_focusCoordinator - In the implementation block
@property (nonatomic,__weak,readonly) id<IGAlbumFullscreenViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) IGAlbumPlayerView * albumPlayerView;                                        //@synthesize albumPlayerView=_albumPlayerView - In the implementation block
@property (nonatomic,retain) IGAlbumPlayerViewConfiguration * albumPlayerConfig;                         //@synthesize albumPlayerConfig=_albumPlayerConfig - In the implementation block
@property (nonatomic,retain) IGGradientView * topGradientView;                                           //@synthesize topGradientView=_topGradientView - In the implementation block
@property (nonatomic,retain) IGAlbumFullscreenProfilePictureView * profilePic;                           //@synthesize profilePic=_profilePic - In the implementation block
@property (nonatomic,retain) IGTapButton * dismissButton;                                                //@synthesize dismissButton=_dismissButton - In the implementation block
@property (nonatomic,retain) IGTapButton * commentsButton;                                               //@synthesize commentsButton=_commentsButton - In the implementation block
@property (nonatomic,retain) IGTapButton * cameraButton;                                                 //@synthesize cameraButton=_cameraButton - In the implementation block
@property (nonatomic,retain) IGAlbumFullscreenProgressView * progressView;                               //@synthesize progressView=_progressView - In the implementation block
@property (nonatomic,retain) UISwipeGestureRecognizer * swipe;                                           //@synthesize swipe=_swipe - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * tap;                                               //@synthesize tap=_tap - In the implementation block
@property (assign,nonatomic) char isCurrentAlbum;                                                        //@synthesize isCurrentAlbum=_isCurrentAlbum - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFocusCoordinator:(id)arg1 isCurrentAlbum:(char)arg2 delegate:(id)arg3 ;
-(void)setShouldShowCameraButton:(char)arg1 ;
-(IGAlbumFullscreenProfilePictureView *)profilePic;
-(IGKVOHandle *)focusCoordinatorObserver;
-(IGAlbumFocusCoordinator *)focusCoordinator;
-(void)setAlbumPlayerView:(IGAlbumPlayerView *)arg1 ;
-(IGAlbumPlayerView *)albumPlayerView;
-(void)setTopGradientView:(IGGradientView *)arg1 ;
-(IGGradientView *)topGradientView;
-(void)setProfilePic:(IGAlbumFullscreenProfilePictureView *)arg1 ;
-(void)dismissButtonTapped;
-(void)setCameraButton:(IGTapButton *)arg1 ;
-(IGTapButton *)cameraButton;
-(void)cameraButtonTapped;
-(char)shouldShowCameraButton;
-(void)commentsButtonTapped;
-(void)tapToAdvance;
-(void)setTap:(UITapGestureRecognizer *)arg1 ;
-(UITapGestureRecognizer *)tap;
-(void)swipeToDismiss;
-(IGAlbumPlayerViewConfiguration *)albumPlayerConfig;
-(void)commentsDoneTapped;
-(void)albumPlayerView:(id)arg1 didProgress:(float)arg2 ;
-(void)albumPlayerViewDidComplete:(id)arg1 ;
-(void)setAlbumPlayerConfig:(IGAlbumPlayerViewConfiguration *)arg1 ;
-(IGTapButton *)commentsButton;
-(void)setCommentsButton:(IGTapButton *)arg1 ;
-(char)isCurrentAlbum;
-(void)setIsCurrentAlbum:(char)arg1 ;
-(void)dealloc;
-(id<IGAlbumFullscreenViewControllerDelegate>)delegate;
-(char)prefersStatusBarHidden;
-(void)loadView;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(char)arg1 ;
-(void)setProgressView:(IGAlbumFullscreenProgressView *)arg1 ;
-(IGAlbumFullscreenProgressView *)progressView;
-(void)setSwipe:(UISwipeGestureRecognizer *)arg1 ;
-(UISwipeGestureRecognizer *)swipe;
-(IGTapButton *)dismissButton;
-(void)setDismissButton:(IGTapButton *)arg1 ;
@end

