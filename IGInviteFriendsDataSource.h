

@protocol IGInviteFriendsDataSourceDelegate;
@class NSArray;

@interface IGInviteFriendsDataSource : NSObject {

	char _isLoading;
	char _hasMoreFriends;
	NSArray* _friendsList;
	id<IGInviteFriendsDataSourceDelegate> _delegate;
	int _offset;

}

@property (nonatomic,retain) NSArray * friendsList;                                              //@synthesize friendsList=_friendsList - In the implementation block
@property (assign,nonatomic) int offset;                                                         //@synthesize offset=_offset - In the implementation block
@property (assign,nonatomic) char isLoading;                                                     //@synthesize isLoading=_isLoading - In the implementation block
@property (assign,nonatomic) char hasMoreFriends;                                                //@synthesize hasMoreFriends=_hasMoreFriends - In the implementation block
@property (assign,nonatomic,__weak) id<IGInviteFriendsDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)fetchFriendsList;
-(char)hasMoreFriends;
-(void)fbAuthAndFetchFriendsList;
-(void)setHasMoreFriends:(char)arg1 ;
-(NSArray *)friendsList;
-(void)setFriendsList:(NSArray *)arg1 ;
-(void)setDelegate:(id<IGInviteFriendsDataSourceDelegate>)arg1 ;
-(id<IGInviteFriendsDataSourceDelegate>)delegate;
-(void)setOffset:(int)arg1 ;
-(int)offset;
-(char)isLoading;
-(void)setIsLoading:(char)arg1 ;
@end

