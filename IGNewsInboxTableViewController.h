
#import <Instagram/IGNewsTableViewController.h>
#import <Instagram/IGNotificationMegaphoneViewDelegate.h>
#import <Instagram/IGGenericMegaphoneViewDelegate.h>
#import <Instagram/IGRealtimeOperationDelegate.h>

@class IGRealtimeManager, IGNuxTapOnCameraView, IGNotificationMegaphoneView, IGGenericMegaphoneView, NSDictionary, IGNewsDataSourceSection, NSString;

@interface IGNewsInboxTableViewController : IGNewsTableViewController <IGNotificationMegaphoneViewDelegate, IGGenericMegaphoneViewDelegate, IGRealtimeOperationDelegate> {

	char _inboxIsDirty;
	char _hasLoggedFetchTimeOnce;
	IGRealtimeManager* _realtimeManager;
	IGNuxTapOnCameraView* _noMediaNux;
	IGNotificationMegaphoneView* _notificationMegaphoneView;
	IGGenericMegaphoneView* _genericMegaphoneView;
	NSDictionary* _serverMegaphoneData;
	IGNewsDataSourceSection* _unseenMessagesStorySection;
	IGNewsDataSourceSection* _megaphoneSection;
	IGNewsDataSourceSection* _friendRequestSection;
	IGNewsDataSourceSection* _storiesNewSection;
	IGNewsDataSourceSection* _storiesOldSection;
	double _lastMediaPostTime;

}

@property (assign,nonatomic) char inboxIsDirty;                                                    //@synthesize inboxIsDirty=_inboxIsDirty - In the implementation block
@property (nonatomic,retain) IGRealtimeManager * realtimeManager;                                  //@synthesize realtimeManager=_realtimeManager - In the implementation block
@property (nonatomic,retain) IGNuxTapOnCameraView * noMediaNux;                                    //@synthesize noMediaNux=_noMediaNux - In the implementation block
@property (assign,nonatomic) double lastMediaPostTime;                                             //@synthesize lastMediaPostTime=_lastMediaPostTime - In the implementation block
@property (nonatomic,retain) IGNotificationMegaphoneView * notificationMegaphoneView;              //@synthesize notificationMegaphoneView=_notificationMegaphoneView - In the implementation block
@property (nonatomic,retain) IGGenericMegaphoneView * genericMegaphoneView;                        //@synthesize genericMegaphoneView=_genericMegaphoneView - In the implementation block
@property (nonatomic,retain) NSDictionary * serverMegaphoneData;                                   //@synthesize serverMegaphoneData=_serverMegaphoneData - In the implementation block
@property (nonatomic,retain) IGNewsDataSourceSection * unseenMessagesStorySection;                 //@synthesize unseenMessagesStorySection=_unseenMessagesStorySection - In the implementation block
@property (nonatomic,retain) IGNewsDataSourceSection * megaphoneSection;                           //@synthesize megaphoneSection=_megaphoneSection - In the implementation block
@property (nonatomic,retain) IGNewsDataSourceSection * friendRequestSection;                       //@synthesize friendRequestSection=_friendRequestSection - In the implementation block
@property (nonatomic,retain) IGNewsDataSourceSection * storiesNewSection;                          //@synthesize storiesNewSection=_storiesNewSection - In the implementation block
@property (nonatomic,retain) IGNewsDataSourceSection * storiesOldSection;                          //@synthesize storiesOldSection=_storiesOldSection - In the implementation block
@property (assign,nonatomic) char hasLoggedFetchTimeOnce;                                          //@synthesize hasLoggedFetchTimeOnce=_hasLoggedFetchTimeOnce - In the implementation block
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
-(void)megaphoneDidDismiss:(id)arg1 ;
-(void)megaphone:(id)arg1 didOpenURL:(id)arg2 ;
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
-(void)fetchInboxWithForce:(char)arg1 ;
-(void)downloadInboxWithContinuationToken:(id)arg1 ;
-(IGNewsDataSourceSection *)storiesNewSection;
-(id)latestInboxStoryTimestamp;
-(void)onDataReceived:(id)arg1 ;
-(void)setMegaphoneSection:(IGNewsDataSourceSection *)arg1 ;
-(void)setUnseenMessagesStorySection:(IGNewsDataSourceSection *)arg1 ;
-(void)setFriendRequestSection:(IGNewsDataSourceSection *)arg1 ;
-(void)setStoriesNewSection:(IGNewsDataSourceSection *)arg1 ;
-(void)setStoriesOldSection:(IGNewsDataSourceSection *)arg1 ;
-(void)setSectionsWithMegaphoneStories:(id)arg1 unseenMessagesStories:(id)arg2 friendRequestStories:(id)arg3 newStories:(id)arg4 oldStories:(id)arg5 megaphone:(id)arg6 ;
-(void)setInboxIsDirty:(char)arg1 ;
-(char)hasLoggedFetchTimeOnce;
-(void)setHasLoggedFetchTimeOnce:(char)arg1 ;
-(IGGenericMegaphoneView *)genericMegaphoneView;
-(IGNotificationMegaphoneView *)notificationMegaphoneView;
-(void)showNuxIfAppropriate;
-(double)lastMediaPostTime;
-(IGNuxTapOnCameraView *)noMediaNux;
-(void)setLastMediaPostTime:(double)arg1 ;
-(void)setNoMediaNux:(IGNuxTapOnCameraView *)arg1 ;
-(char)addStory:(id)arg1 ;
-(void)updateForInsertWithRectBlock:(/*^block*/id)arg1 updateBlock:(/*^block*/id)arg2 ;
-(IGNewsDataSourceSection *)storiesOldSection;
-(IGNewsDataSourceSection *)megaphoneSection;
-(IGNewsDataSourceSection *)unseenMessagesStorySection;
-(IGNewsDataSourceSection *)friendRequestSection;
-(void)updateInboxStoryTimestamps;
-(void)pushMegaphoneDidDismiss;
-(void)setNotificationMegaphoneView:(IGNotificationMegaphoneView *)arg1 ;
-(void)setGenericMegaphoneView:(IGGenericMegaphoneView *)arg1 ;
-(unsigned)subscriptionStatus;
-(void)fetchData;
-(void)dealloc;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(int)segment;
@end

