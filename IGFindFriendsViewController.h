
#import <Instagram/IGGroupedTableViewController.h>
#import <Instagram/IGContactsFriendsViewControllerDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class NSMutableArray, NSString;

@interface IGFindFriendsViewController : IGGroupedTableViewController <IGContactsFriendsViewControllerDelegate, UITableViewDataSource, UITableViewDelegate> {

	NSMutableArray* _tableSections;
	char _disconnectingAddressBookContact;

}

@property (assign,getter=isDisconnectingAddressBookContact,nonatomic) char disconnectingAddressBookContact;              //@synthesize disconnectingAddressBookContact=_disconnectingAddressBookContact - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)shouldShowVK;
-(void)contactsViewController:(id)arg1 didDisconnectContactsWithSuccess:(char)arg2 ;
-(void)contactsViewControllerWillDisconnectContacts:(id)arg1 ;
-(void)doFacebookFind;
-(void)onAppBecameActive;
-(char)isDisconnectingAddressBookContact;
-(void)setDisconnectingAddressBookContact:(char)arg1 ;
-(void)doVkontakteFind;
-(void)doContactsFind;
-(void)doSuggestedUsers;
-(void)dealloc;
-(id)init;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2 ;
-(float)tableView:(id)arg1 heightForFooterInSection:(int)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
@end

