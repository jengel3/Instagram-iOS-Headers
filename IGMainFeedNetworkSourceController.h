
#import <Instagram/IGFeedNetworkSourceDelegate.h>
#import <Instagram/IGMainFeedNetworkSourceDelegate.h>
#import <Instagram/IGMainFeedHeaderControllerDelegate.h>

@protocol IGMainFeedNetworkSourceControllerDelegate, IGFeedNetworkSourceDelegate, IGMainFeedNetworkSourceDelegate;
@class IGMainFeedNetworkSource, IGAlbumSubscriptionTrayFeedNetworkSource, IGMainFeedHeaderController, NSString;

@interface IGMainFeedNetworkSourceController : NSObject <IGFeedNetworkSourceDelegate, IGMainFeedNetworkSourceDelegate, IGMainFeedHeaderControllerDelegate> {

	IGMainFeedNetworkSource* _prefetchNetworkSource;
	IGMainFeedNetworkSource* _feedNetworkSource;
	IGAlbumSubscriptionTrayFeedNetworkSource* _albumSubscriptionTrayNetworkSource;
	id<IGMainFeedNetworkSourceControllerDelegate> _delegate;
	IGMainFeedHeaderController* _mainFeedHeaderController;
	id<IGFeedNetworkSourceDelegate> _feedDelegate;
	id<IGMainFeedNetworkSourceDelegate> _mainFeedDelegate;
	id<IGFeedNetworkSourceDelegate> _albumSubscriptionTrayDelegate;

}

@property (assign,nonatomic,__weak) id<IGFeedNetworkSourceDelegate> feedDelegate;                                          //@synthesize feedDelegate=_feedDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<IGMainFeedNetworkSourceDelegate> mainFeedDelegate;                                  //@synthesize mainFeedDelegate=_mainFeedDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<IGFeedNetworkSourceDelegate> albumSubscriptionTrayDelegate;                         //@synthesize albumSubscriptionTrayDelegate=_albumSubscriptionTrayDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<IGMainFeedNetworkSourceControllerDelegate> delegate;                                //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) IGMainFeedHeaderController * mainFeedHeaderController;                                 //@synthesize mainFeedHeaderController=_mainFeedHeaderController - In the implementation block
@property (nonatomic,readonly) IGMainFeedNetworkSource * feedNetworkSource;                                                //@synthesize feedNetworkSource=_feedNetworkSource - In the implementation block
@property (nonatomic,readonly) IGAlbumSubscriptionTrayFeedNetworkSource * albumSubscriptionTrayNetworkSource;              //@synthesize albumSubscriptionTrayNetworkSource=_albumSubscriptionTrayNetworkSource - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)feedNetworkSource:(id)arg1 didStartLoadingForFetchAction:(int)arg2 ;
-(id<IGMainFeedNetworkSourceDelegate>)mainFeedDelegate;
-(void)mainFeedNetworkSourceDidGetEmptyNewStories:(id)arg1 ;
-(void)mainFeedNetworkSource:(id)arg1 didGetNumberOfNewStories:(int)arg2 ;
-(void)setMainFeedDelegate:(id<IGMainFeedNetworkSourceDelegate>)arg1 ;
-(void)onApplicationWillEnterForegroundNotification:(id)arg1 ;
-(void)onApplicationWillEnterBackgroundNotification:(id)arg1 ;
-(void)setupPrefetchNetworkSourceForWarmStart;
-(IGAlbumSubscriptionTrayFeedNetworkSource *)albumSubscriptionTrayNetworkSource;
-(IGMainFeedHeaderController *)mainFeedHeaderController;
-(id<IGFeedNetworkSourceDelegate>)feedDelegate;
-(void)didTapOnMainFeedHeaderLabel:(id)arg1 ;
-(id)initWithFeedNetworkSourceDelegate:(id)arg1 mainFeedNetworkSourceDelegate:(id)arg2 albumSubscriptionTrayFeedNetworkSourceDelegate:(id)arg3 ;
-(void)setMainFeedHeaderController:(IGMainFeedHeaderController *)arg1 ;
-(void)setFeedDelegate:(id<IGFeedNetworkSourceDelegate>)arg1 ;
-(id<IGFeedNetworkSourceDelegate>)albumSubscriptionTrayDelegate;
-(void)setAlbumSubscriptionTrayDelegate:(id<IGFeedNetworkSourceDelegate>)arg1 ;
-(IGMainFeedNetworkSource *)feedNetworkSource;
-(void)onFeedItemPosted:(id)arg1 ;
-(void)fetchData;
-(void)setDelegate:(id<IGMainFeedNetworkSourceControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<IGMainFeedNetworkSourceControllerDelegate>)delegate;
@end

