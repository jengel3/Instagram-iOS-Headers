
#import <Instagram/IGFeedStatusViewDataSource.h>
#import <Instagram/IGFetchedResultsControllerDelegate.h>

@protocol IGFeedNetworkSourceDelegate, IGFeedNetworkSourceHideDelegate, OS_dispatch_queue;
@class NSArray, IGPrefetchPostsConfiguration, NSString, NSMutableArray, NSDictionary, IGFetchedResultsController, IGBulkMediaRequestManager, NSObject, NSDate;

@interface IGFeedNetworkSource : NSObject <IGFeedStatusViewDataSource, IGFetchedResultsControllerDelegate> {

	char _usePagination;
	char _loadedOnce;
	char _shouldEagerLoadImages;
	char _feedRestricted;
	char _moreAvailable;
	char _failedWithAuthorizationError;
	char _shouldHideIndicatorImage;
	char _isUpdatingPosts;
	char _sendAdsHeader;
	char _sendInstalledAppsHeader;
	char _sendDeviceIDHeader;
	NSArray* _posts;
	id<IGFeedNetworkSourceDelegate> _delegate;
	id<IGFeedNetworkSourceHideDelegate> _hideDelegate;
	NSArray* _downloadedPosts;
	NSArray* _rankedPosts;
	NSArray* _socialPosts;
	int _truncationPolicy;
	NSArray* _forcedMediaIDs;
	IGPrefetchPostsConfiguration* _prefetchConfiguration;
	int _status;
	NSString* _emptyMessage;
	NSString* _errorMessage;
	unsigned _errorCode;
	NSMutableArray* _promotionBannerConfigurations;
	NSString* _userActivityType;
	NSDictionary* _userActivityUserInfo;
	IGFetchedResultsController* _fetchedResultsController;
	IGBulkMediaRequestManager* _requestManager;
	Class _postClass;
	NSObject*<OS_dispatch_queue> _responseLoadQueue;
	NSString* _nextMaxID;
	NSDate* _lastFetchTime;
	NSString* _fetchPath;

}

@property (nonatomic,retain) IGFetchedResultsController * fetchedResultsController;                //@synthesize fetchedResultsController=_fetchedResultsController - In the implementation block
@property (nonatomic,retain) IGBulkMediaRequestManager * requestManager;                           //@synthesize requestManager=_requestManager - In the implementation block
@property (assign,nonatomic) Class postClass;                                                      //@synthesize postClass=_postClass - In the implementation block
@property (assign,nonatomic) int status;                                                           //@synthesize status=_status - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> responseLoadQueue;                       //@synthesize responseLoadQueue=_responseLoadQueue - In the implementation block
@property (retain) NSArray * posts;                                                                //@synthesize posts=_posts - In the implementation block
@property (retain) NSArray * rankedPosts;                                                          //@synthesize rankedPosts=_rankedPosts - In the implementation block
@property (retain) NSArray * socialPosts;                                                          //@synthesize socialPosts=_socialPosts - In the implementation block
@property (copy) NSString * nextMaxID;                                                             //@synthesize nextMaxID=_nextMaxID - In the implementation block
@property (assign) char isUpdatingPosts;                                                           //@synthesize isUpdatingPosts=_isUpdatingPosts - In the implementation block
@property (nonatomic,retain) NSDate * lastFetchTime;                                               //@synthesize lastFetchTime=_lastFetchTime - In the implementation block
@property (nonatomic,copy) NSString * fetchPath;                                                   //@synthesize fetchPath=_fetchPath - In the implementation block
@property (assign,nonatomic,__weak) id<IGFeedNetworkSourceDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<IGFeedNetworkSourceHideDelegate> hideDelegate;              //@synthesize hideDelegate=_hideDelegate - In the implementation block
@property (readonly) NSArray * downloadedPosts;                                                    //@synthesize downloadedPosts=_downloadedPosts - In the implementation block
@property (assign,nonatomic) int truncationPolicy;                                                 //@synthesize truncationPolicy=_truncationPolicy - In the implementation block
@property (nonatomic,copy) NSArray * forcedMediaIDs;                                               //@synthesize forcedMediaIDs=_forcedMediaIDs - In the implementation block
@property (assign,nonatomic) char shouldEagerLoadImages;                                           //@synthesize shouldEagerLoadImages=_shouldEagerLoadImages - In the implementation block
@property (nonatomic,retain) IGPrefetchPostsConfiguration * prefetchConfiguration;                 //@synthesize prefetchConfiguration=_prefetchConfiguration - In the implementation block
@property (assign) char loadedOnce;                                                                //@synthesize loadedOnce=_loadedOnce - In the implementation block
@property (readonly) char isFullyLoaded; 
@property (assign,nonatomic) char feedRestricted;                                                  //@synthesize feedRestricted=_feedRestricted - In the implementation block
@property (assign) char moreAvailable;                                                             //@synthesize moreAvailable=_moreAvailable - In the implementation block
@property (assign,nonatomic) char failedWithAuthorizationError;                                    //@synthesize failedWithAuthorizationError=_failedWithAuthorizationError - In the implementation block
@property (nonatomic,copy) NSString * emptyMessage;                                                //@synthesize emptyMessage=_emptyMessage - In the implementation block
@property (nonatomic,copy) NSString * errorMessage;                                                //@synthesize errorMessage=_errorMessage - In the implementation block
@property (assign,nonatomic) char shouldHideIndicatorImage;                                        //@synthesize shouldHideIndicatorImage=_shouldHideIndicatorImage - In the implementation block
@property (nonatomic,readonly) char isLoading; 
@property (assign,nonatomic) unsigned errorCode;                                                   //@synthesize errorCode=_errorCode - In the implementation block
@property (assign,nonatomic) char sendAdsHeader;                                                   //@synthesize sendAdsHeader=_sendAdsHeader - In the implementation block
@property (assign,nonatomic) char sendInstalledAppsHeader;                                         //@synthesize sendInstalledAppsHeader=_sendInstalledAppsHeader - In the implementation block
@property (assign,nonatomic) char sendDeviceIDHeader;                                              //@synthesize sendDeviceIDHeader=_sendDeviceIDHeader - In the implementation block
@property (nonatomic,retain) NSMutableArray * promotionBannerConfigurations;                       //@synthesize promotionBannerConfigurations=_promotionBannerConfigurations - In the implementation block
@property (nonatomic,copy) NSString * userActivityType;                                            //@synthesize userActivityType=_userActivityType - In the implementation block
@property (nonatomic,copy) NSDictionary * userActivityUserInfo;                                    //@synthesize userActivityUserInfo=_userActivityUserInfo - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)feedForAlbumFullscreenViewerWithChannelPK:(id)arg1 ;
+(id)feedForReelPrivateArchive;
+(id)feedWithFeedItem:(id)arg1 ;
+(id)feedWithItems:(id)arg1 ;
+(id)fetchPathForMediaID:(id)arg1 ;
+(id)feedWithPopular;
+(id)mainFeedNetworkSource;
+(id)feedWithReelsTimeline;
+(id)feedWithTag:(id)arg1 loadedPosts:(id)arg2 ;
+(id)feedWithLocation:(id)arg1 loadedPosts:(id)arg2 ;
+(id)feedWithMediaID:(id)arg1 ;
+(id)feedWithLiked;
+(id)feedWithUser:(id)arg1 ;
+(id)feedWithPhotosOfUser:(id)arg1 ;
-(id)initWithPostClass:(Class)arg1 fetchPath:(id)arg2 ;
-(void)setTruncationPolicy:(int)arg1 ;
-(void)setPrefetchConfiguration:(IGPrefetchPostsConfiguration *)arg1 ;
-(void)setShouldEagerLoadImages:(char)arg1 ;
-(id)regularPostsFromResponse:(id)arg1 clearOut:(char)arg2 usingStore:(id)arg3 ;
-(void)loadEntriesFromResponse:(id)arg1 clearOut:(char)arg2 ;
-(NSArray *)posts;
-(void)setPosts:(NSArray *)arg1 ;
-(id)hyperlapseBannerConfigurationForHashtag:(id)arg1 ;
-(id)boomerangBannerConfigurationForHashtag:(id)arg1 ;
-(id)layoutBannerConfigurationForHashtag:(id)arg1 ;
-(id)initWithTag:(id)arg1 loadedPosts:(id)arg2 ;
-(id)initWithLocation:(id)arg1 loadedPosts:(id)arg2 ;
-(id)initWithPosts:(id)arg1 postClass:(Class)arg2 fetchPath:(id)arg3 ;
-(void)setPostClass:(Class)arg1 ;
-(void)setEmptyMessage:(NSString *)arg1 ;
-(void)setRequestManager:(IGBulkMediaRequestManager *)arg1 ;
-(void)onPostDeleted:(id)arg1 ;
-(void)setFetchedResultsController:(IGFetchedResultsController *)arg1 ;
-(void)setFeedRestricted:(char)arg1 ;
-(char)loadedOnce;
-(id)filterPostsFromItems:(id)arg1 ;
-(char)isFullyLoaded;
-(id)singleFeedTitleFromPost:(id)arg1 ;
-(NSDate *)lastFetchTime;
-(void)deletePost:(id)arg1 ;
-(id<IGFeedNetworkSourceHideDelegate>)hideDelegate;
-(NSString *)fetchPath;
-(char)fetchDataWithParameters:(id)arg1 ;
-(char)fetchDataWithParameters:(id)arg1 priority:(int)arg2 ;
-(NSArray *)forcedMediaIDs;
-(char)fetchDataWithConfig:(id)arg1 ;
-(void)setLastFetchTime:(NSDate *)arg1 ;
-(char)failedWithAuthorizationError;
-(NSString *)nextMaxID;
-(IGBulkMediaRequestManager *)requestManager;
-(id)buildRequestWithParameters:(id)arg1 maxID:(id)arg2 ;
-(id)injectedCompleteFeedResponse:(id)arg1 ;
-(void)handleSuccessBlockWithResponse:(id)arg1 requestConfig:(id)arg2 ;
-(void)handleFailureResponse:(id)arg1 ;
-(void)handleAuthorizationError:(id)arg1 ;
-(void)setFailedWithAuthorizationError:(char)arg1 ;
-(char)fetchMoreItemsWithParameters:(id)arg1 ;
-(void)setIsUpdatingPosts:(char)arg1 ;
-(void)setNextMaxID:(NSString *)arg1 ;
-(Class)postClass;
-(id)rankedPostsFromResponse:(id)arg1 usingStore:(id)arg2 ;
-(id)socialPostsFromResponse:(id)arg1 usingStore:(id)arg2 ;
-(void)setRankedPosts:(NSArray *)arg1 ;
-(void)setSocialPosts:(NSArray *)arg1 ;
-(NSArray *)rankedPosts;
-(NSArray *)socialPosts;
-(void)setLoadedOnce:(char)arg1 ;
-(id)parsePostsFromResponse:(id)arg1 usingStore:(id)arg2 ;
-(id)singlePostFromResponse:(id)arg1 usingStore:(id)arg2 ;
-(void)eagerLoadMediaForPosts:(id)arg1 ;
-(IGFetchedResultsController *)fetchedResultsController;
-(int)truncationPolicy;
-(char)shouldEagerLoadImages;
-(IGPrefetchPostsConfiguration *)prefetchConfiguration;
-(char)feedRestricted;
-(id)rankTokenForFeedNetworkSource:(id)arg1 isTail:(char)arg2 ;
-(NSString *)emptyMessage;
-(char)hasRestrictedFeed;
-(char)shouldHideIndicatorImage;
-(void)fetchedResultsController:(id)arg1 didRefreshObjects:(id)arg2 allObjects:(id)arg3 ;
-(NSObject*<OS_dispatch_queue>)responseLoadQueue;
-(double)timeSinceLastFetch;
-(void)insertPost:(id)arg1 ;
-(void)hideFeedItem:(id)arg1 ;
-(void)truncateItemsWithMaxCount:(unsigned)arg1 ;
-(char)fetchMoreItems;
-(void)setHideDelegate:(id<IGFeedNetworkSourceHideDelegate>)arg1 ;
-(NSArray *)downloadedPosts;
-(void)setForcedMediaIDs:(NSArray *)arg1 ;
-(void)setShouldHideIndicatorImage:(char)arg1 ;
-(char)isUpdatingPosts;
-(char)sendAdsHeader;
-(void)setSendAdsHeader:(char)arg1 ;
-(char)sendInstalledAppsHeader;
-(void)setSendInstalledAppsHeader:(char)arg1 ;
-(char)sendDeviceIDHeader;
-(void)setSendDeviceIDHeader:(char)arg1 ;
-(NSMutableArray *)promotionBannerConfigurations;
-(void)setPromotionBannerConfigurations:(NSMutableArray *)arg1 ;
-(void)setResponseLoadQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setFetchPath:(NSString *)arg1 ;
-(void)setUserActivityType:(NSString *)arg1 ;
-(NSDictionary *)userActivityUserInfo;
-(void)setUserActivityUserInfo:(NSDictionary *)arg1 ;
-(id)initWithTag:(id)arg1 ;
-(unsigned)itemCount;
-(char)fetchData;
-(void)setDelegate:(id<IGFeedNetworkSourceDelegate>)arg1 ;
-(void)dealloc;
-(id<IGFeedNetworkSourceDelegate>)delegate;
-(id)displayTitle;
-(char)isLoading;
-(int)status;
-(void)setStatus:(int)arg1 ;
-(void)setMoreAvailable:(char)arg1 ;
-(char)moreAvailable;
-(NSString *)userActivityType;
-(void)setErrorMessage:(NSString *)arg1 ;
-(NSString *)errorMessage;
-(id)initWithLocation:(id)arg1 ;
-(unsigned)errorCode;
-(void)setErrorCode:(unsigned)arg1 ;
@end

