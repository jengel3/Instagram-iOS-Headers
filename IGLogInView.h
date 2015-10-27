/*
* This header is generated by classdump-dyld 0.7
* on Monday, October 26, 2015 at 9:24:49 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/21A1C6E8-DEFC-46E0-A287-C60E9807B6FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>
#import <Instagram/IGTextFieldDelegate.h>

@protocol IGLogInViewDelegate, IGLogInViewOnePasswordDelegate;
@class IGTextField, IGPasswordField, IGFacebookButton, UIView, NSString;

@interface IGLogInView : UIView <IGTextFieldDelegate> {

	char _submitting;
	char _fromReg;
	id<IGLogInViewDelegate> _delegate;
	id<IGLogInViewOnePasswordDelegate> _onePasswordDelegate;
	IGTextField* _usernameField;
	IGPasswordField* _passwordField;
	IGFacebookButton* _facebookButton;
	UIView* _facebookButtonSeparator;
	float _fieldHeight;

}

@property (assign,nonatomic,__weak) id<IGLogInViewDelegate> delegate;                                    //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<IGLogInViewOnePasswordDelegate> onePasswordDelegate;              //@synthesize onePasswordDelegate=_onePasswordDelegate - In the implementation block
@property (nonatomic,copy) NSString * username; 
@property (nonatomic,retain) IGTextField * usernameField;                                                //@synthesize usernameField=_usernameField - In the implementation block
@property (nonatomic,retain) IGPasswordField * passwordField;                                            //@synthesize passwordField=_passwordField - In the implementation block
@property (nonatomic,retain) IGFacebookButton * facebookButton;                                          //@synthesize facebookButton=_facebookButton - In the implementation block
@property (assign,nonatomic) char submitting;                                                            //@synthesize submitting=_submitting - In the implementation block
@property (assign,nonatomic) char fromReg;                                                               //@synthesize fromReg=_fromReg - In the implementation block
@property (nonatomic,retain) UIView * facebookButtonSeparator;                                           //@synthesize facebookButtonSeparator=_facebookButtonSeparator - In the implementation block
@property (assign,nonatomic) float fieldHeight;                                                          //@synthesize fieldHeight=_fieldHeight - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)submitting;
-(void)setSubmitting:(char)arg1 ;
-(IGTextField *)usernameField;
-(void)setUsernameField:(IGTextField *)arg1 ;
-(char)clockIsIncorrect;
-(void)showMissingError:(id)arg1 ;
-(IGFacebookButton *)facebookButton;
-(id)initWithFrame:(CGRect)arg1 credentialsFormHeight:(float)arg2 ;
-(void)setFieldHeight:(float)arg1 ;
-(UIView *)facebookButtonSeparator;
-(float)fieldHeight;
-(void)forgotTapped;
-(void)logInButtonTapped;
-(void)didChangeTextFieldCommon:(id)arg1 ;
-(void)setFacebookButton:(IGFacebookButton *)arg1 ;
-(char)fromReg;
-(void)setFromReg:(char)arg1 ;
-(void)setFacebookButtonSeparator:(UIView *)arg1 ;
-(void)configureOnePasswordExtensionIfNeeded;
-(id<IGLogInViewOnePasswordDelegate>)onePasswordDelegate;
-(void)didTapOnePasswordButton:(id)arg1 ;
-(void)setOnePasswordDelegate:(id<IGLogInViewOnePasswordDelegate>)arg1 ;
-(void)textFieldDidChange:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGLogInViewDelegate>)arg1 ;
-(void)dealloc;
-(id<IGLogInViewDelegate>)delegate;
-(char)becomeFirstResponder;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(char)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(char)textFieldShouldReturn:(id)arg1 ;
-(char)validate;
-(IGPasswordField *)passwordField;
-(void)setPasswordField:(IGPasswordField *)arg1 ;
-(void)clearFields;
-(void)setLoading:(char)arg1 ;
-(void)setUsername:(NSString *)arg1 ;
-(NSString *)username;
@end

