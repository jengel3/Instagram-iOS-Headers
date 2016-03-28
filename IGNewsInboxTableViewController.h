
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGNewsTableViewController.h>
#import <Instagram/IGGenericMegaphoneViewDelegate.h>
#import <Instagram/IGRealtimeOperationDelegate.h>

@class IGRealtimeManager, IGNuxTapOnCameraView, IGNewsDataSourceStoriesSection, IGGenericMegaphoneView, IGNotificationMegaphoneLogger, IGDefaultGenericMegaphoneLogger, NSDictionary, NSString;

@interface IGNewsInboxTableViewController : IGNewsTableViewController <IGGenericMegaphoneViewDelegate, IGRealtimeOperationDelegate> {

	char _inboxIsDirty;
	char _hasLoggedFetchTimeOnce;
	IGRealtimeManager* _realtimeManager;
	IGNuxTapOnCameraView* _noMediaNux;
	IGNewsDataSourceStoriesSection* _unseenMessagesStorySection;
	IGNewsDataSourceStoriesSection* _megaphoneSection;
	IGNewsDataSourceStoriesSection* _friendRequestSection;
	IGNewsDataSourceStoriesSection* _storiesNewSection;
	IGNewsDataSourceStoriesSection* _storiesOldSection;
	IGGenericMegaphoneView* _notificationMegaphoneView;
	IGNotificationMegaphoneLogger* _notificationLogger;
	IGGenericMegaphoneView* _genericMegaphoneView;
	IGDefaultGenericMegaphoneLogger* _genericMegaphoneLogger;
	NSDictionary* _serverMegaphoneData;
	double _lastMediaPostTime;

}

@property (assign,nonatomic) char inboxIsDirty;                                                        //@synthesize inboxIsDirty=_inboxIsDirty - In the implementation block
@property (nonatomic,retain) IGRealtimeManager * realtimeManager;                                      //@synthesize realtimeManager=_realtimeManager - In the implementation block
@property (nonatomic,retain) IGNuxTapOnCameraView * noMediaNux;                                        //@synthesize noMediaNux=_noMediaNux - In the implementation block
@property (assign,nonatomic) double lastMediaPostTime;                                                 //@synthesize lastMediaPostTime=_lastMediaPostTime - In the implementation block
@property (nonatomic,retain) IGNewsDataSourceStoriesSection * unseenMessagesStorySection;              //@synthesize unseenMessagesStorySection=_unseenMessagesStorySection - In the implementation block
@property (nonatomic,retain) IGNewsDataSourceStoriesSection * megaphoneSection;                        //@synthesize megaphoneSection=_megaphoneSection - In the implementation block
@property (nonatomic,retain) IGNewsDataSourceStoriesSection * friendRequestSection;                    //@synthesize friendRequestSection=_friendRequestSection - In the implementation block
@property (nonatomic,retain) IGNewsDataSourceStoriesSection * storiesNewSection;                       //@synthesize storiesNewSection=_storiesNewSection - In the implementation block
@property (nonatomic,retain) IGNewsDataSourceStoriesSection * storiesOldSection;                       //@synthesize storiesOldSection=_storiesOldSection - In the implementation block
@property (assign,nonatomic) char hasLoggedFetchTimeOnce;                                              //@synthesize hasLoggedFetchTimeOnce=_hasLoggedFetchTimeOnce - In the implementation block
@property (nonatomic,retain) IGGenericMegaphoneView * notificationMegaphoneView;                       //@synthesize notificationMegaphoneView=_notificationMegaphoneView - In the implementation block
@property (nonatomic,retain) IGNotificationMegaphoneLogger * notificationLogger;                       //@synthesize notificationLogger=_notificationLogger - In the implementation block
@property (nonatomic,retain) IGGenericMegaphoneView * genericMegaphoneView;                            //@synthesize genericMegaphoneView=_genericMegaphoneView - In the implementation block
@property (nonatomic,retain) IGDefaultGenericMegaphoneLogger * genericMegaphoneLogger;                 //@synthesize genericMegaphoneLogger=_genericMegaphoneLogger - In the implementation block
@property (nonatomic,retain) NSDictionary * serverMegaphoneData;                                       //@synthesize serverMegaphoneData=_serverMegaphoneData - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)onFriendStatusReceived:(id)arg1 ;
-(IGRealtimeManager *)realtimeManager;
-(void)handleRealtimeOperation:(id)arg1 ;
-(id)pkForRealtimeOperation:(id)arg1 ;
-(void)handleRealtimeRefreshRequest;
-(void)setRealtimeManager:(IGRealtimeManager *)arg1 ;
-(void)legacyMegaphoneViewDidDismiss:(id)arg1 ;
-(void)legacyMegaphoneView:(id)arg1 didOpenURL:(id)arg2 ;
-(void)legacyMegaphoneView:(id)arg1 didTapButton:(id)arg2 ;
-(void)reloadDataFromPullToRefresh;
-(void)updateSections;
-(void)setServerMegaphoneData:(NSDictionary *)arg1 ;
-(NSDictionary *)serverMegaphoneData;
-(void)onFetchFailed:(id)arg1 ;
-(id)newEmptyFeedView;
-(void)onFriendStatusChanged:(id)arg1 ;
-(void)dismissNoMediaNux;
-(void)unreadCountUpdated:(id)arg1 ;
-(void)showMegaphoneIfAppropriate;
-(char)inboxIsDirty;
-(void)showNuxIfAppropriate;
-(void)fetchInboxWithForce:(char)arg1 ;
-(void)downloadInboxWithContinuationToken:(id)arg1 ;
-(IGNewsDataSourceStoriesSection *)storiesNewSection;
-(id)latestInboxStoryTimestamp;
-(void)onDataReceived:(id)arg1 ;
-(void)setMegaphoneSection:(IGNewsDataSourceStoriesSection *)arg1 ;
-(void)setUnseenMessagesStorySection:(IGNewsDataSourceStoriesSection *)arg1 ;
-(void)setFriendRequestSection:(IGNewsDataSourceStoriesSection *)arg1 ;
-(void)setStoriesNewSection:(IGNewsDataSourceStoriesSection *)arg1 ;
-(void)setStoriesOldSection:(IGNewsDataSourceStoriesSection *)arg1 ;
-(void)setSectionsWithMegaphoneStories:(id)arg1 unseenMessagesStories:(id)arg2 friendRequestStories:(id)arg3 newStories:(id)arg4 oldStories:(id)arg5 megaphone:(id)arg6 ;
-(void)setInboxIsDirty:(char)arg1 ;
-(char)hasLoggedFetchTimeOnce;
-(void)setHasLoggedFetchTimeOnce:(char)arg1 ;
-(IGGenericMegaphoneView *)genericMegaphoneView;
-(IGDefaultGenericMegaphoneLogger *)genericMegaphoneLogger;
-(IGNotificationMegaphoneLogger *)notificationLogger;
-(IGGenericMegaphoneView *)notificationMegaphoneView;
-(double)lastMediaPostTime;
-(IGNuxTapOnCameraView *)noMediaNux;
-(void)setLastMediaPostTime:(double)arg1 ;
-(void)setNoMediaNux:(IGNuxTapOnCameraView *)arg1 ;
-(float)fullOffsetAdjustmentWithVisibleNux;
-(char)addStory:(id)arg1 ;
-(void)updateForInsertWithRectBlock:(/*^block*/id)arg1 updateBlock:(/*^block*/id)arg2 ;
-(IGNewsDataSourceStoriesSection *)storiesOldSection;
-(IGNewsDataSourceStoriesSection *)megaphoneSection;
-(IGNewsDataSourceStoriesSection *)unseenMessagesStorySection;
-(IGNewsDataSourceStoriesSection *)friendRequestSection;
-(void)updateInboxStoryTimestamps;
-(void)setNotificationMegaphoneView:(IGGenericMegaphoneView *)arg1 ;
-(void)setNotificationLogger:(IGNotificationMegaphoneLogger *)arg1 ;
-(void)setGenericMegaphoneView:(IGGenericMegaphoneView *)arg1 ;
-(void)setGenericMegaphoneLogger:(IGDefaultGenericMegaphoneLogger *)arg1 ;
-(unsigned)subscriptionStatus;
-(void)fetchData;
-(void)dealloc;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(UIEdgeInsets)preferredContentInsets;
-(int)segment;
@end

