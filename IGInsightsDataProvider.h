
#import <Instagram/IGFeedNetworkSourceDelegate.h>

@protocol IGInsightsDataProviderDelegate;
@class NSArray, IGInsightsFilterUnit, NSString, IGBusinessGraphQLService, IGFeedNetworkSource;

@interface IGInsightsDataProvider : NSObject <IGFeedNetworkSourceDelegate> {

	id<IGInsightsDataProviderDelegate> _delegate;
	NSArray* _tabs;
	NSArray* _subtabs;
	NSArray* _dropDownCells;
	NSArray* _mediaOrderSelectorTabs;
	IGInsightsFilterUnit* _filterUnit;
	NSString* _filterSummaryTitle;
	NSArray* _components;
	NSArray* _mediaBundles;
	NSString* _dataSourceFileName;
	NSArray* _mediaIDs;
	IGBusinessGraphQLService* _service;
	IGFeedNetworkSource* _feedSource;

}

@property (nonatomic,copy) NSArray * tabs;                                                    //@synthesize tabs=_tabs - In the implementation block
@property (nonatomic,copy) NSArray * subtabs;                                                 //@synthesize subtabs=_subtabs - In the implementation block
@property (nonatomic,copy) NSArray * dropDownCells;                                           //@synthesize dropDownCells=_dropDownCells - In the implementation block
@property (nonatomic,copy) NSArray * mediaOrderSelectorTabs;                                  //@synthesize mediaOrderSelectorTabs=_mediaOrderSelectorTabs - In the implementation block
@property (nonatomic,retain) IGInsightsFilterUnit * filterUnit;                               //@synthesize filterUnit=_filterUnit - In the implementation block
@property (nonatomic,copy) NSString * filterSummaryTitle;                                     //@synthesize filterSummaryTitle=_filterSummaryTitle - In the implementation block
@property (nonatomic,copy) NSArray * components;                                              //@synthesize components=_components - In the implementation block
@property (nonatomic,copy) NSArray * mediaBundles;                                            //@synthesize mediaBundles=_mediaBundles - In the implementation block
@property (nonatomic,copy) NSString * dataSourceFileName;                                     //@synthesize dataSourceFileName=_dataSourceFileName - In the implementation block
@property (nonatomic,copy) NSArray * mediaIDs;                                                //@synthesize mediaIDs=_mediaIDs - In the implementation block
@property (nonatomic,readonly) IGBusinessGraphQLService * service;                            //@synthesize service=_service - In the implementation block
@property (nonatomic,retain) IGFeedNetworkSource * feedSource;                                //@synthesize feedSource=_feedSource - In the implementation block
@property (assign,nonatomic,__weak) id<IGInsightsDataProviderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)feedNetworkSource:(id)arg1 didFinishLoadingObjects:(id)arg2 forFetchAction:(int)arg3 ;
-(NSArray *)mediaBundles;
-(void)feedNetworkSource:(id)arg1 didFailToLoadForFetchAction:(int)arg2 ;
-(void)setFeedSource:(IGFeedNetworkSource *)arg1 ;
-(IGFeedNetworkSource *)feedSource;
-(void)onDataReceived:(id)arg1 ;
-(id)getMediaBundles;
-(void)queryMediaBundleWithMediaIDs:(id)arg1 ;
-(void)setMediaBundles:(NSArray *)arg1 ;
-(NSArray *)mediaIDs;
-(void)setMediaIDs:(NSArray *)arg1 ;
-(void)queryInsightsItemsWithQuery:(id)arg1 ;
-(void)handleGraphQLRequestError:(id)arg1 ;
-(void)parseAndSaveResponse:(id)arg1 ;
-(id)validateJSONResponse:(id)arg1 ;
-(void)setFilterUnit:(IGInsightsFilterUnit *)arg1 ;
-(void)setFilterSummaryTitle:(NSString *)arg1 ;
-(void)parseComponentsFromItems:(id)arg1 ;
-(void)validateMediaBundles;
-(void)queryTabBarItemsAndDefaultTabContent;
-(id)getTabs;
-(id)getSubtabs;
-(id)getDropDownCells;
-(id)getMediaOrderSelectorTabs;
-(id)getFilterUnit;
-(id)getFilterSummaryTitle;
-(id)getComponents;
-(id)loadDummyDataFromFile:(id)arg1 ;
-(void)setTabs:(NSArray *)arg1 ;
-(NSArray *)subtabs;
-(void)setSubtabs:(NSArray *)arg1 ;
-(NSArray *)dropDownCells;
-(void)setDropDownCells:(NSArray *)arg1 ;
-(NSArray *)mediaOrderSelectorTabs;
-(void)setMediaOrderSelectorTabs:(NSArray *)arg1 ;
-(NSString *)filterSummaryTitle;
-(NSString *)dataSourceFileName;
-(void)setDataSourceFileName:(NSString *)arg1 ;
-(IGInsightsFilterUnit *)filterUnit;
-(void)setDelegate:(id<IGInsightsDataProviderDelegate>)arg1 ;
-(id)init;
-(id<IGInsightsDataProviderDelegate>)delegate;
-(NSArray *)components;
-(IGBusinessGraphQLService *)service;
-(void)setComponents:(NSArray *)arg1 ;
-(NSArray *)tabs;
@end

