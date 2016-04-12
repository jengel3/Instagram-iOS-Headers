
#import <Instagram/IGInsightsDataProviderDelegate.h>

@protocol IGInsightsSeeAllPostsTabContentViewDataSourceDelegate;
@class NSString, NSArray, IGInsightsQuery, IGInsightsFilterUnit, IGInsightsCollectionViewComponent, IGInsightsDataProvider;

@interface IGInsightsSeeAllPostsTabContentViewDataSource : NSObject <IGInsightsDataProviderDelegate> {

	char _dataFetchInProgress;
	char _moreAvailable;
	NSString* _filterSummaryTitle;
	id<IGInsightsSeeAllPostsTabContentViewDataSourceDelegate> _delegate;
	NSArray* _allMediaBundles;
	IGInsightsQuery* _query;
	IGInsightsFilterUnit* _filterUnit;
	IGInsightsCollectionViewComponent* _collectionViewComponent;
	IGInsightsDataProvider* _insightsDataProvider;
	IGInsightsDataProvider* _mediaBundleDataProvider;
	NSArray* _educationUnits;
	NSString* _maxId;

}

@property (assign,nonatomic) char dataFetchInProgress;                                                               //@synthesize dataFetchInProgress=_dataFetchInProgress - In the implementation block
@property (nonatomic,copy) NSString * filterSummaryTitle;                                                            //@synthesize filterSummaryTitle=_filterSummaryTitle - In the implementation block
@property (assign,nonatomic,__weak) id<IGInsightsSeeAllPostsTabContentViewDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char moreAvailable;                                                                     //@synthesize moreAvailable=_moreAvailable - In the implementation block
@property (nonatomic,retain) NSArray * allMediaBundles;                                                              //@synthesize allMediaBundles=_allMediaBundles - In the implementation block
@property (nonatomic,retain) IGInsightsQuery * query;                                                                //@synthesize query=_query - In the implementation block
@property (nonatomic,retain) IGInsightsFilterUnit * filterUnit;                                                      //@synthesize filterUnit=_filterUnit - In the implementation block
@property (nonatomic,retain) IGInsightsCollectionViewComponent * collectionViewComponent;                            //@synthesize collectionViewComponent=_collectionViewComponent - In the implementation block
@property (nonatomic,retain) IGInsightsDataProvider * insightsDataProvider;                                          //@synthesize insightsDataProvider=_insightsDataProvider - In the implementation block
@property (nonatomic,retain) IGInsightsDataProvider * mediaBundleDataProvider;                                       //@synthesize mediaBundleDataProvider=_mediaBundleDataProvider - In the implementation block
@property (nonatomic,copy) NSArray * educationUnits;                                                                 //@synthesize educationUnits=_educationUnits - In the implementation block
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
-(void)requestFailureForDataProvider:(id)arg1 errorMessage:(id)arg2 ;
-(IGInsightsDataProvider *)mediaBundleDataProvider;
-(void)setMediaBundleDataProvider:(IGInsightsDataProvider *)arg1 ;
-(void)setCollectionViewComponent:(IGInsightsCollectionViewComponent *)arg1 ;
-(void)setFilterUnit:(IGInsightsFilterUnit *)arg1 ;
-(void)fetchMediaBundles;
-(void)setFilterSummaryTitle:(NSString *)arg1 ;
-(void)setEducationUnits:(NSArray *)arg1 ;
-(void)cleanupQueryHistory;
-(id)getAllMediaBundles;
-(id)getFilterUnit;
-(id)getEducationUnits;
-(NSArray *)educationUnits;
-(NSString *)filterSummaryTitle;
-(char)dataFetchInProgress;
-(void)fetchMoreMediaBundles;
-(NSArray *)allMediaBundles;
-(void)setAllMediaBundles:(NSArray *)arg1 ;
-(void)setDataFetchInProgress:(char)arg1 ;
-(IGInsightsCollectionViewComponent *)collectionViewComponent;
-(void)fetchInsightsDataForQuery:(id)arg1 ;
-(void)requestInsightsDataForCurrentQueryItems;
-(void)setInsightsDataProvider:(IGInsightsDataProvider *)arg1 ;
-(IGInsightsDataProvider *)insightsDataProvider;
-(void)didGetResponseFromInsightsDataProvider:(id)arg1 ;
-(void)didGetResponseFromMediaBundleDataProvider:(id)arg1 ;
-(IGInsightsFilterUnit *)filterUnit;
-(void)setDelegate:(id<IGInsightsSeeAllPostsTabContentViewDataSourceDelegate>)arg1 ;
-(id)init;
-(id<IGInsightsSeeAllPostsTabContentViewDataSourceDelegate>)delegate;
-(IGInsightsQuery *)query;
-(void)setQuery:(IGInsightsQuery *)arg1 ;
-(void)setMoreAvailable:(char)arg1 ;
-(char)moreAvailable;
@end

