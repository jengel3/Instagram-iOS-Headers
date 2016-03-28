
#import <UIKit/UIViewController.h>

@protocol IGAlbumFullscreenViewControllerDelegate;
@class IGAlbumFocusCoordinator, IGAlbumPlayerView, IGGradientView, IGAlbumFullscreenProfilePictureView, IGTapButton, UISwipeGestureRecognizer, UITapGestureRecognizer;

@interface IGAlbumFullscreenViewController : UIViewController {

	IGAlbumFocusCoordinator* _focusCoordinator;
	id<IGAlbumFullscreenViewControllerDelegate> _delegate;
	IGAlbumPlayerView* _albumPlayerView;
	IGGradientView* _topGradientView;
	IGAlbumFullscreenProfilePictureView* _profilePic;
	IGTapButton* _dismissButton;
	UISwipeGestureRecognizer* _swipe;
	UITapGestureRecognizer* _tap;

}

@property (nonatomic,readonly) IGAlbumFocusCoordinator * focusCoordinator;                               //@synthesize focusCoordinator=_focusCoordinator - In the implementation block
@property (nonatomic,__weak,readonly) id<IGAlbumFullscreenViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) IGAlbumPlayerView * albumPlayerView;                                        //@synthesize albumPlayerView=_albumPlayerView - In the implementation block
@property (nonatomic,retain) IGGradientView * topGradientView;                                           //@synthesize topGradientView=_topGradientView - In the implementation block
@property (nonatomic,retain) IGAlbumFullscreenProfilePictureView * profilePic;                           //@synthesize profilePic=_profilePic - In the implementation block
@property (nonatomic,retain) IGTapButton * dismissButton;                                                //@synthesize dismissButton=_dismissButton - In the implementation block
@property (nonatomic,retain) UISwipeGestureRecognizer * swipe;                                           //@synthesize swipe=_swipe - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * tap;                                               //@synthesize tap=_tap - In the implementation block
-(IGAlbumFullscreenProfilePictureView *)profilePic;
-(void)setAlbumPlayerView:(IGAlbumPlayerView *)arg1 ;
-(IGAlbumPlayerView *)albumPlayerView;
-(void)setTopGradientView:(IGGradientView *)arg1 ;
-(IGGradientView *)topGradientView;
-(void)setProfilePic:(IGAlbumFullscreenProfilePictureView *)arg1 ;
-(IGAlbumFocusCoordinator *)focusCoordinator;
-(void)dismissButtonTapped;
-(void)tapToAdvance;
-(void)setTap:(UITapGestureRecognizer *)arg1 ;
-(UITapGestureRecognizer *)tap;
-(void)swipeToDismiss;
-(id)initWithFocusCoordinator:(id)arg1 delegate:(id)arg2 ;
-(id<IGAlbumFullscreenViewControllerDelegate>)delegate;
-(char)prefersStatusBarHidden;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidDisappear:(char)arg1 ;
-(void)setSwipe:(UISwipeGestureRecognizer *)arg1 ;
-(UISwipeGestureRecognizer *)swipe;
-(IGTapButton *)dismissButton;
-(void)setDismissButton:(IGTapButton *)arg1 ;
@end

