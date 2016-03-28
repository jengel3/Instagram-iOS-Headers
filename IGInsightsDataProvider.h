
#import <Instagram/IGFeedNetworkSourceDelegate.h>

@protocol IGInsightsDataProviderDelegate;
@class NSArray, NSString, IGGraphQLRequest;

@interface IGInsightsDataProvider : NSObject <IGFeedNetworkSourceDelegate> {

	id<IGInsightsDataProviderDelegate> _delegate;
	NSArray* _tabs;
	NSArray* _subtabs;
	NSArray* _dropDownCells;
	NSArray* _mediaOrderSelectorTabs;
	NSArray* _filterMediaTypeUnits;
	NSString* _filterSummaryTitle;
	NSArray* _components;
	NSArray* _mediaBundles;
	IGGraphQLRequest* _request;
	NSString* _dataSourceFileName;
	NSArray* _mediaIDs;

}

@property (assign,nonatomic,__weak) id<IGInsightsDataProviderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSArray * tabs;                                                    //@synthesize tabs=_tabs - In the implementation block
@property (nonatomic,copy) NSArray * subtabs;                                                 //@synthesize subtabs=_subtabs - In the implementation block
@property (nonatomic,copy) NSArray * dropDownCells;                                           //@synthesize dropDownCells=_dropDownCells - In the implementation block
@property (nonatomic,copy) NSArray * mediaOrderSelectorTabs;                                  //@synthesize mediaOrderSelectorTabs=_mediaOrderSelectorTabs - In the implementation block
@property (nonatomic,copy) NSArray * filterMediaTypeUnits;                                    //@synthesize filterMediaTypeUnits=_filterMediaTypeUnits - In the implementation block
@property (nonatomic,copy) NSString * filterSummaryTitle;                                     //@synthesize filterSummaryTitle=_filterSummaryTitle - In the implementation block
@property (nonatomic,copy) NSArray * components;                                              //@synthesize components=_components - In the implementation block
@property (nonatomic,copy) NSArray * mediaBundles;                                            //@synthesize mediaBundles=_mediaBundles - In the implementation block
@property (nonatomic,retain) IGGraphQLRequest * request;                                      //@synthesize request=_request - In the implementation block
@property (nonatomic,copy) NSString * dataSourceFileName;                                     //@synthesize dataSourceFileName=_dataSourceFileName - In the implementation block
@property (nonatomic,copy) NSArray * mediaIDs;                                                //@synthesize mediaIDs=_mediaIDs - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)feedNetworkSource:(id)arg1 didFinishLoadingObjects:(id)arg2 forFetchAction:(int)arg3 ;
-(void)feedNetworkSource:(id)arg1 didFailToLoadForFetchAction:(int)arg2 ;
-(NSArray *)mediaBundles;
-(NSArray *)mediaIDs;
-(void)onDataReceived:(id)arg1 ;
-(id)getMediaBundles;
-(void)queryMediaBundleWithMediaIDs:(id)arg1 ;
-(void)setMediaBundles:(NSArray *)arg1 ;
-(void)setMediaIDs:(NSArray *)arg1 ;
-(void)setFilterMediaTypeUnits:(NSArray *)arg1 ;
-(void)setFilterSummaryTitle:(NSString *)arg1 ;
-(id)getFilterMediaTypeUnits;
-(NSString *)filterSummaryTitle;
-(NSArray *)filterMediaTypeUnits;
-(void)queryInsightsItemsWithQuery:(id)arg1 ;
-(id)getFilterSummaryTitle;
-(id)getSubtabs;
-(id)getComponents;
-(id)getMediaOrderSelectorTabs;
-(void)handleGraphQLRequestError:(id)arg1 ;
-(void)getAccessTokenAndRestartRequestIfPossible;
-(void)parseAndSaveResponse:(id)arg1 ;
-(void)setTabs:(NSArray *)arg1 ;
-(void)setSubtabs:(NSArray *)arg1 ;
-(void)parseComponentsFromItems:(id)arg1 ;
-(void)queryTabBarItemsAndDefaultTabContent;
-(id)getTabs;
-(id)getDropDownCells;
-(id)loadDummyDataFromFile:(id)arg1 ;
-(NSArray *)subtabs;
-(NSArray *)dropDownCells;
-(void)setDropDownCells:(NSArray *)arg1 ;
-(NSArray *)mediaOrderSelectorTabs;
-(void)setMediaOrderSelectorTabs:(NSArray *)arg1 ;
-(NSString *)dataSourceFileName;
-(void)setDataSourceFileName:(NSString *)arg1 ;
-(void)setDelegate:(id<IGInsightsDataProviderDelegate>)arg1 ;
-(id<IGInsightsDataProviderDelegate>)delegate;
-(IGGraphQLRequest *)request;
-(NSArray *)components;
-(void)setRequest:(IGGraphQLRequest *)arg1 ;
-(void)setComponents:(NSArray *)arg1 ;
-(void)restartRequest;
-(NSArray *)tabs;
@end

