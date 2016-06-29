
@class NSString;


@protocol IGSearchResultsTab <NSObject,IGExploreSearchChildViewController,IGListAdapterDataSource>
@property (nonatomic,copy,readonly) NSString * moduleName; 
@property (nonatomic,copy,readonly) NSString * searchType; 
@property (nonatomic,copy,readonly) NSString * viewSubType; 
@property (nonatomic,readonly) char enableNavState; 
@property (nonatomic,readonly) char canShowLocationCell; 
@property (nonatomic,readonly) char shouldShowSectionHeader; 
@property (nonatomic,copy,readonly) NSString * noResultsMessage; 
@property (nonatomic,copy,readonly) NSString * queryType; 
@property (nonatomic,copy,readonly) NSString * tapEventName; 
@property (nonatomic,copy,readonly) NSString * tapCancelEventName; 
@property (assign,nonatomic) char enableFrequentItems; 
@required
-(NSString *)moduleName;
-(char)enableNavState;
-(NSString *)viewSubType;
-(unsigned)numberOfLocalResults;
-(char)canShowLocationCell;
-(id)allSearchResults;
-(void)filterBySearchString:(id)arg1 searchInfo:(id)arg2;
-(char)isLocalItem:(id)arg1;
-(char)noSearchQuery:(id)arg1;
-(id)tableSectionsWithViewController:(id)arg1;
-(id)idResultsList;
-(void)clearFrequent;
-(void)frequentItemsLoaded;
-(id)filteredRecentItems;
-(int)filterResultState:(int)arg1;
-(void)addLoadedNotifications;
-(void)addLocationTracker;
-(char)shouldShowFrequentSection;
-(char)shouldShowSectionHeader;
-(NSString *)queryType;
-(NSString *)tapEventName;
-(NSString *)tapCancelEventName;
-(char)enableFrequentItems;
-(void)setEnableFrequentItems:(char)arg1;
-(NSString *)noResultsMessage;
-(NSString *)searchType;

@end

