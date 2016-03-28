
#import <Instagram/IGFeedNetworkSourceDelegate.h>
#import <Instagram/IGBackgroundLoader.h>

@class IGFeedNetworkSource, IGBulkMediaRequestManager, NSArray, NSString;

@interface IGBackgroundFeedLoader : NSObject <IGFeedNetworkSourceDelegate, IGBackgroundLoader> {

	IGFeedNetworkSource* _feedSource;
	id _selfReference;
	/*^block*/id _completionHandler;
	IGBulkMediaRequestManager* _mediaLoader;
	int _ongoingMediaRequestsCount;
	NSArray* _currentFeedPostsToLoad;

}

@property (nonatomic,retain) IGFeedNetworkSource * feedSource;                     //@synthesize feedSource=_feedSource - In the implementation block
@property (nonatomic,retain) id selfReference;                                     //@synthesize selfReference=_selfReference - In the implementation block
@property (nonatomic,copy) id completionHandler;                                   //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,retain) IGBulkMediaRequestManager * mediaLoader;              //@synthesize mediaLoader=_mediaLoader - In the implementation block
@property (assign,nonatomic) int ongoingMediaRequestsCount;                        //@synthesize ongoingMediaRequestsCount=_ongoingMediaRequestsCount - In the implementation block
@property (nonatomic,retain) NSArray * currentFeedPostsToLoad;                     //@synthesize currentFeedPostsToLoad=_currentFeedPostsToLoad - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)feedNetworkSource:(id)arg1 didFinishLoadingObjects:(id)arg2 forFetchAction:(int)arg3 ;
-(void)feedNetworkSource:(id)arg1 didFailToLoadForFetchAction:(int)arg2 ;
-(void)feedNetworkSource:(id)arg1 didChangeToObjects:(id)arg2 ;
-(void)feedNetworkSource:(id)arg1 didRefreshObjects:(id)arg2 allObjects:(id)arg3 ;
-(void)loadFeed;
-(NSArray *)currentFeedPostsToLoad;
-(void)setCurrentFeedPostsToLoad:(NSArray *)arg1 ;
-(void)loadMediaForNewPosts:(id)arg1 ;
-(IGFeedNetworkSource *)feedSource;
-(IGBulkMediaRequestManager *)mediaLoader;
-(void)loadWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setFeedSource:(IGFeedNetworkSource *)arg1 ;
-(void)setMediaLoader:(IGBulkMediaRequestManager *)arg1 ;
-(int)ongoingMediaRequestsCount;
-(void)setOngoingMediaRequestsCount:(int)arg1 ;
-(void)finishWithResult:(unsigned)arg1 ;
-(void)dealloc;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(void)setSelfReference:(id)arg1 ;
-(id)selfReference;
@end

