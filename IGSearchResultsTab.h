
@class NSString, IGSearchResultsEnableLocationCell;


@protocol IGSearchResultsTab <NSObject,IGExploreSearchChildViewController>
@property (assign,nonatomic) int raindropViewType; 
@property (assign,nonatomic) char raindropEnableNavState; 
@property (assign,nonatomic) int raindropSearchType; 
@property (assign,nonatomic) int raindropViewSubType; 
@property (assign,nonatomic) char canShowLocationCell; 
@property (assign,nonatomic) char shouldShowFrequentSection; 
@property (assign,nonatomic) char shouldShowSectionHeader; 
@property (nonatomic,retain) NSString * noResultsMessage; 
@property (nonatomic,retain) NSString * queryType; 
@property (nonatomic,retain) NSString * tapEventName; 
@property (nonatomic,retain) NSString * tapCancelEventName; 
@property (nonatomic,retain) IGSearchResultsEnableLocationCell * locationCell; 
@property (assign,nonatomic) char enableFrequentItems; 
@optional
-(int)filterResultState:(int)arg1;
-(void)addLoadedNotifications;
-(void)addLocationTracker;
-(void)clearFrequent;

@required
-(unsigned)numberOfLocalResults;
-(char)enableFrequentItems;
-(char)shouldShowFrequentSection;
-(void)filterBySearchString:(id)arg1 surfaceRankInfo:(id)arg2;
-(char)isLocalItem:(id)arg1;
-(char)noSearchQuery:(id)arg1;
-(id)allSearchResults;
-(id)tableSectionsWithViewController:(id)arg1;
-(id)idResultsList;
-(int)raindropViewType;
-(void)setRaindropViewType:(int)arg1;
-(char)raindropEnableNavState;
-(void)setRaindropEnableNavState:(char)arg1;
-(int)raindropSearchType;
-(void)setRaindropSearchType:(int)arg1;
-(int)raindropViewSubType;
-(void)setRaindropViewSubType:(int)arg1;
-(char)canShowLocationCell;
-(void)setCanShowLocationCell:(char)arg1;
-(void)setShouldShowFrequentSection:(char)arg1;
-(char)shouldShowSectionHeader;
-(void)setShouldShowSectionHeader:(char)arg1;
-(NSString *)queryType;
-(void)setQueryType:(id)arg1;
-(NSString *)tapEventName;
-(void)setTapEventName:(id)arg1;
-(NSString *)tapCancelEventName;
-(void)setTapCancelEventName:(id)arg1;
-(IGSearchResultsEnableLocationCell *)locationCell;
-(void)setLocationCell:(id)arg1;
-(void)setEnableFrequentItems:(char)arg1;
-(NSString *)noResultsMessage;
-(void)setNoResultsMessage:(id)arg1;

@end

