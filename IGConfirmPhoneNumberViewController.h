/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, October 13, 2015 at 10:20:04 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/095E6AAC-0201-41F1-901D-3BA0DA7A9B94/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGGroupedTableViewController.h>
#import <Instagram/IGSMSConfirmationControllerDelegate.h>
#import <Instagram/IGTextFieldDelegate.h>

@protocol IGConfirmPhoneNumberViewControllerDelegate;
@class IGSMSConfirmationController, IGTextField, NSString;

@interface IGConfirmPhoneNumberViewController : IGGroupedTableViewController <IGSMSConfirmationControllerDelegate, IGTextFieldDelegate> {

	char _submitting;
	id<IGConfirmPhoneNumberViewControllerDelegate> _delegate;
	IGSMSConfirmationController* _smsConfirmationController;
	IGTextField* _confirmNumberTextField;
	NSString* _phoneNumber;
	NSString* _confirmationCode;

}

@property (assign,nonatomic,__weak) id<IGConfirmPhoneNumberViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) IGSMSConfirmationController * smsConfirmationController;                     //@synthesize smsConfirmationController=_smsConfirmationController - In the implementation block
@property (nonatomic,retain) IGTextField * confirmNumberTextField;                                        //@synthesize confirmNumberTextField=_confirmNumberTextField - In the implementation block
@property (nonatomic,retain) NSString * phoneNumber;                                                      //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (nonatomic,retain) NSString * confirmationCode;                                                 //@synthesize confirmationCode=_confirmationCode - In the implementation block
@property (assign,nonatomic) char submitting;                                                             //@synthesize submitting=_submitting - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setupNavigationItems;
-(IGSMSConfirmationController *)smsConfirmationController;
-(void)callUserWithConfirmationCode;
-(IGTextField *)confirmNumberTextField;
-(char)submitting;
-(NSString *)confirmationCode;
-(void)setSubmitting:(char)arg1 ;
-(void)setConfirmationCode:(NSString *)arg1 ;
-(void)checkConfirmationCode;
-(void)smsConfirmationControllerWantsToCallUserWithConfirmationCode:(id)arg1 ;
-(void)smsConfirmationControllerWantsToResendConfirmationCode:(id)arg1 ;
-(void)smsConfirmationControllerWantsToChangePhoneNumber:(id)arg1 ;
-(float)topBarsHeight;
-(void)setSmsConfirmationController:(IGSMSConfirmationController *)arg1 ;
-(void)setConfirmNumberTextField:(IGTextField *)arg1 ;
-(void)textFieldDidChange:(id)arg1 ;
-(void)setDelegate:(id<IGConfirmPhoneNumberViewControllerDelegate>)arg1 ;
-(float)tableView:(id)arg1 heightForFooterInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(int)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id<IGConfirmPhoneNumberViewControllerDelegate>)delegate;
-(char)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(void)viewWillDisappear:(char)arg1 ;
-(NSString *)phoneNumber;
-(id)initWithPhoneNumber:(id)arg1 ;
-(void)doneButtonTapped;
-(void)setPhoneNumber:(NSString *)arg1 ;
@end

