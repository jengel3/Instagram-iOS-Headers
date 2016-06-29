
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGViewController.h>
#import <Instagram/IGMediaPreloaderVideoProgressDelegate.h>
#import <Instagram/IGEventServiceNetworkDelegate.h>
#import <Instagram/IGEventViewerFeedViewScrollingDelegate.h>
#import <Instagram/IGEventViewerFeedViewDraggingDelegate.h>
#import <Instagram/IGEventViewerFeedViewGestureDelegate.h>
#import <Instagram/IGEventViewerHeaderViewDelegate.h>
#import <Instagram/IGEventViewerMediaPlaybackDelegate.h>
#import <Instagram/IGSoundStateListenerDelegate.h>
#import <Instagram/IGEventViewerMediaContextViewDelegate.h>
#import <Instagram/IGEventViewerMediaCellDelegate.h>
#import <Instagram/IGEventViewerAttributionHeaderCellDelegate.h>
#import <Instagram/IGActionSheetDelegate.h>
#import <Instagram/IGFeedItemHeaderDelegate.h>
#import <Instagram/IGUFIButtonBarViewDelegate.h>

@protocol IGEventViewerViewControllerDelegate;
@class IGMediaPreloader, IGSoundStateListener, IGEventViewerHeaderView, IGEventService, IGUser, IGEventViewerDataSource, IGEventViewerMediaPlaybackController, IGEventViewerFeedViewController, IGEventViewerAnalyticsLogger, IGEventViewerMediaPauseViewPresenter, IGChannelFocusCoordinator, NSString;

@interface IGEventViewerViewController : IGViewController <IGMediaPreloaderVideoProgressDelegate, IGEventServiceNetworkDelegate, IGEventViewerFeedViewScrollingDelegate, IGEventViewerFeedViewDraggingDelegate, IGEventViewerFeedViewGestureDelegate, IGEventViewerHeaderViewDelegate, IGEventViewerMediaPlaybackDelegate, IGSoundStateListenerDelegate, IGEventViewerMediaContextViewDelegate, IGEventViewerMediaCellDelegate, IGEventViewerAttributionHeaderCellDelegate, IGActionSheetDelegate, IGFeedItemHeaderDelegate, IGUFIButtonBarViewDelegate> {

	char _isPreloadPresenterUsed;
	char _isAppearForFirstTime;
	char _showEasyReportingActionSheet;
	IGMediaPreloader* _mediaPreloader;
	id<IGEventViewerViewControllerDelegate> _delegate;
	IGSoundStateListener* _soundStateListener;
	IGEventViewerHeaderView* _headerView;
	IGEventService* _eventService;
	IGUser* _currentUser;
	IGEventViewerDataSource* _dataSource;
	IGEventViewerMediaPlaybackController* _mediaPlaybackController;
	IGEventViewerFeedViewController* _feedController;
	IGEventViewerAnalyticsLogger* _logger;
	IGEventViewerMediaPauseViewPresenter* _pauseViewPresenter;
	IGChannelFocusCoordinator* _focusCoordinator;
	unsigned _focusedPostPlayCounter;

}

@property (nonatomic,__weak,readonly) IGEventViewerHeaderView * headerView;                                 //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,readonly) IGEventService * eventService;                                               //@synthesize eventService=_eventService - In the implementation block
@property (nonatomic,readonly) IGUser * currentUser;                                                        //@synthesize currentUser=_currentUser - In the implementation block
@property (nonatomic,readonly) IGMediaPreloader * mediaPreloader;                                           //@synthesize mediaPreloader=_mediaPreloader - In the implementation block
@property (nonatomic,readonly) IGEventViewerDataSource * dataSource;                                        //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,readonly) IGEventViewerMediaPlaybackController * mediaPlaybackController;              //@synthesize mediaPlaybackController=_mediaPlaybackController - In the implementation block
@property (nonatomic,__weak,readonly) IGEventViewerFeedViewController * feedController;                     //@synthesize feedController=_feedController - In the implementation block
@property (nonatomic,readonly) IGEventViewerAnalyticsLogger * logger;                                       //@synthesize logger=_logger - In the implementation block
@property (nonatomic,readonly) IGEventViewerMediaPauseViewPresenter * pauseViewPresenter;                   //@synthesize pauseViewPresenter=_pauseViewPresenter - In the implementation block
@property (nonatomic,readonly) IGChannelFocusCoordinator * focusCoordinator;                                //@synthesize focusCoordinator=_focusCoordinator - In the implementation block
@property (assign,nonatomic) char isPreloadPresenterUsed;                                                   //@synthesize isPreloadPresenterUsed=_isPreloadPresenterUsed - In the implementation block
@property (assign,nonatomic) char isAppearForFirstTime;                                                     //@synthesize isAppearForFirstTime=_isAppearForFirstTime - In the implementation block
@property (assign,nonatomic) char showEasyReportingActionSheet;                                             //@synthesize showEasyReportingActionSheet=_showEasyReportingActionSheet - In the implementation block
@property (assign,nonatomic) unsigned focusedPostPlayCounter;                                               //@synthesize focusedPostPlayCounter=_focusedPostPlayCounter - In the implementation block
@property (assign,nonatomic,__weak) id<IGEventViewerViewControllerDelegate> delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) IGSoundStateListener * soundStateListener;                                     //@synthesize soundStateListener=_soundStateListener - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsModule;
-(void)actionSheetDismissedWithButtonTitled:(id)arg1 ;
-(void)actionSheetFinishedHiding;
-(IGChannelFocusCoordinator *)focusCoordinator;
-(char)prefersTabBarHidden;
-(id)analyticsExtras;
-(void)eventViewerFeedViewController:(id)arg1 didScrollToItemAtIndexPath:(id)arg2 ;
-(void)willBeginDraggingFeedViewController:(id)arg1 ;
-(void)eventViewerFeedViewController:(id)arg1 willScrollToItemAtIndexPath:(id)arg2 ;
-(void)didScrollUpToTopFeedViewController:(id)arg1 ;
-(void)didScrollDownToBottomFeedViewController:(id)arg1 ;
-(void)didEndDraggingFeedViewController:(id)arg1 ;
-(void)didSwipeRightFeedViewController:(id)arg1 ;
-(void)willScrollNearBottomFeedViewController:(id)arg1 ;
-(void)eventHeaderView:(id)arg1 didTapCloseButton:(id)arg2 ;
-(void)eventHeaderViewDidTapBackground:(id)arg1 ;
-(void)mediaContextViewDidTapDismiss:(id)arg1 ;
-(void)mediaContextViewDidTapMoreInCaption:(id)arg1 ;
-(void)mediaContextView:(id)arg1 didTapOnURL:(id)arg2 ;
-(void)mediaContextViewDidTapLike:(id)arg1 ;
-(void)mediaContextViewDidTapComment:(id)arg1 ;
-(void)mediaContextViewDidTapSend:(id)arg1 ;
-(void)mediaContextViewDidTapLikeViewCount:(id)arg1 ;
-(void)mediaContextViewDidTapCommentCount:(id)arg1 ;
-(void)UFIButtonBarDidTapOnLike:(id)arg1 ;
-(void)UFIButtonBarDidTapOnComment:(id)arg1 ;
-(void)UFIButtonBarDidTapOnSend:(id)arg1 ;
-(void)UFIButtonBarDidTapOnLikeViewCount:(id)arg1 ;
-(void)UFIButtonBarDidTapOnCommentCount:(id)arg1 ;
-(void)UFIButtonBar:(id)arg1 wantsSizeUpdateAnimated:(char)arg2 ;
-(void)mediaPlaybackController:(id)arg1 didBeginPlayingItem:(id)arg2 withDuration:(double)arg3 ;
-(void)mediaPlaybackController:(id)arg1 didEndPlayingItem:(id)arg2 ;
-(void)mediaPlaybackController:(id)arg1 didPausePlayingItem:(id)arg2 ;
-(void)didSingleTapEventViewerCell:(id)arg1 ;
-(void)didDoubleTapEventViewerCell:(id)arg1 ;
-(IGSoundStateListener *)soundStateListener;
-(IGEventService *)eventService;
-(IGMediaPreloader *)mediaPreloader;
-(id)initWithEventService:(id)arg1 currentUser:(id)arg2 initialPosts:(id)arg3 logger:(id)arg4 focusCoordinator:(id)arg5 ;
-(void)setSoundStateListener:(IGSoundStateListener *)arg1 ;
-(void)eventService:(id)arg1 didFailWithError:(id)arg2 ;
-(void)eventService:(id)arg1 didLoadInitialPosts:(id)arg2 ;
-(void)eventService:(id)arg1 didFetchMorePosts:(id)arg2 ;
-(void)soundListenerDidUpdate:(id)arg1 ;
-(id)postsFromInitialPosts:(id)arg1 focusCoordinator:(id)arg2 cachedPosts:(id)arg3 ;
-(void)setupFeedController;
-(char)isPreloadPresenterUsed;
-(CGRect)frameForFeedView;
-(IGEventViewerMediaPlaybackController *)mediaPlaybackController;
-(void)setupViewsAndChildViewControllers;
-(IGEventViewerFeedViewController *)feedController;
-(void)resumeCurrentMedia;
-(char)isAppearForFirstTime;
-(void)setIsAppearForFirstTime:(char)arg1 ;
-(void)setIsPreloadPresenterUsed:(char)arg1 ;
-(void)didReceiveAppWillResignActiveNotification:(id)arg1 ;
-(void)didReceiveAppDidBecomeActiveNotification:(id)arg1 ;
-(void)dismissPauseMenuAnimated:(char)arg1 ;
-(void)hideCurrentMedia;
-(void)resetHeaderViewWithTitle:(id)arg1 ;
-(void)loadMorePosts:(id)arg1 ;
-(void)exitEventViewer:(id)arg1 ;
-(void)handleDidScrollToIndexPath:(id)arg1 ;
-(void)handleHeaderViewAction:(unsigned)arg1 ;
-(float)videoStartTimeForPost:(id)arg1 ;
-(void)animateHeartLikeForCurrentlyCenteredActionCell;
-(void)handleMediaDidEndForPost:(id)arg1 ;
-(void)presentPauseViewForCurrentMediaCell:(id)arg1 ;
-(void)handleMediaPauseViewAction:(unsigned)arg1 ;
-(IGEventViewerMediaPauseViewPresenter *)pauseViewPresenter;
-(void)presentControllerForURL:(id)arg1 ;
-(void)presentCommentViewControllerForPost:(id)arg1 showKeyboard:(char)arg2 shouldScrollToTop:(char)arg3 ;
-(void)reportCurrentMedia;
-(void)playMediaAtIndexPath:(id)arg1 ;
-(void)preloadNextMediaIfAvailable;
-(void)updateDoubleTapForIndexPath:(id)arg1 ;
-(unsigned)focusedPostPlayCounter;
-(void)setFocusedPostPlayCounter:(unsigned)arg1 ;
-(void)removePostAtIndexPath:(id)arg1 ;
-(void)updateFocusCoordinator;
-(void)presentDirectShareControllerForPost:(id)arg1 ;
-(void)presentLikeViewCountController;
-(void)presentCommentCountController;
-(void)presentUserDetailControllerForUser:(id)arg1 ;
-(void)presentLocationControllerForLocation:(id)arg1 ;
-(void)prepareActionSheetForFeedItem:(id)arg1 ;
-(void)mediaPreloader:(id)arg1 didLoadVideoForItem:(id)arg2 url:(id)arg3 ;
-(void)mediaPreloader:(id)arg1 didFailVideoForItem:(id)arg2 url:(id)arg3 ;
-(void)didTapAttributionHeaderCell:(id)arg1 ;
-(void)attributionHeaderCell:(id)arg1 didTapMoreButton:(id)arg2 ;
-(char)shouldLogNetworkContent;
-(void)onFeedItemHidden:(id)arg1 ;
-(void)setShowEasyReportingActionSheet:(char)arg1 ;
-(char)showEasyReportingActionSheet;
-(void)feedItemHeaderDidTapUser:(id)arg1 ;
-(void)feedItemHeaderDidTapLocation:(id)arg1 ;
-(void)feedItemHeaderDidTapAddLocation:(id)arg1 ;
-(void)feedItemHeaderDidTapCustomizableButton:(id)arg1 ;
-(void)feedItemHeaderDidTapFollowButton:(id)arg1 ;
-(void)feedItemHeaderDidTapOnMoreButton:(id)arg1 ;
-(IGEventViewerAnalyticsLogger *)logger;
-(void)setDelegate:(id<IGEventViewerViewControllerDelegate>)arg1 ;
-(IGEventViewerDataSource *)dataSource;
-(id<IGEventViewerViewControllerDelegate>)delegate;
-(char)prefersStatusBarHidden;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)willMoveToParentViewController:(id)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(IGEventViewerHeaderView *)headerView;
-(void)registerForNotifications;
-(void)unregisterForNotifications;
-(IGUser *)currentUser;
-(char)prefersNavigationBarHidden;
@end

