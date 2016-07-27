
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIViewController.h>
#import <Instagram/IGAlbumItemActionsControllerDelegate.h>
#import <Instagram/IGAlbumPlayerMediaViewDelegate.h>
#import <Instagram/IGAlbumFullscreenFooterViewDelegate.h>
#import <Instagram/IGAlbumFullscreenHeaderViewDelegate.h>
#import <Instagram/IGAlbumMessageComposeDelegate.h>
#import <Instagram/IGAlbumOverviewDelegate.h>
#import <Instagram/IGPendingAlbumItemStatusDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol IGAlbumItemType, IGAlbumFullscreenViewControllerDelegate, IGAlbumPlayerMediaViewType;
@class NSArray, IGUserSession, UIView, IGAlbumMediaPreloadController, IGAlbumFullscreenOverlayView, UILongPressGestureRecognizer, NSTimer, UISwipeGestureRecognizer, IGAlbumItemActionsController, IGPendingAlbumItemStatusObserver, IGProfilePictureImageView, NSString;

@interface IGAlbumFullscreenViewController : UIViewController <IGAlbumItemActionsControllerDelegate, IGAlbumPlayerMediaViewDelegate, IGAlbumFullscreenFooterViewDelegate, IGAlbumFullscreenHeaderViewDelegate, IGAlbumMessageComposeDelegate, IGAlbumOverviewDelegate, IGPendingAlbumItemStatusDelegate, UIGestureRecognizerDelegate> {

	char _playbackDisabled;
	char _playbackPausedForGesture;
	char _tapPending;
	char _itemActionsShowing;
	NSArray* _items;
	id<IGAlbumItemType> _currentItem;
	IGUserSession* _userSession;
	id<IGAlbumFullscreenViewControllerDelegate> _delegate;
	UIView*<IGAlbumPlayerMediaViewType> _itemView;
	IGAlbumMediaPreloadController* _mediaPreloadController;
	IGAlbumFullscreenOverlayView* _fullscreenView;
	UILongPressGestureRecognizer* _pressGesture;
	NSTimer* _tapTimeout;
	UISwipeGestureRecognizer* _swipeUpGesture;
	IGAlbumItemActionsController* _itemActionsController;
	IGPendingAlbumItemStatusObserver* _pendingItemStatusObserver;
	CGPoint _pressStartLocationInWindow;

}

@property (nonatomic,copy,readonly) NSArray * items;                                                     //@synthesize items=_items - In the implementation block
@property (nonatomic,retain) id<IGAlbumItemType> currentItem;                                            //@synthesize currentItem=_currentItem - In the implementation block
@property (nonatomic,readonly) IGUserSession * userSession;                                              //@synthesize userSession=_userSession - In the implementation block
@property (nonatomic,__weak,readonly) id<IGAlbumFullscreenViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIView*<IGAlbumPlayerMediaViewType> itemView;                               //@synthesize itemView=_itemView - In the implementation block
@property (assign,nonatomic) char playbackPausedForGesture;                                              //@synthesize playbackPausedForGesture=_playbackPausedForGesture - In the implementation block
@property (nonatomic,retain) IGAlbumMediaPreloadController * mediaPreloadController;                     //@synthesize mediaPreloadController=_mediaPreloadController - In the implementation block
@property (nonatomic,readonly) IGAlbumFullscreenOverlayView * fullscreenView;                            //@synthesize fullscreenView=_fullscreenView - In the implementation block
@property (nonatomic,retain) UILongPressGestureRecognizer * pressGesture;                                //@synthesize pressGesture=_pressGesture - In the implementation block
@property (assign,nonatomic) CGPoint pressStartLocationInWindow;                                         //@synthesize pressStartLocationInWindow=_pressStartLocationInWindow - In the implementation block
@property (assign,nonatomic) char tapPending;                                                            //@synthesize tapPending=_tapPending - In the implementation block
@property (nonatomic,retain) NSTimer * tapTimeout;                                                       //@synthesize tapTimeout=_tapTimeout - In the implementation block
@property (nonatomic,retain) UISwipeGestureRecognizer * swipeUpGesture;                                  //@synthesize swipeUpGesture=_swipeUpGesture - In the implementation block
@property (nonatomic,retain) IGAlbumItemActionsController * itemActionsController;                       //@synthesize itemActionsController=_itemActionsController - In the implementation block
@property (assign,nonatomic) char itemActionsShowing;                                                    //@synthesize itemActionsShowing=_itemActionsShowing - In the implementation block
@property (nonatomic,retain) IGPendingAlbumItemStatusObserver * pendingItemStatusObserver;               //@synthesize pendingItemStatusObserver=_pendingItemStatusObserver - In the implementation block
@property (assign,nonatomic) char playbackDisabled;                                                      //@synthesize playbackDisabled=_playbackDisabled - In the implementation block
@property (nonatomic,readonly) IGProfilePictureImageView * profileImageView; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)handleSwipeUpGesture:(id)arg1 ;
-(IGProfilePictureImageView *)profileImageView;
-(id)initWithItems:(id)arg1 currentItem:(id)arg2 delegate:(id)arg3 userSession:(id)arg4 ;
-(void)setPlaybackDisabled:(char)arg1 ;
-(char)playbackDisabled;
-(void)footerViewDidTapMoreOptions:(id)arg1 ;
-(void)footerViewDidTapSendMessage:(id)arg1 ;
-(void)footerViewDidTapViewers:(id)arg1 ;
-(void)footerViewDidTapUploadRetry:(id)arg1 ;
-(void)handleItemDeletedNotification:(id)arg1 ;
-(void)handleItemMarkedInappropriateNotification:(id)arg1 ;
-(void)handleItemMarkedSpamNotification:(id)arg1 ;
-(void)handlePressGesture:(id)arg1 ;
-(void)setPressGesture:(UILongPressGestureRecognizer *)arg1 ;
-(UILongPressGestureRecognizer *)pressGesture;
-(void)setSwipeUpGesture:(UISwipeGestureRecognizer *)arg1 ;
-(UISwipeGestureRecognizer *)swipeUpGesture;
-(void)updateForCurrentItem;
-(void)tryResumePlayback;
-(char)playbackPausedForGesture;
-(char)itemActionsShowing;
-(IGPendingAlbumItemStatusObserver *)pendingItemStatusObserver;
-(void)updateItemView;
-(IGAlbumMediaPreloadController *)mediaPreloadController;
-(void)setItemActionsController:(IGAlbumItemActionsController *)arg1 ;
-(int)currentItemIndex;
-(void)removeObjectIfNeededFromItems:(id)arg1 ;
-(void)setItemActionsShowing:(char)arg1 ;
-(IGAlbumItemActionsController *)itemActionsController;
-(void)pauseAndPresentOverview;
-(void)pauseAndPresentMessageComposer;
-(void)handlePressGesureBegan:(id)arg1 ;
-(void)handlePressGestureEnded:(id)arg1 ;
-(void)setPlaybackPausedForGesture:(char)arg1 ;
-(void)setPressStartLocationInWindow:(CGPoint)arg1 ;
-(void)setTapPending:(char)arg1 ;
-(void)onTapTimeout;
-(void)setTapTimeout:(NSTimer *)arg1 ;
-(NSTimer *)tapTimeout;
-(char)pressGestureLocationQualifiesForBackTap:(id)arg1 ;
-(char)tapPending;
-(CGPoint)pressStartLocationInWindow;
-(void)rewindToPreviousItem;
-(void)fadeOutBackGradientIfNeeded;
-(void)albumItemActionsController:(id)arg1 didDeleteItem:(id)arg2 ;
-(void)albumItemActionsController:(id)arg1 didRemoveUploadForItem:(id)arg2 ;
-(void)albumItemActionsControllerDidFinish:(id)arg1 ;
-(void)albumPlayerMediaViewDidPlayToEnd:(id)arg1 ;
-(void)albumPlayerMediaView:(id)arg1 didUpdateProgress:(float)arg2 ;
-(void)albumPlayerMediaViewDidLoad:(id)arg1 ;
-(void)headerViewDidTapDismiss:(id)arg1 ;
-(void)albumMessageComposeDidFinish:(id)arg1 ;
-(void)albumOverviewDidFinish:(id)arg1 ;
-(void)pendingItemObserver:(id)arg1 didUpdateToStatus:(int)arg2 ;
-(void)pendingItemObserver:(id)arg1 didUpdateToProgress:(float)arg2 ;
-(void)setChromeHidden:(char)arg1 ;
-(void)setMediaPreloadController:(IGAlbumMediaPreloadController *)arg1 ;
-(void)setPendingItemStatusObserver:(IGPendingAlbumItemStatusObserver *)arg1 ;
-(IGAlbumFullscreenOverlayView *)fullscreenView;
-(void)advanceToNextItem;
-(void)dealloc;
-(id<IGAlbumFullscreenViewControllerDelegate>)delegate;
-(char)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(char)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(char)prefersStatusBarHidden;
-(void)viewDidLayoutSubviews;
-(NSArray *)items;
-(void)viewDidLoad;
-(void)setCurrentItem:(id<IGAlbumItemType>)arg1 ;
-(id<IGAlbumItemType>)currentItem;
-(IGUserSession *)userSession;
-(void)setItemView:(UIView*<IGAlbumPlayerMediaViewType>)arg1 ;
-(UIView*<IGAlbumPlayerMediaViewType>)itemView;
@end

