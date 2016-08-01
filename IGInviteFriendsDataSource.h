
#import <Instagram/IGFeedStatusViewDataSource.h>

@protocol IGInviteFriendsDataSourceDelegate;
@class NSArray, NSString;

@interface IGInviteFriendsDataSource : NSObject <IGFeedStatusViewDataSource> {

	char _isLoading;
	char _hasMoreFriends;
	char _moreAvailable;
	char _loadedOnce;
	NSArray* _friendsList;
	id<IGInviteFriendsDataSourceDelegate> _delegate;
	int _offset;
	int _status;
	NSString* _errorMessage;

}

@property (nonatomic,retain) NSArray * friendsList;                                              //@synthesize friendsList=_friendsList - In the implementation block
@property (assign,nonatomic) int offset;                                                         //@synthesize offset=_offset - In the implementation block
@property (assign,nonatomic) int status;                                                         //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) char isLoading;                                                     //@synthesize isLoading=_isLoading - In the implementation block
@property (assign,nonatomic) char hasMoreFriends;                                                //@synthesize hasMoreFriends=_hasMoreFriends - In the implementation block
@property (assign,nonatomic) char moreAvailable;                                                 //@synthesize moreAvailable=_moreAvailable - In the implementation block
@property (assign,nonatomic) char loadedOnce;                                                    //@synthesize loadedOnce=_loadedOnce - In the implementation block
@property (nonatomic,copy) NSString * errorMessage;                                              //@synthesize errorMessage=_errorMessage - In the implementation block
@property (assign,nonatomic,__weak) id<IGInviteFriendsDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)loadedOnce;
-(char)failedWithAuthorizationError;
-(void)setLoadedOnce:(char)arg1 ;
-(id)emptyMessage;
-(void)fbAuthAndFetchFriendsList;
-(id)createRequestBuilder;
-(void)setHasMoreFriends:(char)arg1 ;
-(void)fetchFriendsList;
-(void)fetchFriendsCount;
-(NSArray *)friendsList;
-(void)setFriendsList:(NSArray *)arg1 ;
-(char)hasMoreFriends;
-(unsigned)itemCount;
-(void)setDelegate:(id<IGInviteFriendsDataSourceDelegate>)arg1 ;
-(id<IGInviteFriendsDataSourceDelegate>)delegate;
-(void)setOffset:(int)arg1 ;
-(int)offset;
-(char)isLoading;
-(int)status;
-(void)setStatus:(int)arg1 ;
-(void)setMoreAvailable:(char)arg1 ;
-(char)moreAvailable;
-(void)setErrorMessage:(NSString *)arg1 ;
-(NSString *)errorMessage;
-(void)setIsLoading:(char)arg1 ;
@end

