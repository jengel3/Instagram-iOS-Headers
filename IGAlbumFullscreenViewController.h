
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIViewController.h>
#import <Instagram/IGAlbumPlayerViewDelegate.h>
#import <Instagram/IGAlbumFeedbackDelegate.h>
#import <Instagram/IGAlbumFocusCoordinatorDelegate.h>
#import <Instagram/IGAlbumFullscreenProgressViewDelegate.h>
#import <Instagram/IGAlbumMessageComposeDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol IGAlbumFullscreenViewControllerDelegate;
@class IGKVOHandle, IGAlbumFocusCoordinator, IGUserSession, IGAlbumPlayerView, IGGradientView, IGAlbumFullscreenProgressView, IGAlbumFullscreenHeaderView, UITextView, UISwipeGestureRecognizer, UILongPressGestureRecognizer, NSTimer, IGAlertView, IGAlbumFeedbackButton, UIButton, IGProfilePictureImageView, NSString;

@interface IGAlbumFullscreenViewController : UIViewController <IGAlbumPlayerViewDelegate, IGAlbumFeedbackDelegate, IGAlbumFocusCoordinatorDelegate, IGAlbumFullscreenProgressViewDelegate, IGAlbumMessageComposeDelegate, UIGestureRecognizerDelegate> {

	char _tapPending;
	IGKVOHandle* _focusCoordinatorAlbumItemObserver;
	IGKVOHandle* _focusCoordinatorProgressObserver;
	IGAlbumFocusCoordinator* _focusCoordinator;
	IGUserSession* _userSession;
	id<IGAlbumFullscreenViewControllerDelegate> _delegate;
	IGAlbumPlayerView* _albumPlayerView;
	IGGradientView* _topGradientView;
	IGAlbumFullscreenProgressView* _progressView;
	IGAlbumFullscreenHeaderView* _headerView;
	UITextView* _captionTextView;
	UISwipeGestureRecognizer* _swipeDown;
	UILongPressGestureRecognizer* _pressGesture;
	NSTimer* _tapTimeout;
	IGGradientView* _backTapGradientView;
	UISwipeGestureRecognizer* _swipeUpGesture;
	IGAlertView* _deleteConfirmation;
	IGAlbumFeedbackButton* _viewersButton;
	UIButton* _sendMessageButton;
	IGGradientView* _bottomGradientView;
	CGPoint _pressStartLocationInWindow;

}

@property (nonatomic,readonly) IGKVOHandle * focusCoordinatorAlbumItemObserver;                          //@synthesize focusCoordinatorAlbumItemObserver=_focusCoordinatorAlbumItemObserver - In the implementation block
@property (nonatomic,readonly) IGKVOHandle * focusCoordinatorProgressObserver;                           //@synthesize focusCoordinatorProgressObserver=_focusCoordinatorProgressObserver - In the implementation block
@property (nonatomic,readonly) IGAlbumFocusCoordinator * focusCoordinator;                               //@synthesize focusCoordinator=_focusCoordinator - In the implementation block
@property (nonatomic,readonly) IGUserSession * userSession;                                              //@synthesize userSession=_userSession - In the implementation block
@property (nonatomic,__weak,readonly) id<IGAlbumFullscreenViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) IGAlbumPlayerView * albumPlayerView;                                        //@synthesize albumPlayerView=_albumPlayerView - In the implementation block
@property (nonatomic,retain) IGGradientView * topGradientView;                                           //@synthesize topGradientView=_topGradientView - In the implementation block
@property (nonatomic,retain) IGAlbumFullscreenProgressView * progressView;                               //@synthesize progressView=_progressView - In the implementation block
@property (nonatomic,retain) IGAlbumFullscreenHeaderView * headerView;                                   //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) UITextView * captionTextView;                                               //@synthesize captionTextView=_captionTextView - In the implementation block
@property (nonatomic,retain) UISwipeGestureRecognizer * swipeDown;                                       //@synthesize swipeDown=_swipeDown - In the implementation block
@property (nonatomic,retain) UILongPressGestureRecognizer * pressGesture;                                //@synthesize pressGesture=_pressGesture - In the implementation block
@property (assign,nonatomic) CGPoint pressStartLocationInWindow;                                         //@synthesize pressStartLocationInWindow=_pressStartLocationInWindow - In the implementation block
@property (assign,nonatomic) char tapPending;                                                            //@synthesize tapPending=_tapPending - In the implementation block
@property (nonatomic,retain) NSTimer * tapTimeout;                                                       //@synthesize tapTimeout=_tapTimeout - In the implementation block
@property (nonatomic,retain) IGGradientView * backTapGradientView;                                       //@synthesize backTapGradientView=_backTapGradientView - In the implementation block
@property (nonatomic,retain) UISwipeGestureRecognizer * swipeUpGesture;                                  //@synthesize swipeUpGesture=_swipeUpGesture - In the implementation block
@property (nonatomic,readonly) IGAlertView * deleteConfirmation;                                         //@synthesize deleteConfirmation=_deleteConfirmation - In the implementation block
@property (nonatomic,retain) IGAlbumFeedbackButton * viewersButton;                                      //@synthesize viewersButton=_viewersButton - In the implementation block
@property (nonatomic,retain) UIButton * sendMessageButton;                                               //@synthesize sendMessageButton=_sendMessageButton - In the implementation block
@property (nonatomic,retain) IGGradientView * bottomGradientView;                                        //@synthesize bottomGradientView=_bottomGradientView - In the implementation block
@property (nonatomic,readonly) IGProfilePictureImageView * profileImageView; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setCaptionTextView:(UITextView *)arg1 ;
-(UITextView *)captionTextView;
-(void)updateCaption;
-(IGProfilePictureImageView *)profileImageView;
-(id)initWithFocusCoordinator:(id)arg1 delegate:(id)arg2 userSession:(id)arg3 ;
-(void)albumFeedbackViewControllerDidFinish:(id)arg1 ;
-(void)progressViewDidScrubToSegmentIndex:(int)arg1 ;
-(IGKVOHandle *)focusCoordinatorAlbumItemObserver;
-(IGKVOHandle *)focusCoordinatorProgressObserver;
-(IGAlbumFocusCoordinator *)focusCoordinator;
-(void)currentAlbumItemUpdated;
-(void)setAlbumPlayerView:(IGAlbumPlayerView *)arg1 ;
-(IGAlbumPlayerView *)albumPlayerView;
-(void)setTopGradientView:(IGGradientView *)arg1 ;
-(IGGradientView *)topGradientView;
-(void)setBottomGradientView:(IGGradientView *)arg1 ;
-(IGGradientView *)bottomGradientView;
-(void)updateProgressNumberOfSegments;
-(void)setViewersButton:(IGAlbumFeedbackButton *)arg1 ;
-(IGAlbumFeedbackButton *)viewersButton;
-(void)viewersButtonTapped;
-(void)updateViewersButton;
-(void)setSendMessageButton:(UIButton *)arg1 ;
-(UIButton *)sendMessageButton;
-(void)sendMessageButtonTapped;
-(void)updateSendMessageButton;
-(void)handlePressGesture:(id)arg1 ;
-(void)setPressGesture:(UILongPressGestureRecognizer *)arg1 ;
-(UILongPressGestureRecognizer *)pressGesture;
-(void)swipeToDismiss;
-(void)setSwipeDown:(UISwipeGestureRecognizer *)arg1 ;
-(UISwipeGestureRecognizer *)swipeDown;
-(void)handleSwipeUpGesture:(id)arg1 ;
-(void)setSwipeUpGesture:(UISwipeGestureRecognizer *)arg1 ;
-(UISwipeGestureRecognizer *)swipeUpGesture;
-(void)pauseAndPresentFeedback;
-(void)setChromeHidden:(char)arg1 ;
-(void)pauseAndPresentMessageComposer;
-(void)handlePressGesureBegan:(id)arg1 ;
-(void)handlePressGestureEnded:(id)arg1 ;
-(void)setPressStartLocationInWindow:(CGPoint)arg1 ;
-(void)setTapPending:(char)arg1 ;
-(void)onTapTimeout;
-(void)setTapTimeout:(NSTimer *)arg1 ;
-(NSTimer *)tapTimeout;
-(IGGradientView *)backTapGradientView;
-(char)tapPending;
-(CGPoint)pressStartLocationInWindow;
-(void)fadeOutBackGradientIfNeeded;
-(void)albumPlayerView:(id)arg1 didStartLoadingCurrentItemView:(id)arg2 ;
-(void)albumPlayerView:(id)arg1 didFinishLoadingCurrentItemView:(id)arg2 ;
-(void)albumFocusCoordinatorDidRewindPastFirstItem:(id)arg1 ;
-(void)albumFocusCoordinatorDidComplete:(id)arg1 ;
-(void)albumFocusCoordinator:(id)arg1 currentAlbumWasDeleted:(id)arg2 ;
-(void)albumMessageComposeDidFinish:(id)arg1 ;
-(void)albumPlayerView:(id)arg1 didProgress:(float)arg2 ;
-(void)setBackTapGradientView:(IGGradientView *)arg1 ;
-(IGAlertView *)deleteConfirmation;
-(void)dismissButtonTapped;
-(void)play;
-(void)dealloc;
-(id<IGAlbumFullscreenViewControllerDelegate>)delegate;
-(char)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(char)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(char)prefersStatusBarHidden;
-(void)loadView;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(char)arg1 ;
-(IGAlbumFullscreenHeaderView *)headerView;
-(void)setHeaderView:(IGAlbumFullscreenHeaderView *)arg1 ;
-(void)setProgressView:(IGAlbumFullscreenProgressView *)arg1 ;
-(IGAlbumFullscreenProgressView *)progressView;
-(void)pause;
-(IGUserSession *)userSession;
@end

