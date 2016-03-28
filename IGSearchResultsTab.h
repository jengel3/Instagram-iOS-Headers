
@class NSString;


@protocol IGSearchResultsTab <NSObject,IGExploreSearchChildViewController,IGListAdapterDataSource>
@property (nonatomic,copy,readonly) NSString * moduleName; 
@property (nonatomic,copy,readonly) NSString * searchType; 
@property (nonatomic,copy,readonly) NSString * viewSubType; 
@property (nonatomic,readonly) int raindropViewType; 
@property (nonatomic,readonly) char raindropEnableNavState; 
@property (nonatomic,readonly) int raindropSearchType; 
@property (nonatomic,readonly) int raindropViewSubType; 
@property (nonatomic,readonly) char canShowLocationCell; 
@property (nonatomic,readonly) char shouldShowSectionHeader; 
@property (nonatomic,copy,readonly) NSString * noResultsMessage; 
@property (nonatomic,copy,readonly) NSString * queryType; 
@property (nonatomic,copy,readonly) NSString * tapEventName; 
@property (nonatomic,copy,readonly) NSString * tapCancelEventName; 
@property (assign,nonatomic) char enableFrequentItems; 
@required
-(unsigned)numberOfLocalResults;
-(NSString *)viewSubType;
-(char)enableFrequentItems;
-(char)shouldShowFrequentSection;
-(void)filterBySearchString:(id)arg1 surfaceRankInfo:(id)arg2;
-(char)isLocalItem:(id)arg1;
-(char)noSearchQuery:(id)arg1;
-(id)allSearchResults;
-(id)tableSectionsWithViewController:(id)arg1;
-(id)idResultsList;
-(void)clearFrequent;
-(void)frequentItemsLoaded;
-(int)filterResultState:(int)arg1;
-(void)addLoadedNotifications;
-(void)addLocationTracker;
-(NSString *)moduleName;
-(int)raindropViewType;
-(char)raindropEnableNavState;
-(int)raindropSearchType;
-(int)raindropViewSubType;
-(char)canShowLocationCell;
-(char)shouldShowSectionHeader;
-(NSString *)queryType;
-(NSString *)tapEventName;
-(NSString *)tapCancelEventName;
-(void)setEnableFrequentItems:(char)arg1;
-(NSString *)noResultsMessage;
-(NSString *)searchType;

@end

