

@protocol IGFindFriendsHelperProtocol <NSObject>
@property (assign,nonatomic,__weak) id<IGFindFriendsHelperDelegate> delegate; 
@required
-(void)updateUserTotalWithCount:(int)arg1;
-(void)authorizeAndFetchUsers;
-(void)setDelegate:(id)arg1;
-(id<IGFindFriendsHelperDelegate>)delegate;

@end

