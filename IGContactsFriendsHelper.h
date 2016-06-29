
#import <Instagram/IGContactsHelperDelegate.h>
#import <UIKit/UIAlertViewDelegate.h>
#import <Instagram/IGFindFriendsHelperProtocol.h>

@protocol IGContactsFriendsHelperDelegate;
@class NSString;

@interface IGContactsFriendsHelper : NSObject <IGContactsHelperDelegate, UIAlertViewDelegate, IGFindFriendsHelperProtocol> {

	id<IGContactsFriendsHelperDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<IGContactsFriendsHelperDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)updateUserTotalWithCount:(int)arg1 ;
-(void)contactsHelperWasDeniedContacts;
-(void)contactsHelperDidFetchContacts:(id)arg1 ;
-(void)authorizeAndFetchUsers;
-(void)authorizeAndFetchUsersWithDisclaimerModal:(char)arg1 ;
-(void)setDelegate:(id<IGContactsFriendsHelperDelegate>)arg1 ;
-(id<IGContactsFriendsHelperDelegate>)delegate;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
@end

