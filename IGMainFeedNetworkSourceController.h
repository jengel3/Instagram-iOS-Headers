
#import <Instagram/IGFeedNetworkSourceDelegate.h>
#import <Instagram/IGMainFeedNetworkSourceDelegate.h>
#import <Instagram/IGMainFeedHeaderControllerDelegate.h>

@protocol IGMainFeedNetworkSourceControllerDelegate, IGFeedNetworkSourceDelegate, IGMainFeedNetworkSourceDelegate;
@class IGMainFeedNetworkSource, IGAlbumDataController, IGMainFeedHeaderController, IGUserSession, NSString;

@interface IGMainFeedNetworkSourceController : NSObject <IGFeedNetworkSourceDelegate, IGMainFeedNetworkSourceDelegate, IGMainFeedHeaderControllerDelegate> {

	IGMainFeedNetworkSource* _prefetchNetworkSource;
	IGMainFeedNetworkSource* _feedNetworkSource;
	IGAlbumDataController* _albumDataController;
	id<IGMainFeedNetworkSourceControllerDelegate> _delegate;
	IGMainFeedHeaderController* _mainFeedHeaderController;
	IGUserSession* _userSession;
	id<IGFeedNetworkSourceDelegate> _feedDelegate;
	id<IGMainFeedNetworkSourceDelegate> _mainFeedDelegate;

}

@property (nonatomic,readonly) IGUserSession * userSession;                                              //@synthesize userSession=_userSession - In the implementation block
@property (assign,nonatomic,__weak) id<IGFeedNetworkSourceDelegate> feedDelegate;                        //@synthesize feedDelegate=_feedDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<IGMainFeedNetworkSourceDelegate> mainFeedDelegate;                //@synthesize mainFeedDelegate=_mainFeedDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<IGMainFeedNetworkSourceControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) IGMainFeedHeaderController * mainFeedHeaderController;               //@synthesize mainFeedHeaderController=_mainFeedHeaderController - In the implementation block
@property (nonatomic,readonly) IGMainFeedNetworkSource * feedNetworkSource;                              //@synthesize feedNetworkSource=_feedNetworkSource - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)feedNetworkSource:(id)arg1 didStartLoadingForFetchAction:(int)arg2 ;
-(id<IGMainFeedNetworkSourceDelegate>)mainFeedDelegate;
-(void)mainFeedNetworkSourceDidGetEmptyNewStories:(id)arg1 ;
-(void)mainFeedNetworkSource:(id)arg1 didGetNumberOfNewStories:(int)arg2 ;
-(void)serializeData;
-(void)setMainFeedDelegate:(id<IGMainFeedNetworkSourceDelegate>)arg1 ;
-(void)didTapOnMainFeedHeaderLabel:(id)arg1 ;
-(void)onApplicationWillEnterBackgroundNotification:(id)arg1 ;
-(void)onApplicationWillTerminate:(id)arg1 ;
-(IGMainFeedHeaderController *)mainFeedHeaderController;
-(void)setupPrefetchNetworkSourceForWarmStart;
-(id<IGFeedNetworkSourceDelegate>)feedDelegate;
-(void)setFeedDelegate:(id<IGFeedNetworkSourceDelegate>)arg1 ;
-(id)initWithUserSession:(id)arg1 feedNetworkSourceDelegate:(id)arg2 mainFeedNetworkSourceDelegate:(id)arg3 ;
-(void)onFeedItemPosted:(id)arg1 ;
-(void)onApplicationWillEnterForegroundNotification:(id)arg1 ;
-(void)setMainFeedHeaderController:(IGMainFeedHeaderController *)arg1 ;
-(void)fetchDataWithAlbumTrayLoggingContext:(id)arg1 ;
-(char)hasPrefetchContent;
-(void)loadContentsFromPrefetch;
-(void)doAlbumFetchUponApplicationWillEnterForegroundNotificationWithLoggingContext:(id)arg1 ;
-(IGMainFeedNetworkSource *)feedNetworkSource;
-(void)setDelegate:(id<IGMainFeedNetworkSourceControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<IGMainFeedNetworkSourceControllerDelegate>)delegate;
-(IGUserSession *)userSession;
@end

