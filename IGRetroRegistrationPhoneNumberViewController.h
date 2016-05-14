/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 13, 2016 at 9:28:51 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/6C2D6691-0360-45BF-8623-49F0546803FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Instagram/IGCoreTextLinkHandler.h>
#import <Instagram/IGTextFieldDelegate.h>
#import <Instagram/IGCountryCodeViewControllerDelegate.h>

@protocol IGRetroRegistrationPhoneNumberViewControllerDelegate;
@class IGRetroRegistrationPhoneNumberView, UITapGestureRecognizer, NSString;

@interface IGRetroRegistrationPhoneNumberViewController : UIViewController <IGCoreTextLinkHandler, IGTextFieldDelegate, IGCountryCodeViewControllerDelegate> {

	id<IGRetroRegistrationPhoneNumberViewControllerDelegate> _delegate;
	IGRetroRegistrationPhoneNumberView* _phoneNumberView;
	UITapGestureRecognizer* _tapGesture;

}

@property (nonatomic,retain) IGRetroRegistrationPhoneNumberView * phoneNumberView;                                  //@synthesize phoneNumberView=_phoneNumberView - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * tapGesture;                                                   //@synthesize tapGesture=_tapGesture - In the implementation block
@property (assign,nonatomic,__weak) id<IGRetroRegistrationPhoneNumberViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)coreTextView:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3 ;
-(void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3 ;
-(void)backgroundViewTapped;
-(void)nextButtonTapped;
-(UITapGestureRecognizer *)tapGesture;
-(void)setTapGesture:(UITapGestureRecognizer *)arg1 ;
-(void)userDidSelectCountryWithName:(id)arg1 countryNumber:(id)arg2 ;
-(void)configurePhoneNumberView;
-(void)countryCodeButtonTapped;
-(void)emailRegistrationButtonTapped;
-(void)logInButtonTapped;
-(IGRetroRegistrationPhoneNumberView *)phoneNumberView;
-(void)setPhoneNumberView:(IGRetroRegistrationPhoneNumberView *)arg1 ;
-(void)textFieldDidChange:(id)arg1 ;
-(void)setDelegate:(id<IGRetroRegistrationPhoneNumberViewControllerDelegate>)arg1 ;
-(id<IGRetroRegistrationPhoneNumberViewControllerDelegate>)delegate;
-(char)prefersStatusBarHidden;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(char)textFieldShouldReturn:(id)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(char)arg1 ;
-(char)prefersNavigationBarHidden;
-(void)keyboardWillShow:(id)arg1 ;
@end
