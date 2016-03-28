
#import <Instagram/IGWebDataSource.h>
#import <Instagram/IGAutocompleteDataSource.h>
#import <Instagram/IGFeedStatusViewDataSource.h>

@protocol IGUserListNetworkDataSourceDelegate;
@class NSURL, NSString, NSArray, NSNumber, NSCache;

@interface IGUserListNetworkDataSource : NSObject <IGWebDataSource, IGAutocompleteDataSource, IGFeedStatusViewDataSource> {

	char _loading;
	char _moreUsersAvailable;
	char _excludesCurrentUser;
	NSURL* _fetchURL;
	NSString* _searchString;
	NSArray* _augmentedUsers;
	int _userCellAccessory;
	NSArray* _allUsers;
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

@property (nonatomic,retain) NSURL * fetchURL;                                                     //@synthesize fetchURL=_fetchURL - In the implementation block
@property (nonatomic,copy) NSString * searchString;                                                //@synthesize searchString=_searchString - In the implementation block
@property (nonatomic,retain) NSArray * augmentedUsers;                                             //@synthesize augmentedUsers=_augmentedUsers - In the implementation block
@property (assign,nonatomic) int userCellAccessory;                                                //@synthesize userCellAccessory=_userCellAccessory - In the implementation block
@property (assign,nonatomic) char loading;                                                         //@synthesize loading=_loading - In the implementation block
@property (nonatomic,retain) NSArray * allUsers;                                                   //@synthesize allUsers=_allUsers - In the implementation block
@property (nonatomic,copy) NSString * errorMessage;                                                //@synthesize errorMessage=_errorMessage - In the implementation block
@property (assign,nonatomic) char moreUsersAvailable;                                              //@synthesize moreUsersAvailable=_moreUsersAvailable - In the implementation block
@property (nonatomic,retain) NSNumber * totalUsersCount;                                           //@synthesize totalUsersCount=_totalUsersCount - In the implementation block
@property (assign,nonatomic) char excludesCurrentUser;                                             //@synthesize excludesCurrentUser=_excludesCurrentUser - In the implementation block
@property (nonatomic,copy) NSString * rankToken;                                                   //@synthesize rankToken=_rankToken - In the implementation block
@property (nonatomic,copy) id sortingBlock;                                                        //@synthesize sortingBlock=_sortingBlock - In the implementation block
@property (assign,nonatomic,__weak) id<IGUserListNetworkDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * maxID;                                                       //@synthesize maxID=_maxID - In the implementation block
@property (assign,nonatomic) int status;                                                           //@synthesize status=_status - In the implementation block
@property (nonatomic,retain) NSCache * searchCache;                                                //@synthesize searchCache=_searchCache - In the implementation block
@property (nonatomic,retain) NSArray * allUsersCache;                                              //@synthesize allUsersCache=_allUsersCache - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setFetchURL:(NSURL *)arg1 ;
-(void)setUserCellAccessory:(int)arg1 ;
-(id)allResults;
-(id)resultForRow:(int)arg1 ;
-(NSString *)rankToken;
-(void)setRankToken:(NSString *)arg1 ;
-(NSArray *)allUsers;
-(void)setExcludesCurrentUser:(char)arg1 ;
-(void)setAugmentedUsers:(NSArray *)arg1 ;
-(NSCache *)searchCache;
-(void)setSearchCache:(NSCache *)arg1 ;
-(void)fetchMoreData;
-(char)loadedOnce;
-(char)failedWithAuthorizationError;
-(id)emptyMessage;
-(NSURL *)fetchURL;
-(void)setSortingBlock:(id)arg1 ;
-(char)excludesCurrentUser;
-(void)setAllUsers:(NSArray *)arg1 ;
-(void)performFetch;
-(NSString *)maxID;
-(void)onMoreUsersReceived:(id)arg1 fromRequest:(id)arg2 ;
-(void)onUserFetchFailed:(id)arg1 fromRequest:(id)arg2 ;
-(NSArray *)allUsersCache;
-(void)setAllUsersCache:(NSArray *)arg1 ;
-(void)onUsersReceived:(id)arg1 fromRequest:(id)arg2 ;
-(void)setMoreUsersAvailable:(char)arg1 ;
-(void)setMaxID:(NSString *)arg1 ;
-(id)sortingBlock;
-(char)moreUsersAvailable;
-(unsigned)indexOfUser:(id)arg1 ;
-(void)filterBySearchString:(id)arg1 ;
-(char)hasCachedResultsForQuery:(id)arg1 ;
-(NSArray *)augmentedUsers;
-(int)userCellAccessory;
-(NSNumber *)totalUsersCount;
-(void)setTotalUsersCount:(NSNumber *)arg1 ;
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
-(unsigned)numberOfResults;
-(void)removeUser:(id)arg1 ;
-(void)clearResults;
-(void)setLoading:(char)arg1 ;
-(char)loading;
@end

