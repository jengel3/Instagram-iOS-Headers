

@protocol IGFindFriendsHelperProtocol <NSObject>
@property (assign,nonatomic,__weak) id<IGFindFriendsHelperDelegate> delegate; 
@required
-(void)authorizeAndFetchUsers;
-(void)updateUserTotalWithCount:(int)arg1;
-(void)setDelegate:(id)arg1;
-(id<IGFindFriendsHelperDelegate>)delegate;

@end

