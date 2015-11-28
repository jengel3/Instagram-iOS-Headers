
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIViewController.h>
#import <Instagram/IGEventServiceNetworkDelegate.h>
#import <Instagram/IGEventViewerFeedViewControllerDelegate.h>
#import <Instagram/IGEventViewerTimelineViewControllerDelegate.h>
#import <Instagram/IGEventViewerHeaderViewDelegate.h>
#import <Instagram/IGEventViewerVideoPlaybackControllerDelegate.h>
#import <Instagram/IGEventViewerPhotoPlaybackControllerDelegate.h>
#import <Instagram/IGEventViewerCollectionViewDataSourceDelegate.h>
#import <Instagram/IGEventViewerSoundStateListenerDelegate.h>
#import <Instagram/IGEventViewerAttributionHeaderViewDelegate.h>
#import <UIKit/UIActionSheetDelegate.h>

@protocol IGEventViewerViewControllerDelegate;
@class IGEventViewerMediaPreloader, IGEventViewerSoundStateListener, IGEventViewerHeaderView, IGEventService, IGEventViewerCollectionViewDataSource, IGEventViewerVideoPlaybackController, IGEventViewerPhotoPlaybackController, IGEventViewerFeedViewController, IGEventViewerTimelineViewController, IGEventViewerAnalyticsLogger, UIActionSheet, NSString;

@interface IGEventViewerViewController : UIViewController <IGEventServiceNetworkDelegate, IGEventViewerFeedViewControllerDelegate, IGEventViewerTimelineViewControllerDelegate, IGEventViewerHeaderViewDelegate, IGEventViewerVideoPlaybackControllerDelegate, IGEventViewerPhotoPlaybackControllerDelegate, IGEventViewerCollectionViewDataSourceDelegate, IGEventViewerSoundStateListenerDelegate, IGEventViewerAttributionHeaderViewDelegate, UIActionSheetDelegate> {

	char _enableTimeline;
	IGEventViewerMediaPreloader* _mediaPreloader;
	id<IGEventViewerViewControllerDelegate> _delegate;
	IGEventViewerSoundStateListener* _soundStateListener;
	IGEventViewerHeaderView* _headerView;
	IGEventService* _eventService;
	IGEventViewerCollectionViewDataSource* _dataSource;
	IGEventViewerVideoPlaybackController* _videoPlaybackController;
	IGEventViewerPhotoPlaybackController* _photoPlaybackController;
	IGEventViewerFeedViewController* _feedController;
	IGEventViewerTimelineViewController* _timelineController;
	IGEventViewerAnalyticsLogger* _logger;
	UIActionSheet* _actionSheet;

}

@property (assign,nonatomic,__weak) id<IGEventViewerViewControllerDelegate> delegate;                        //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) IGEventViewerSoundStateListener * soundStateListener;                           //@synthesize soundStateListener=_soundStateListener - In the implementation block
@property (nonatomic,__weak,readonly) IGEventViewerHeaderView * headerView;                                  //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,readonly) char enableTimeline;                                                          //@synthesize enableTimeline=_enableTimeline - In the implementation block
@property (nonatomic,readonly) IGEventService * eventService;                                                //@synthesize eventService=_eventService - In the implementation block
@property (nonatomic,readonly) IGEventViewerMediaPreloader * mediaPreloader;                                 //@synthesize mediaPreloader=_mediaPreloader - In the implementation block
@property (nonatomic,readonly) IGEventViewerCollectionViewDataSource * dataSource;                           //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,readonly) IGEventViewerVideoPlaybackController * videoPlaybackController;               //@synthesize videoPlaybackController=_videoPlaybackController - In the implementation block
@property (nonatomic,readonly) IGEventViewerPhotoPlaybackController * photoPlaybackController;               //@synthesize photoPlaybackController=_photoPlaybackController - In the implementation block
@property (nonatomic,__weak,readonly) IGEventViewerFeedViewController * feedController;                      //@synthesize feedController=_feedController - In the implementation block
@property (nonatomic,__weak,readonly) IGEventViewerTimelineViewController * timelineController;              //@synthesize timelineController=_timelineController - In the implementation block
@property (nonatomic,readonly) IGEventViewerAnalyticsLogger * logger;                                        //@synthesize logger=_logger - In the implementation block
@property (assign,nonatomic,__weak) UIActionSheet * actionSheet;                                             //@synthesize actionSheet=_actionSheet - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsModule;
-(id)analyticsExtras;
-(char)shouldLogNetworkContent;
-(void)eventService:(id)arg1 didFailWithError:(id)arg2 ;
-(void)eventService:(id)arg1 didLoadInitialPosts:(id)arg2 ;
-(void)eventService:(id)arg1 didFetchMorePosts:(id)arg2 ;
-(void)didTapAttributionHeaderView:(id)arg1 ;
-(void)dataSource:(id)arg1 configureCell:(id)arg2 atIndexPath:(id)arg3 inCollectionView:(id)arg4 ;
-(void)eventViewerFeedViewController:(id)arg1 didScrollToItemAtIndexPath:(id)arg2 ;
-(void)willBeginDraggingFeedViewController:(id)arg1 ;
-(void)eventViewerFeedViewController:(id)arg1 willScrollToItemAtIndexPath:(id)arg2 ;
-(void)didEndDraggingFeedViewController:(id)arg1 ;
-(void)willEndDraggingNearBottomFeedViewController:(id)arg1 ;
-(void)eventHeaderView:(id)arg1 didTapCloseButton:(id)arg2 ;
-(void)photoPlaybackController:(id)arg1 didUpdatePhotoProgress:(float)arg2 forItem:(id)arg3 ;
-(void)photoPlaybackController:(id)arg1 didEndPlayingPhotoForItem:(id)arg2 ;
-(void)photoPlaybackController:(id)arg1 didBeginPlayingPhotoForItem:(id)arg2 withDuration:(double)arg3 ;
-(IGEventViewerSoundStateListener *)soundStateListener;
-(IGEventService *)eventService;
-(IGEventViewerMediaPreloader *)mediaPreloader;
-(id)initWithEventService:(id)arg1 initialPosts:(id)arg2 enableTimeline:(char)arg3 logger:(id)arg4 ;
-(void)setSoundStateListener:(IGEventViewerSoundStateListener *)arg1 ;
-(void)soundListenerDidUpdate:(id)arg1 ;
-(void)willBeginDraggingTimelineController:(id)arg1 ;
-(void)didEndDraggingTimelineController:(id)arg1 ;
-(void)eventViewerTimelineViewController:(id)arg1 didScrollToItemAtIndexPath:(id)arg2 ;
-(void)videoPlaybackController:(id)arg1 didBeginPlayingItem:(id)arg2 withDuration:(double)arg3 ;
-(void)videoPlaybackController:(id)arg1 didUpdateVideoProgress:(float)arg2 forItem:(id)arg3 ;
-(void)videoPlaybackController:(id)arg1 didPlayVideoToEndForItem:(id)arg2 ;
-(void)setupFeedController;
-(void)setupTimelineController;
-(CGRect)frameForFeedView;
-(void)configureEventCollectionView:(id)arg1 ;
-(char)enableTimeline;
-(CGRect)frameForTimelineView;
-(IGEventViewerVideoPlaybackController *)videoPlaybackController;
-(void)setupViewsAndChildViewControllers;
-(void)resumeCurrentMedia;
-(void)stopCurrentMedia;
-(IGEventViewerFeedViewController *)feedController;
-(IGEventViewerTimelineViewController *)timelineController;
-(void)didReceiveAppWillResignActiveNotification:(id)arg1 ;
-(void)didReceiveAppDidBecomeActiveNotification:(id)arg1 ;
-(void)loadMorePosts:(id)arg1 ;
-(void)presentActionSheetForCurrentMedia;
-(void)handleDidScrollToIndexPath:(id)arg1 ;
-(void)handleMediaDidBeginForPost:(id)arg1 withDuration:(double)arg2 ;
-(void)handleMediaUpdateProgress:(float)arg1 forPost:(id)arg2 ;
-(void)handleMediaDidEndForPost:(id)arg1 ;
-(void)presentUserDetailControllerForPost:(id)arg1 ;
-(void)presentSingleFeedControllerForPost:(id)arg1 ;
-(void)setActionSheet:(UIActionSheet *)arg1 ;
-(float)currentProgressForPost:(id)arg1 ;
-(float)currentDurationForPost:(id)arg1 ;
-(UIActionSheet *)actionSheet;
-(void)playMediaAtIndexPath:(id)arg1 ;
-(IGEventViewerPhotoPlaybackController *)photoPlaybackController;
-(void)preloadNextMediaIfAvailable;
-(id)initWithEventService:(id)arg1 initialPosts:(id)arg2 ;
-(IGEventViewerAnalyticsLogger *)logger;
-(void)setDelegate:(id<IGEventViewerViewControllerDelegate>)arg1 ;
-(void)reloadData;
-(IGEventViewerCollectionViewDataSource *)dataSource;
-(id<IGEventViewerViewControllerDelegate>)delegate;
-(char)prefersStatusBarHidden;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(IGEventViewerHeaderView *)headerView;
-(void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(void)registerForNotifications;
-(void)unregisterForNotifications;
@end

