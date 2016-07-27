
#import <Instagram/IGFeedNetworkSourceDelegate.h>
#import <Instagram/IGMainFeedNetworkSourceDelegate.h>
#import <Instagram/IGMainFeedHeaderControllerDelegate.h>

@protocol IGMainFeedNetworkSourceControllerDelegate, IGFeedNetworkSourceDelegate, IGMainFeedNetworkSourceDelegate;
@class IGMainFeedNetworkSource, IGAlbumSubscriptionTrayFeedNetworkSource, IGMainFeedHeaderController, IGUserSession, NSString;

@interface IGMainFeedNetworkSourceController : NSObject <IGFeedNetworkSourceDelegate, IGMainFeedNetworkSourceDelegate, IGMainFeedHeaderControllerDelegate> {

	IGMainFeedNetworkSource* _prefetchNetworkSource;
	IGMainFeedNetworkSource* _feedNetworkSource;
	IGAlbumSubscriptionTrayFeedNetworkSource* _albumSubscriptionTrayNetworkSource;
	id<IGMainFeedNetworkSourceControllerDelegate> _delegate;
	IGMainFeedHeaderController* _mainFeedHeaderController;
	IGUserSession* _userSession;
	id<IGFeedNetworkSourceDelegate> _feedDelegate;
	id<IGMainFeedNetworkSourceDelegate> _mainFeedDelegate;

}

@property (nonatomic,readonly) IGUserSession * userSession;                                                                //@synthesize userSession=_userSession - In the implementation block
@property (assign,nonatomic,__weak) id<IGFeedNetworkSourceDelegate> feedDelegate;                                          //@synthesize feedDelegate=_feedDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<IGMainFeedNetworkSourceDelegate> mainFeedDelegate;                                  //@synthesize mainFeedDelegate=_mainFeedDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<IGMainFeedNetworkSourceControllerDelegate> delegate;                                //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) IGMainFeedHeaderController * mainFeedHeaderController;                                 //@synthesize mainFeedHeaderController=_mainFeedHeaderController - In the implementation block
@property (nonatomic,readonly) IGMainFeedNetworkSource * feedNetworkSource;                                                //@synthesize feedNetworkSource=_feedNetworkSource - In the implementation block
@property (nonatomic,readonly) IGAlbumSubscriptionTrayFeedNetworkSource * albumSubscriptionTrayNetworkSource;              //@synthesize albumSubscriptionTrayNetworkSource=_albumSubscriptionTrayNetworkSource - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)serializeData;
-(void)feedNetworkSource:(id)arg1 didStartLoadingForFetchAction:(int)arg2 ;
-(id<IGMainFeedNetworkSourceDelegate>)mainFeedDelegate;
-(void)mainFeedNetworkSourceDidGetEmptyNewStories:(id)arg1 ;
-(void)mainFeedNetworkSource:(id)arg1 didGetNumberOfNewStories:(int)arg2 ;
-(void)setMainFeedDelegate:(id<IGMainFeedNetworkSourceDelegate>)arg1 ;
-(void)onFeedItemPosted:(id)arg1 ;
-(void)onApplicationWillEnterBackgroundNotification:(id)arg1 ;
-(void)didTapOnMainFeedHeaderLabel:(id)arg1 ;
-(void)onApplicationWillEnterForegroundNotification:(id)arg1 ;
-(void)onApplicationWillTerminate:(id)arg1 ;
-(IGMainFeedHeaderController *)mainFeedHeaderController;
-(IGAlbumSubscriptionTrayFeedNetworkSource *)albumSubscriptionTrayNetworkSource;
-(void)setupPrefetchNetworkSourceForWarmStart;
-(id<IGFeedNetworkSourceDelegate>)feedDelegate;
-(id)initWithUserSession:(id)arg1 feedNetworkSourceDelegate:(id)arg2 mainFeedNetworkSourceDelegate:(id)arg3 albumSubscriptionTrayFeedNetworkSourceDelegate:(id)arg4 ;
-(void)setMainFeedHeaderController:(IGMainFeedHeaderController *)arg1 ;
-(char)hasPrefetchContent;
-(void)loadContentsFromPrefetch;
-(void)setFeedDelegate:(id<IGFeedNetworkSourceDelegate>)arg1 ;
-(IGMainFeedNetworkSource *)feedNetworkSource;
-(void)fetchData;
-(void)setDelegate:(id<IGMainFeedNetworkSourceControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<IGMainFeedNetworkSourceControllerDelegate>)delegate;
-(IGUserSession *)userSession;
@end

