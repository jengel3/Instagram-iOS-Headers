
#import <Instagram/IGInsightsDataProviderDelegate.h>

@protocol IGInsightsSeeAllPostsTabContentViewDataSourceDelegate;
@class NSArray, NSDictionary, IGInsightsCollectionViewComponent, IGInsightsDataProvider, NSString;

@interface IGInsightsSeeAllPostsTabContentViewDataSource : NSObject <IGInsightsDataProviderDelegate> {

	char _dataFetchInProgress;
	id<IGInsightsSeeAllPostsTabContentViewDataSourceDelegate> _delegate;
	NSArray* _allMediaBundles;
	NSDictionary* _queryItems;
	NSArray* _mediaOrderSelectorTabs;
	IGInsightsCollectionViewComponent* _collectionViewComponent;
	IGInsightsDataProvider* _insightsDataProvider;
	IGInsightsDataProvider* _mediaBundleDataProvider;

}

@property (assign,nonatomic) char dataFetchInProgress;                                                               //@synthesize dataFetchInProgress=_dataFetchInProgress - In the implementation block
@property (assign,nonatomic,__weak) id<IGInsightsSeeAllPostsTabContentViewDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSArray * allMediaBundles;                                                              //@synthesize allMediaBundles=_allMediaBundles - In the implementation block
@property (nonatomic,copy) NSDictionary * queryItems;                                                                //@synthesize queryItems=_queryItems - In the implementation block
@property (nonatomic,copy) NSArray * mediaOrderSelectorTabs;                                                         //@synthesize mediaOrderSelectorTabs=_mediaOrderSelectorTabs - In the implementation block
@property (nonatomic,retain) IGInsightsCollectionViewComponent * collectionViewComponent;                            //@synthesize collectionViewComponent=_collectionViewComponent - In the implementation block
@property (nonatomic,retain) IGInsightsDataProvider * insightsDataProvider;                                          //@synthesize insightsDataProvider=_insightsDataProvider - In the implementation block
@property (nonatomic,retain) IGInsightsDataProvider * mediaBundleDataProvider;                                       //@synthesize mediaBundleDataProvider=_mediaBundleDataProvider - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didGetResponseForDataProvider:(id)arg1 ;
-(IGInsightsDataProvider *)mediaBundleDataProvider;
-(void)setMediaBundleDataProvider:(IGInsightsDataProvider *)arg1 ;
-(void)setCollectionViewComponent:(IGInsightsCollectionViewComponent *)arg1 ;
-(void)setMediaOrderSelectorTabs:(NSArray *)arg1 ;
-(void)fetchMediaBundles;
-(NSArray *)mediaOrderSelectorTabs;
-(char)dataFetchInProgress;
-(void)fetchMoreMediaBundles;
-(void)fetchFeedItemsFromMediaIDs:(id)arg1 ;
-(void)setDataFetchInProgress:(char)arg1 ;
-(void)setAllMediaBundles:(NSArray *)arg1 ;
-(IGInsightsCollectionViewComponent *)collectionViewComponent;
-(void)fetchInsightsDataForQueryItems:(id)arg1 ;
-(void)requestInsightsDataForCurrentQueryItems;
-(void)setInsightsDataProvider:(IGInsightsDataProvider *)arg1 ;
-(IGInsightsDataProvider *)insightsDataProvider;
-(void)didGetResponseFromInsightsDataProvider:(id)arg1 ;
-(void)didGetResponseFromMediaBundleDataProvider:(id)arg1 ;
-(NSArray *)allMediaBundles;
-(void)setDelegate:(id<IGInsightsSeeAllPostsTabContentViewDataSourceDelegate>)arg1 ;
-(id<IGInsightsSeeAllPostsTabContentViewDataSourceDelegate>)delegate;
-(void)setQueryItems:(NSDictionary *)arg1 ;
-(NSDictionary *)queryItems;
@end

