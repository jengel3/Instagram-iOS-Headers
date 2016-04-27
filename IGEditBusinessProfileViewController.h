
#import <Instagram/IGGroupedTableViewController.h>
#import <Instagram/IGBusinessConversionAddressViewControllerDelegate.h>
#import <Instagram/IGBusinessConversionEditableProfileCellDelegate.h>
#import <Instagram/IGChangePhoneNumberViewControllerDelegate.h>

@class IGFacebookPageInfo, NSString;

@interface IGEditBusinessProfileViewController : IGGroupedTableViewController <IGBusinessConversionAddressViewControllerDelegate, IGBusinessConversionEditableProfileCellDelegate, IGChangePhoneNumberViewControllerDelegate> {

	char _needsSave;
	IGFacebookPageInfo* _pageInfo;

}

@property (nonatomic,retain) IGFacebookPageInfo * pageInfo;              //@synthesize pageInfo=_pageInfo - In the implementation block
@property (assign,nonatomic) char needsSave;                             //@synthesize needsSave=_needsSave - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)updateRightButton;
-(IGFacebookPageInfo *)pageInfo;
-(void)addressViewController:(id)arg1 didUpdateInfo:(id)arg2 ;
-(void)setPageInfo:(IGFacebookPageInfo *)arg1 ;
-(void)editableProfileCell:(id)arg1 didUpdateValue:(id)arg2 forDataKey:(id)arg3 ;
-(void)editableProfileCellDidBeginEditing:(id)arg1 ;
-(char)editableProfileCellWantsReturn:(id)arg1 withValue:(id)arg2 forKey:(id)arg3 ;
-(void)changePhoneNumberViewController:(id)arg1 doneEditingWithCountryNumber:(id)arg2 phoneNumber:(id)arg3 contactPreference:(unsigned)arg4 ;
-(id)initWithUser:(id)arg1 ;
-(char)needsSave;
-(void)save;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(int)arg2 ;
-(void)viewDidLoad;
-(void)setNeedsSave:(char)arg1 ;
@end

