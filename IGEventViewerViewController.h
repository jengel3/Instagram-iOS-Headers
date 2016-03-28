
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIViewController.h>
#import <Instagram/IGEventViewerMediaPreloaderVideoProgressDelegate.h>
#import <Instagram/IGEventServiceNetworkDelegate.h>
#import <Instagram/IGEventViewerFeedViewScrollingDelegate.h>
#import <Instagram/IGEventViewerFeedViewDraggingDelegate.h>
#import <Instagram/IGEventViewerFeedViewGestureDelegate.h>
#import <Instagram/IGEventViewerHeaderViewDelegate.h>
#import <Instagram/IGEventViewerMediaPlaybackDelegate.h>
#import <Instagram/IGEventViewerSoundStateListenerDelegate.h>
#import <Instagram/IGEventViewerMediaPauseViewDelegate.h>
#import <Instagram/IGEventViewerMediaCellDelegate.h>
#import <Instagram/IGEventViewerAttributionHeaderCellDelegate.h>
#import <UIKit/UIActionSheetDelegate.h>

@protocol IGEventViewerViewControllerDelegate;
@class IGEventViewerMediaPreloader, IGEventViewerSoundStateListener, IGEventViewerHeaderView, IGEventService, IGUser, IGEventViewerDataSource, IGEventViewerMediaPlaybackController, IGEventViewerFeedViewController, IGEventViewerAnalyticsLogger, IGEventViewerMediaPauseViewPresenter, IGChannelFocusCoordinator, NSString;

@interface IGEventViewerViewController : UIViewController <IGEventViewerMediaPreloaderVideoProgressDelegate, IGEventServiceNetworkDelegate, IGEventViewerFeedViewScrollingDelegate, IGEventViewerFeedViewDraggingDelegate, IGEventViewerFeedViewGestureDelegate, IGEventViewerHeaderViewDelegate, IGEventViewerMediaPlaybackDelegate, IGEventViewerSoundStateListenerDelegate, IGEventViewerMediaPauseViewDelegate, IGEventViewerMediaCellDelegate, IGEventViewerAttributionHeaderCellDelegate, UIActionSheetDelegate> {

	char _isPreloadPresenterUsed;
	IGEventViewerMediaPreloader* _mediaPreloader;
	id<IGEventViewerViewControllerDelegate> _delegate;
	IGEventViewerSoundStateListener* _soundStateListener;
	IGEventViewerHeaderView* _headerView;
	IGEventService* _eventService;
	IGUser* _currentUser;
	IGEventViewerDataSource* _dataSource;
	IGEventViewerMediaPlaybackController* _mediaPlaybackController;
	IGEventViewerFeedViewController* _feedController;
	IGEventViewerAnalyticsLogger* _logger;
	IGEventViewerMediaPauseViewPresenter* _pauseViewPresenter;
	IGChannelFocusCoordinator* _focusCoordinator;

}

@property (assign,nonatomic,__weak) id<IGEventViewerViewControllerDelegate> delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) IGEventViewerSoundStateListener * soundStateListener;                          //@synthesize soundStateListener=_soundStateListener - In the implementation block
@property (nonatomic,__weak,readonly) IGEventViewerHeaderView * headerView;                                 //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,readonly) IGEventService * eventService;                                               //@synthesize eventService=_eventService - In the implementation block
@property (nonatomic,readonly) IGUser * currentUser;                                                        //@synthesize currentUser=_currentUser - In the implementation block
@property (nonatomic,readonly) IGEventViewerMediaPreloader * mediaPreloader;                                //@synthesize mediaPreloader=_mediaPreloader - In the implementation block
@property (nonatomic,readonly) IGEventViewerDataSource * dataSource;                                        //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,readonly) IGEventViewerMediaPlaybackController * mediaPlaybackController;              //@synthesize mediaPlaybackController=_mediaPlaybackController - In the implementation block
@property (nonatomic,__weak,readonly) IGEventViewerFeedViewController * feedController;                     //@synthesize feedController=_feedController - In the implementation block
@property (nonatomic,readonly) IGEventViewerAnalyticsLogger * logger;                                       //@synthesize logger=_logger - In the implementation block
@property (nonatomic,readonly) IGEventViewerMediaPauseViewPresenter * pauseViewPresenter;                   //@synthesize pauseViewPresenter=_pauseViewPresenter - In the implementation block
@property (nonatomic,readonly) IGChannelFocusCoordinator * focusCoordinator;                                //@synthesize focusCoordinator=_focusCoordinator - In the implementation block
@property (assign,nonatomic) char isPreloadPresenterUsed;                                                   //@synthesize isPreloadPresenterUsed=_isPreloadPresenterUsed - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(IGChannelFocusCoordinator *)focusCoordinator;
-(id)analyticsModule;
-(id)analyticsExtras;
-(char)shouldLogNetworkContent;
-(void)eventService:(id)arg1 didFailWithError:(id)arg2 ;
-(void)eventService:(id)arg1 didLoadInitialPosts:(id)arg2 ;
-(void)eventService:(id)arg1 didFetchMorePosts:(id)arg2 ;
-(void)didTapAttributionHeaderCell:(id)arg1 ;
-(void)attributionHeaderCell:(id)arg1 didTapMoreButton:(id)arg2 ;
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
-(void)mediaPauseView:(id)arg1 didTapShare:(id)arg2 ;
-(void)mediaPauseView:(id)arg1 didTapViewPost:(id)arg2 ;
-(void)didDismissMediaPauseView:(id)arg1 ;
-(void)mediaPlaybackController:(id)arg1 didBeginPlayingItem:(id)arg2 withDuration:(double)arg3 ;
-(void)mediaPlaybackController:(id)arg1 didEndPlayingItem:(id)arg2 ;
-(void)eventMediaPreloader:(id)arg1 didFailVideoForPost:(id)arg2 url:(id)arg3 ;
-(void)eventMediaPreloader:(id)arg1 didLoadVideoForPost:(id)arg2 url:(id)arg3 ;
-(void)didSingleTapEventViewerCell:(id)arg1 ;
-(void)didDoubleTapEventViewerCell:(id)arg1 ;
-(IGEventViewerSoundStateListener *)soundStateListener;
-(IGEventService *)eventService;
-(IGEventViewerMediaPreloader *)mediaPreloader;
-(id)initWithEventService:(id)arg1 currentUser:(id)arg2 initialPosts:(id)arg3 logger:(id)arg4 focusCoordinator:(id)arg5 ;
-(void)setSoundStateListener:(IGEventViewerSoundStateListener *)arg1 ;
-(void)soundListenerDidUpdate:(id)arg1 ;
-(id)postsFromInitialPosts:(id)arg1 focusCoordinator:(id)arg2 cachedPosts:(id)arg3 ;
-(void)setupFeedController;
-(char)isPreloadPresenterUsed;
-(CGRect)frameForFeedView;
-(IGEventViewerMediaPlaybackController *)mediaPlaybackController;
-(void)setupViewsAndChildViewControllers;
-(IGEventViewerFeedViewController *)feedController;
-(void)resumeCurrentMedia;
-(void)setIsPreloadPresenterUsed:(char)arg1 ;
-(void)didReceiveAppWillResignActiveNotification:(id)arg1 ;
-(void)didReceiveAppDidBecomeActiveNotification:(id)arg1 ;
-(void)resetHeaderViewWithTitle:(id)arg1 ;
-(void)loadMorePosts:(id)arg1 ;
-(void)exitEventViewer:(id)arg1 ;
-(void)handleDidScrollToIndexPath:(id)arg1 ;
-(void)dismissPauseMenuAnimated:(char)arg1 ;
-(void)presentUserDetailControllerForPost:(id)arg1 ;
-(void)reportCurrentMedia;
-(void)hideCurrentMedia;
-(void)presentPauseViewForCurrentMediaCell:(id)arg1 ;
-(void)handleMediaDidEndForPost:(id)arg1 ;
-(void)handleMediaPauseViewAction:(unsigned)arg1 ;
-(void)presentSingleFeedControllerForPost:(id)arg1 ;
-(void)presentDirectShareControllerForPost:(id)arg1 ;
-(IGEventViewerMediaPauseViewPresenter *)pauseViewPresenter;
-(void)playMediaAtIndexPath:(id)arg1 ;
-(void)preloadNextMediaIfAvailable;
-(void)updateDoubleTapForIndexPath:(id)arg1 ;
-(void)updateFocusCoordinator;
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
-(void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(void)registerForNotifications;
-(void)unregisterForNotifications;
-(IGUser *)currentUser;
@end

