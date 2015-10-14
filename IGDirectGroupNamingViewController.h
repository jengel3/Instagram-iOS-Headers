/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, October 13, 2015 at 10:19:55 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/095E6AAC-0201-41F1-901D-3BA0DA7A9B94/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UITextFieldDelegate.h>

@protocol IGDirectGroupNamingViewControllerDelegate;
@class IGTextField, UIButton, NSString;

@interface IGDirectGroupNamingViewController : UIViewController <UITextFieldDelegate> {

	id<IGDirectGroupNamingViewControllerDelegate> _delegate;
	IGTextField* _nameTextField;
	UIButton* _closeButton;

}

@property (assign,nonatomic,__weak) id<IGDirectGroupNamingViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) IGTextField * nameTextField;                                                //@synthesize nameTextField=_nameTextField - In the implementation block
@property (nonatomic,retain) UIButton * closeButton;                                                     //@synthesize closeButton=_closeButton - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)closeButtonTapped;
-(void)setNameTextField:(IGTextField *)arg1 ;
-(IGTextField *)nameTextField;
-(void)dealloc;
-(void)setDelegate:(id<IGDirectGroupNamingViewControllerDelegate>)arg1 ;
-(id<IGDirectGroupNamingViewControllerDelegate>)delegate;
-(void)viewDidLayoutSubviews;
-(void)loadView;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(char)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(char)textFieldShouldReturn:(id)arg1 ;
-(void)viewDidLoad;
-(void)setCloseButton:(UIButton *)arg1 ;
-(UIButton *)closeButton;
@end

