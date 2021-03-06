
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGGroupedTableViewController.h>
#import <UIKit/UITextFieldDelegate.h>

@protocol IGServiceHelperLoginProtocol;
@class UIBarButtonItem, IGTextField, NSString;

@interface IGServiceLoginTableViewController : IGGroupedTableViewController <UITextFieldDelegate> {

	UIBarButtonItem* _doneButtonItem;
	IGTextField* _usernameField;
	IGTextField* _passwordField;
	NSString* _serviceName;
	int _serviceUsernameType;
	id<IGServiceHelperLoginProtocol> _serviceHelper;
	/*^block*/id _successCompletion;

}

@property (nonatomic,copy) NSString * serviceName;                                               //@synthesize serviceName=_serviceName - In the implementation block
@property (assign,nonatomic) int serviceUsernameType;                                            //@synthesize serviceUsernameType=_serviceUsernameType - In the implementation block
@property (assign,nonatomic,__weak) id<IGServiceHelperLoginProtocol> serviceHelper;              //@synthesize serviceHelper=_serviceHelper - In the implementation block
@property (nonatomic,copy) id successCompletion;                                                 //@synthesize successCompletion=_successCompletion - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsModule;
-(void)onLoginSucceeded:(id)arg1 ;
-(void)onLoginFailed:(id)arg1 ;
-(void)doLogin;
-(id)successCompletion;
-(void)configureLoginCell:(id)arg1 forRow:(int)arg2 ;
-(char)canLogin;
-(int)serviceUsernameType;
-(id<IGServiceHelperLoginProtocol>)serviceHelper;
-(void)setServiceHelper:(id<IGServiceHelperLoginProtocol>)arg1 ;
-(void)setSuccessCompletion:(id)arg1 ;
-(id)initWithStyle:(int)arg1 serviceName:(id)arg2 serviceHelper:(id)arg3 ;
-(void)setServiceUsernameType:(int)arg1 ;
-(NSString *)serviceName;
-(void)dealloc;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(int)arg2 ;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(char)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(char)textFieldShouldReturn:(id)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(char)automaticallyAdjustsScrollViewInsets;
-(void)setServiceName:(NSString *)arg1 ;
@end

