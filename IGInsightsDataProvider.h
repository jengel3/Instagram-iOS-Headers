
#import <Instagram/IGFeedNetworkSourceDelegate.h>

@protocol IGInsightsDataProviderDelegate;
@class NSArray, IGGraphQLRequest, NSString;

@interface IGInsightsDataProvider : NSObject <IGFeedNetworkSourceDelegate> {

	id<IGInsightsDataProviderDelegate> _delegate;
	NSArray* _tabs;
	NSArray* _subtabs;
	NSArray* _dropDownCells;
	NSArray* _mediaOrderSelectorTabs;
	NSArray* _components;
	NSArray* _mediaBundle;
	IGGraphQLRequest* _request;
	NSString* _dataSourceFileName;

}

@property (assign,nonatomic,__weak) id<IGInsightsDataProviderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSArray * tabs;                                                    //@synthesize tabs=_tabs - In the implementation block
@property (nonatomic,copy) NSArray * subtabs;                                                 //@synthesize subtabs=_subtabs - In the implementation block
@property (nonatomic,copy) NSArray * dropDownCells;                                           //@synthesize dropDownCells=_dropDownCells - In the implementation block
@property (nonatomic,copy) NSArray * mediaOrderSelectorTabs;                                  //@synthesize mediaOrderSelectorTabs=_mediaOrderSelectorTabs - In the implementation block
@property (nonatomic,copy) NSArray * components;                                              //@synthesize components=_components - In the implementation block
@property (nonatomic,copy) NSArray * mediaBundle;                                             //@synthesize mediaBundle=_mediaBundle - In the implementation block
@property (nonatomic,retain) IGGraphQLRequest * request;                                      //@synthesize request=_request - In the implementation block
@property (nonatomic,copy) NSString * dataSourceFileName;                                     //@synthesize dataSourceFileName=_dataSourceFileName - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)feedNetworkSource:(id)arg1 didFinishLoadingObjects:(id)arg2 forFetchAction:(int)arg3 ;
-(void)feedNetworkSource:(id)arg1 didFailToLoadForFetchAction:(int)arg2 ;
-(id)getMediaBundle;
-(void)queryMediaBundleWithMediaIDs:(id)arg1 ;
-(void)setMediaOrderSelectorTabs:(NSArray *)arg1 ;
-(id)getMediaOrderSelectorTabs;
-(id)getSubtabs;
-(void)queryInsightsItemsWithQueryItems:(id)arg1 ;
-(NSArray *)dropDownCells;
-(id)getDropDownCells;
-(void)setDropDownCells:(NSArray *)arg1 ;
-(id)getComponents;
-(void)queryInsightsItemsWithQueryItemsIGRequest:(id)arg1 readLocal:(char)arg2 localFileName:(id)arg3 ;
-(void)onDataReceived:(id)arg1 readLocal:(char)arg2 localFileName:(id)arg3 ;
-(void)handleGraphQLRequestError:(id)arg1 ;
-(void)getAccessTokenAndRestartRequestIfPossible;
-(id)loadDummyDataFromFile:(id)arg1 ;
-(void)parseAndSaveResponse:(id)arg1 ;
-(void)setTabs:(NSArray *)arg1 ;
-(void)setSubtabs:(NSArray *)arg1 ;
-(void)parseComponentsFromItems:(id)arg1 ;
-(void)setMediaBundle:(NSArray *)arg1 ;
-(void)queryTabBarItemsAndDefaultTabContent;
-(void)querySeeAllPostsViewTabBarItemsAndDefaultTabContent;
-(id)getTabs;
-(NSArray *)subtabs;
-(NSArray *)mediaOrderSelectorTabs;
-(NSArray *)mediaBundle;
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

