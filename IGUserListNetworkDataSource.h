
#import <Instagram/IGAutocompleteAlmostAbstractDataSource.h>
#import <Instagram/IGWebDataSource.h>
#import <Instagram/IGFeedStatusViewDataSource.h>

@protocol IGUserListNetworkDataSourceDelegate;
@class NSString, NSArray, NSNumber, NSCache;

@interface IGUserListNetworkDataSource : IGAutocompleteAlmostAbstractDataSource <IGWebDataSource, IGFeedStatusViewDataSource> {

	char _loading;
	char _moreUsersAvailable;
	char _excludesCurrentUser;
	NSString* _fetchPath;
	NSString* _searchString;
	NSArray* _augmentedUsers;
	int _userCellAccessory;
	NSString* _errorMessage;
	NSNumber* _totalUsersCount;
	NSString* _rankToken;
	/*^block*/id _sortingBlock;
	id<IGUserListNetworkDataSourceDelegate> _delegate;
	NSString* _maxID;
	int _status;
	NSCache* _searchCache;
	NSArray* _allUsersCache;

}

@property (nonatomic,copy) NSString * maxID;                                                       //@synthesize maxID=_maxID - In the implementation block
@property (assign,nonatomic) int status;                                                           //@synthesize status=_status - In the implementation block
@property (nonatomic,retain) NSCache * searchCache;                                                //@synthesize searchCache=_searchCache - In the implementation block
@property (nonatomic,retain) NSNumber * totalUsersCount;                                           //@synthesize totalUsersCount=_totalUsersCount - In the implementation block
@property (nonatomic,retain) NSArray * allUsersCache;                                              //@synthesize allUsersCache=_allUsersCache - In the implementation block
@property (nonatomic,retain) NSString * fetchPath;                                                 //@synthesize fetchPath=_fetchPath - In the implementation block
@property (nonatomic,copy) NSString * searchString;                                                //@synthesize searchString=_searchString - In the implementation block
@property (nonatomic,retain) NSArray * augmentedUsers;                                             //@synthesize augmentedUsers=_augmentedUsers - In the implementation block
@property (assign,nonatomic) int userCellAccessory;                                                //@synthesize userCellAccessory=_userCellAccessory - In the implementation block
@property (assign,nonatomic) char loading;                                                         //@synthesize loading=_loading - In the implementation block
@property (nonatomic,copy) NSString * errorMessage;                                                //@synthesize errorMessage=_errorMessage - In the implementation block
@property (assign,nonatomic) char moreUsersAvailable;                                              //@synthesize moreUsersAvailable=_moreUsersAvailable - In the implementation block
@property (assign,nonatomic) char excludesCurrentUser;                                             //@synthesize excludesCurrentUser=_excludesCurrentUser - In the implementation block
@property (nonatomic,copy) NSString * rankToken;                                                   //@synthesize rankToken=_rankToken - In the implementation block
@property (nonatomic,copy) id sortingBlock;                                                        //@synthesize sortingBlock=_sortingBlock - In the implementation block
@property (assign,nonatomic,__weak) id<IGUserListNetworkDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)rankToken;
-(void)setRankToken:(NSString *)arg1 ;
-(void)setUnfilteredResults:(id)arg1 ;
-(void)fetchMoreData;
-(char)loadedOnce;
-(NSString *)fetchPath;
-(char)failedWithAuthorizationError;
-(id)emptyMessage;
-(void)setFetchPath:(NSString *)arg1 ;
-(void)setSearchCache:(NSCache *)arg1 ;
-(char)excludesCurrentUser;
-(void)performFetch;
-(NSString *)maxID;
-(void)onMoreUsersReceived:(id)arg1 fromRequest:(id)arg2 ;
-(void)onUserFetchFailed:(id)arg1 fromRequest:(id)arg2 ;
-(NSArray *)allUsersCache;
-(void)setAllUsersCache:(NSArray *)arg1 ;
-(void)onUsersReceived:(id)arg1 fromRequest:(id)arg2 ;
-(NSCache *)searchCache;
-(void)setMoreUsersAvailable:(char)arg1 ;
-(void)setMaxID:(NSString *)arg1 ;
-(id)sortingBlock;
-(char)moreUsersAvailable;
-(unsigned)indexOfUser:(id)arg1 ;
-(void)filterBySearchString:(id)arg1 ;
-(char)hasCachedResultsForQuery:(id)arg1 ;
-(NSArray *)augmentedUsers;
-(void)setAugmentedUsers:(NSArray *)arg1 ;
-(int)userCellAccessory;
-(void)setUserCellAccessory:(int)arg1 ;
-(NSNumber *)totalUsersCount;
-(void)setTotalUsersCount:(NSNumber *)arg1 ;
-(void)setExcludesCurrentUser:(char)arg1 ;
-(void)setSortingBlock:(id)arg1 ;
-(char)isSearching;
-(unsigned)itemCount;
-(void)fetchData;
-(void)setDelegate:(id<IGUserListNetworkDataSourceDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<IGUserListNetworkDataSourceDelegate>)delegate;
-(NSString *)searchString;
-(void)setSearchString:(NSString *)arg1 ;
-(int)status;
-(void)setStatus:(int)arg1 ;
-(char)moreAvailable;
-(void)performSearch;
-(void)setErrorMessage:(NSString *)arg1 ;
-(NSString *)errorMessage;
-(void)removeUser:(id)arg1 ;
-(void)clearResults;
-(void)setLoading:(char)arg1 ;
-(char)loading;
@end

