
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGListItemController.h>
#import <Instagram/IGAlbumItemActionsControllerDelegate.h>
#import <Instagram/IGAlbumPlayerMediaViewDelegate.h>
#import <Instagram/IGAlbumFullscreenFooterViewDelegate.h>
#import <Instagram/IGAlbumFullscreenGestureDelegate.h>
#import <Instagram/IGAlbumFullscreenHeaderViewDelegate.h>
#import <Instagram/IGAlbumMessageComposeDelegate.h>
#import <Instagram/IGAlbumOverviewDelegate.h>
#import <Instagram/IGListDisplayDelegate.h>
#import <Instagram/IGPendingAlbumItemStatusDelegate.h>
#import <Instagram/IGDirectContentUploadInfoObserver.h>
#import <Instagram/IGListItemType.h>

@protocol IGAlbumFullScreenItemControllerDelegate, IGAlbumItemType;
@class IGUserSession, IGAlbumViewerLoggingContext, IGAlbumViewerViewModel, IGPendingAlbumItemStatusObserver, IGAlbumItemActionsController, IGAlbumOverviewAnimationController, IGAlbumOverviewViewController, NSString;

@interface IGAlbumFullscreenItemController : IGListItemController <IGAlbumItemActionsControllerDelegate, IGAlbumPlayerMediaViewDelegate, IGAlbumFullscreenFooterViewDelegate, IGAlbumFullscreenGestureDelegate, IGAlbumFullscreenHeaderViewDelegate, IGAlbumMessageComposeDelegate, IGAlbumOverviewDelegate, IGListDisplayDelegate, IGPendingAlbumItemStatusDelegate, IGDirectContentUploadInfoObserver, IGListItemType> {

	char _audioEnabled;
	char _didSeeCurrentAlbumItem;
	char _playbackPausedForGesture;
	char _itemActionsShowing;
	id<IGAlbumFullScreenItemControllerDelegate> _delegate;
	IGUserSession* _userSession;
	IGAlbumViewerLoggingContext* _loggingContext;
	IGAlbumViewerViewModel* _viewModel;
	id<IGAlbumItemType> _currentAlbumItem;
	IGPendingAlbumItemStatusObserver* _pendingItemStatusObserver;
	IGAlbumItemActionsController* _itemActionsController;
	IGAlbumOverviewAnimationController* _overviewAnimationController;
	IGAlbumOverviewViewController* _overviewViewController;

}

@property (nonatomic,readonly) IGUserSession * userSession;                                                 //@synthesize userSession=_userSession - In the implementation block
@property (nonatomic,readonly) IGAlbumViewerLoggingContext * loggingContext;                                //@synthesize loggingContext=_loggingContext - In the implementation block
@property (nonatomic,readonly) IGAlbumViewerViewModel * viewModel;                                          //@synthesize viewModel=_viewModel - In the implementation block
@property (nonatomic,retain) id<IGAlbumItemType> currentAlbumItem;                                          //@synthesize currentAlbumItem=_currentAlbumItem - In the implementation block
@property (assign,nonatomic) char didSeeCurrentAlbumItem;                                                   //@synthesize didSeeCurrentAlbumItem=_didSeeCurrentAlbumItem - In the implementation block
@property (assign,nonatomic) char playbackPausedForGesture;                                                 //@synthesize playbackPausedForGesture=_playbackPausedForGesture - In the implementation block
@property (nonatomic,retain) IGPendingAlbumItemStatusObserver * pendingItemStatusObserver;                  //@synthesize pendingItemStatusObserver=_pendingItemStatusObserver - In the implementation block
@property (nonatomic,retain) IGAlbumItemActionsController * itemActionsController;                          //@synthesize itemActionsController=_itemActionsController - In the implementation block
@property (assign,nonatomic) char itemActionsShowing;                                                       //@synthesize itemActionsShowing=_itemActionsShowing - In the implementation block
@property (nonatomic,retain) IGAlbumOverviewAnimationController * overviewAnimationController;              //@synthesize overviewAnimationController=_overviewAnimationController - In the implementation block
@property (nonatomic,retain) IGAlbumOverviewViewController * overviewViewController;                        //@synthesize overviewViewController=_overviewViewController - In the implementation block
@property (assign,nonatomic,__weak) id<IGAlbumFullScreenItemControllerDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char audioEnabled;                                                             //@synthesize audioEnabled=_audioEnabled - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)audioEnabled;
-(IGAlbumViewerLoggingContext *)loggingContext;
-(id)cellForItemAtIndex:(int)arg1 ;
-(void)didUpdateToItem:(id)arg1 ;
-(void)tryResumePlayback;
-(id)initWithUserSession:(id)arg1 loggingContext:(id)arg2 ;
-(id<IGAlbumItemType>)currentAlbumItem;
-(void)feedItemUpdated:(id)arg1 ;
-(void)pendingItemObserver:(id)arg1 didUpdateToStatus:(int)arg2 ;
-(void)pendingItemObserver:(id)arg1 didUpdateToProgress:(float)arg2 ;
-(void)footerViewDidTapMoreOptions:(id)arg1 ;
-(void)footerViewDidTapSendMessage:(id)arg1 ;
-(void)footerViewDidTapViewers:(id)arg1 ;
-(void)footerViewDidTapUploadRetry:(id)arg1 ;
-(void)configureOverlayViewForCell:(id)arg1 ;
-(void)configureMediaViewForCell:(id)arg1 ;
-(void)setCurrentAlbumItem:(id<IGAlbumItemType>)arg1 ;
-(id)visibleCell;
-(IGPendingAlbumItemStatusObserver *)pendingItemStatusObserver;
-(char)playbackPausedForGesture;
-(char)itemActionsShowing;
-(void)markItemAsSeen;
-(void)advanceToNextItemWithNavigationAction:(int)arg1 ;
-(void)updateVisibleCell;
-(void)setItemActionsShowing:(char)arg1 ;
-(void)pauseAndPresentOverview;
-(void)pauseAndPresentMessageComposer;
-(IGAlbumOverviewAnimationController *)overviewAnimationController;
-(void)setPlaybackPausedForGesture:(char)arg1 ;
-(void)rewindToPreviousItemWithNavigationAction:(int)arg1 ;
-(void)configureOverlayViewForLoadingCell:(id)arg1 ;
-(char)didSeeCurrentAlbumItem;
-(void)setDidSeeCurrentAlbumItem:(char)arg1 ;
-(void)setPendingItemStatusObserver:(IGPendingAlbumItemStatusObserver *)arg1 ;
-(void)setOverviewAnimationController:(IGAlbumOverviewAnimationController *)arg1 ;
-(void)fullscreenOverlayDidSwipeUp:(id)arg1 ;
-(void)fullscreenOverlayDidBeginPressing:(id)arg1 ;
-(void)fullscreenOverlayDidTapLeft:(id)arg1 ;
-(void)fullscreenOverlayDidTapRight:(id)arg1 ;
-(void)fullscreenOverlayDidEndPressing:(id)arg1 ;
-(void)albumMessageComposeViewController:(id)arg1 didFinishComposeWithMessage:(id)arg2 ;
-(IGAlbumOverviewViewController *)overviewViewController;
-(void)setOverviewViewController:(IGAlbumOverviewViewController *)arg1 ;
-(void)albumOverviewDidFinish:(id)arg1 ;
-(void)setItemActionsController:(IGAlbumItemActionsController *)arg1 ;
-(IGAlbumItemActionsController *)itemActionsController;
-(void)albumOverviewControllerWillSavePost:(id)arg1 ;
-(void)albumOverviewControllerWillDeletePost:(id)arg1 ;
-(void)albumOverviewControllerWillSharePost:(id)arg1 ;
-(void)albumOverviewControllerWillReportPost:(id)arg1 ;
-(void)albumItemActionsControllerWillSavePost:(id)arg1 ;
-(void)albumItemActionsControllerWillDeletePost:(id)arg1 ;
-(void)albumItemActionsControllerWillSharePost:(id)arg1 ;
-(void)albumItemActionsControllerWillReportPost:(id)arg1 ;
-(void)albumItemActionsControllerDidFinish:(id)arg1 ;
-(void)albumPlayerMediaViewDidLoad:(id)arg1 ;
-(void)albumPlayerMediaViewDidPlayToEnd:(id)arg1 ;
-(void)albumPlayerMediaView:(id)arg1 didUpdateProgress:(float)arg2 ;
-(void)pauseWithReason:(int)arg1 ;
-(void)notifyStatusChangedForUploadInfo:(id)arg1 ;
-(id)displayDelegate;
-(int)currentItemIndex;
-(void)listAdapter:(id)arg1 willDisplayListItemController:(id)arg2 ;
-(void)listAdapter:(id)arg1 didEndDisplayingListItemController:(id)arg2 ;
-(void)listAdapter:(id)arg1 willDisplayListItemController:(id)arg2 cell:(id)arg3 atIndex:(int)arg4 ;
-(void)listAdapter:(id)arg1 didEndDisplayingListItemController:(id)arg2 cell:(id)arg3 atIndex:(int)arg4 ;
-(void)listAdapter:(id)arg1 didScrollListItemController:(id)arg2 ;
-(void)headerViewDidTapDismiss:(id)arg1 ;
-(void)stopWithReason:(int)arg1 ;
-(IGAlbumViewerViewModel *)viewModel;
-(void)setAudioEnabled:(char)arg1 ;
-(void)setDelegate:(id<IGAlbumFullScreenItemControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<IGAlbumFullScreenItemControllerDelegate>)delegate;
-(unsigned)numberOfItems;
-(void)didSelectItemAtIndex:(int)arg1 ;
-(IGUserSession *)userSession;
-(CGSize)sizeForItemAtIndex:(int)arg1 ;
-(id)overlayView;
-(id)mediaView;
@end

