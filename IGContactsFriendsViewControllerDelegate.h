

@protocol IGContactsFriendsViewControllerDelegate <NSObject>
@optional
-(void)contactsViewControllerWillDisconnectContacts:(id)arg1;

@required
-(void)contactsViewController:(id)arg1 didDisconnectContactsWithSuccess:(char)arg2;

@end

