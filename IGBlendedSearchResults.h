
#import <Instagram/IGSearchResultsTab.h>

@class NSString, IGBlendedSearchDataSource, IGUserListLocalDataSource, NSArray;

@interface IGBlendedSearchResults : NSObject <IGSearchResultsTab> {

	char _raindropEnableNavState;
	char _canShowLocationCell;
	char _shouldShowSectionHeader;
	char _enableFrequentItems;
	NSString* _moduleName;
	NSString* _searchType;
	NSString* _viewSubType;
	int _raindropViewType;
	int _raindropSearchType;
	int _raindropViewSubType;
	NSString* _noResultsMessage;
	NSString* _queryType;
	NSString* _tapEventName;
	NSString* _tapCancelEventName;
	IGBlendedSearchDataSource* _dataSource;
	IGUserListLocalDataSource* _localUserDataSource;
	NSArray* _frequentItems;

}

@property (nonatomic,readonly) IGBlendedSearchDataSource * dataSource;                       //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,readonly) IGUserListLocalDataSource * localUserDataSource;              //@synthesize localUserDataSource=_localUserDataSource - In the implementation block
@property (nonatomic,retain) NSArray * frequentItems;                                        //@synthesize frequentItems=_frequentItems - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * moduleName;                                   //@synthesize moduleName=_moduleName - In the implementation block
@property (nonatomic,copy,readonly) NSString * searchType;                                   //@synthesize searchType=_searchType - In the implementation block
@property (nonatomic,copy,readonly) NSString * viewSubType;                                  //@synthesize viewSubType=_viewSubType - In the implementation block
@property (nonatomic,readonly) int raindropViewType;                                         //@synthesize raindropViewType=_raindropViewType - In the implementation block
@property (nonatomic,readonly) char raindropEnableNavState;                                  //@synthesize raindropEnableNavState=_raindropEnableNavState - In the implementation block
@property (nonatomic,readonly) int raindropSearchType;                                       //@synthesize raindropSearchType=_raindropSearchType - In the implementation block
@property (nonatomic,readonly) int raindropViewSubType;                                      //@synthesize raindropViewSubType=_raindropViewSubType - In the implementation block
@property (nonatomic,readonly) char canShowLocationCell;                                     //@synthesize canShowLocationCell=_canShowLocationCell - In the implementation block
@property (nonatomic,readonly) char shouldShowSectionHeader;                                 //@synthesize shouldShowSectionHeader=_shouldShowSectionHeader - In the implementation block
@property (nonatomic,copy,readonly) NSString * noResultsMessage;                             //@synthesize noResultsMessage=_noResultsMessage - In the implementation block
@property (nonatomic,copy,readonly) NSString * queryType;                                    //@synthesize queryType=_queryType - In the implementation block
@property (nonatomic,copy,readonly) NSString * tapEventName;                                 //@synthesize tapEventName=_tapEventName - In the implementation block
@property (nonatomic,copy,readonly) NSString * tapCancelEventName;                           //@synthesize tapCancelEventName=_tapCancelEventName - In the implementation block
@property (assign,nonatomic) char enableFrequentItems;                                       //@synthesize enableFrequentItems=_enableFrequentItems - In the implementation block
-(NSString *)moduleName;
-(NSString *)viewSubType;
-(id)itemsForListAdapter:(id)arg1 ;
-(id)listAdapter:(id)arg1 listItemControllerForItem:(id)arg2 ;
-(id)emptyViewForListAdapter:(id)arg1 ;
-(unsigned)numberOfLocalResults;
-(id)fallbackIcon;
-(IGUserListLocalDataSource *)localUserDataSource;
-(void)_filterLocalResultsBySearchString:(id)arg1 ;
-(NSArray *)frequentItems;
-(void)setFrequentItems:(NSArray *)arg1 ;
-(char)canShowLocationCell;
-(id)allSearchResults;
-(void)filterBySearchString:(id)arg1 surfaceRankInfo:(id)arg2 ;
-(char)isLocalItem:(id)arg1 ;
-(char)noSearchQuery:(id)arg1 ;
-(id)tableSectionsWithViewController:(id)arg1 ;
-(id)idResultsList;
-(void)clearFrequent;
-(void)frequentItemsLoaded;
-(id)filteredRecentItems;
-(int)filterResultState:(int)arg1 ;
-(void)addLoadedNotifications;
-(void)addLocationTracker;
-(char)shouldShowFrequentSection;
-(int)raindropViewType;
-(char)raindropEnableNavState;
-(int)raindropSearchType;
-(int)raindropViewSubType;
-(char)shouldShowSectionHeader;
-(NSString *)queryType;
-(NSString *)tapEventName;
-(NSString *)tapCancelEventName;
-(char)enableFrequentItems;
-(void)setEnableFrequentItems:(char)arg1 ;
-(id)searchBarPlaceholder;
-(void)onSearchTextDidChange:(id)arg1 ;
-(IGBlendedSearchDataSource *)dataSource;
-(id)title;
-(id)accessibilityIdentifier;
-(NSString *)noResultsMessage;
-(id)initWithDataSource:(id)arg1 ;
-(NSString *)searchType;
@end

