
#import <Instagram/IGFindFriendsHelperProtocol.h>

@protocol IGFindFriendsHelperDelegate;
@class UIViewController, NSString;

@interface IGVKFriendsHelper : NSObject <IGFindFriendsHelperProtocol> {

	UIViewController*<IGFindFriendsHelperDelegate> _delegate;

}

@property (assign,nonatomic,__weak) UIViewController*<IGFindFriendsHelperDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)authorizeAndFetchUsers;
-(void)updateUserTotalWithCount:(int)arg1 ;
-(void)onVkontakteAuthSuccessDismissOAuth:(char)arg1 ;
-(void)onVkontakteAuthSuccess;
-(void)onVkontakteAuthFailure;
-(void)setDelegate:(UIViewController*<IGFindFriendsHelperDelegate>)arg1 ;
-(void)dealloc;
-(UIViewController*<IGFindFriendsHelperDelegate>)delegate;
@end

