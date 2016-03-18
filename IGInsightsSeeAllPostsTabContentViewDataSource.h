
#import <Instagram/IGInsightsDataProviderDelegate.h>

@protocol IGInsightsSeeAllPostsTabContentViewDataSourceDelegate;
@class NSArray, NSDictionary, IGInsightsCollectionViewComponent, IGInsightsDataProvider, NSString;

@interface IGInsightsSeeAllPostsTabContentViewDataSource : NSObject <IGInsightsDataProviderDelegate> {

	char _dataFetchInProgress;
	char _moreAvailable;
	id<IGInsightsSeeAllPostsTabContentViewDataSourceDelegate> _delegate;
	NSArray* _allMediaBundles;
	NSDictionary* _queryItems;
	NSArray* _mediaOrderSelectorTabs;
	IGInsightsCollectionViewComponent* _collectionViewComponent;
	IGInsightsDataProvider* _insightsDataProvider;
	IGInsightsDataProvider* _mediaBundleDataProvider;
	NSString* _maxId;

}

@property (assign,nonatomic) char dataFetchInProgress;                                                               //@synthesize dataFetchInProgress=_dataFetchInProgress - In the implementation block
@property (assign,nonatomic,__weak) id<IGInsightsSeeAllPostsTabContentViewDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char moreAvailable;                                                                     //@synthesize moreAvailable=_moreAvailable - In the implementation block
@property (nonatomic,retain) NSArray * allMediaBundles;                                                              //@synthesize allMediaBundles=_allMediaBundles - In the implementation block
@property (nonatomic,copy) NSDictionary * queryItems;                                                                //@synthesize queryItems=_queryItems - In the implementation block
@property (nonatomic,copy) NSArray * mediaOrderSelectorTabs;                                                         //@synthesize mediaOrderSelectorTabs=_mediaOrderSelectorTabs - In the implementation block
@property (nonatomic,retain) IGInsightsCollectionViewComponent * collectionViewComponent;                            //@synthesize collectionViewComponent=_collectionViewComponent - In the implementation block
@property (nonatomic,retain) IGInsightsDataProvider * insightsDataProvider;                                          //@synthesize insightsDataProvider=_insightsDataProvider - In the implementation block
@property (nonatomic,retain) IGInsightsDataProvider * mediaBundleDataProvider;                                       //@synthesize mediaBundleDataProvider=_mediaBundleDataProvider - In the implementation block
@property (nonatomic,retain) NSString * maxId;                                                                       //@synthesize maxId=_maxId - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)loadedOnce;
-(NSString *)maxId;
-(void)setMaxId:(NSString *)arg1 ;
-(void)fetchFeedItemsFromMediaIDs:(id)arg1 ;
-(void)didGetResponseForDataProvider:(id)arg1 ;
-(void)failedToGetAccessTokenForDataProvider:(id)arg1 ;
-(IGInsightsDataProvider *)mediaBundleDataProvider;
-(void)setMediaBundleDataProvider:(IGInsightsDataProvider *)arg1 ;
-(void)setCollectionViewComponent:(IGInsightsCollectionViewComponent *)arg1 ;
-(void)setMediaOrderSelectorTabs:(NSArray *)arg1 ;
-(void)fetchMediaBundles;
-(id)getMediaOrderSelectorTabs;
-(id)getAllMediaBundles;
-(void)cleanupQueryHistory;
-(char)dataFetchInProgress;
-(void)fetchMoreMediaBundles;
-(NSArray *)mediaOrderSelectorTabs;
-(NSArray *)allMediaBundles;
-(void)setAllMediaBundles:(NSArray *)arg1 ;
-(void)setDataFetchInProgress:(char)arg1 ;
-(IGInsightsCollectionViewComponent *)collectionViewComponent;
-(void)fetchInsightsDataForQueryItems:(id)arg1 ;
-(void)requestInsightsDataForCurrentQueryItems;
-(void)setInsightsDataProvider:(IGInsightsDataProvider *)arg1 ;
-(IGInsightsDataProvider *)insightsDataProvider;
-(void)didGetResponseFromInsightsDataProvider:(id)arg1 ;
-(void)didGetResponseFromMediaBundleDataProvider:(id)arg1 ;
-(void)setDelegate:(id<IGInsightsSeeAllPostsTabContentViewDataSourceDelegate>)arg1 ;
-(id)init;
-(id<IGInsightsSeeAllPostsTabContentViewDataSourceDelegate>)delegate;
-(void)setQueryItems:(NSDictionary *)arg1 ;
-(void)setMoreAvailable:(char)arg1 ;
-(char)moreAvailable;
-(NSDictionary *)queryItems;
@end

