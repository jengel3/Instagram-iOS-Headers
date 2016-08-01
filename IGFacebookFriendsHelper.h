
#import <Instagram/IGFindFriendsHelperProtocol.h>

@protocol IGFindFriendsHelperDelegate;
@class NSString;

@interface IGFacebookFriendsHelper : NSObject <IGFindFriendsHelperProtocol> {

	id<IGFindFriendsHelperDelegate> _delegate;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<IGFindFriendsHelperDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)authorizeAndFetchUsers;
-(void)onFacebookAuthSuccess;
-(void)onFacebookAuthFailure;
-(void)updateUserTotalWithCount:(int)arg1 ;
-(void)setDelegate:(id<IGFindFriendsHelperDelegate>)arg1 ;
-(id<IGFindFriendsHelperDelegate>)delegate;
@end

