/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, October 6, 2015 at 9:46:10 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/E660306A-8A68-4027-9100-A800454451FF/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UITextFieldDelegate.h>
#import <UIKit/UITextInputTraits.h>

@protocol IGNavSearchBarDelegate;
@class IGTextField, IGButton, UIButton, UIImageView, UIView, UIImage, NSString, NSAttributedString;

@interface IGNavSearchBar : UIView <UITextFieldDelegate, UITextInputTraits> {

	char _editing;
	char _shouldDisplayPeopleIcon;
	char _hasCalculatedFrames;
	id<IGNavSearchBarDelegate> _delegate;
	IGTextField* _searchTextField;
	IGButton* _cancelButton;
	UIButton* _backgroundButton;
	UIImageView* _editingStateBackgroundView;
	UIView* _searchLabelView;
	UIImage* _searchIcon;
	UIImage* _searchIconOn;
	UIImage* _buttonBackgroundImage;
	UIImage* _buttonBackgroundImageHighlighted;
	UIImage* _backgroundImageSearchActive;
	UIButton* _peopleIconButton;
	double _searchBarAnimationDuration;
	CGRect _backgroundButtonFrameInactive;
	CGRect _backgroundButtonFrameActive;
	CGRect _cancelButtonFrameInactive;
	CGRect _cancelButtonFrameActive;
	CGRect _searchTextFieldFrameInactive;
	CGRect _searchTextFieldFrameActive;
	CGRect _searchLabelViewFrameInactive;
	CGRect _searchLabelViewFrameActive;
	CGRect _editingStateBackgroundViewFrameInactive;
	CGRect _editingStateBackgroundViewFrameActive;

}

@property (assign,nonatomic,__weak) id<IGNavSearchBarDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isEditing,nonatomic) char editing;                               //@synthesize editing=_editing - In the implementation block
@property (nonatomic,retain) NSString * placeholder; 
@property (nonatomic,retain) NSAttributedString * attributedPlaceholder; 
@property (nonatomic,retain) NSString * text; 
@property (assign,nonatomic) double searchBarAnimationDuration;                           //@synthesize searchBarAnimationDuration=_searchBarAnimationDuration - In the implementation block
@property (nonatomic,retain) IGTextField * searchTextField;                               //@synthesize searchTextField=_searchTextField - In the implementation block
@property (nonatomic,retain) IGButton * cancelButton;                                     //@synthesize cancelButton=_cancelButton - In the implementation block
@property (nonatomic,retain) UIButton * backgroundButton;                                 //@synthesize backgroundButton=_backgroundButton - In the implementation block
@property (nonatomic,retain) UIImageView * editingStateBackgroundView;                    //@synthesize editingStateBackgroundView=_editingStateBackgroundView - In the implementation block
@property (nonatomic,retain) UIView * searchLabelView;                                    //@synthesize searchLabelView=_searchLabelView - In the implementation block
@property (nonatomic,retain) UIImage * searchIcon;                                        //@synthesize searchIcon=_searchIcon - In the implementation block
@property (nonatomic,retain) UIImage * searchIconOn;                                      //@synthesize searchIconOn=_searchIconOn - In the implementation block
@property (nonatomic,retain) UIImage * buttonBackgroundImage;                             //@synthesize buttonBackgroundImage=_buttonBackgroundImage - In the implementation block
@property (nonatomic,retain) UIImage * buttonBackgroundImageHighlighted;                  //@synthesize buttonBackgroundImageHighlighted=_buttonBackgroundImageHighlighted - In the implementation block
@property (nonatomic,retain) UIImage * backgroundImageSearchActive;                       //@synthesize backgroundImageSearchActive=_backgroundImageSearchActive - In the implementation block
@property (nonatomic,retain) UIButton * peopleIconButton;                                 //@synthesize peopleIconButton=_peopleIconButton - In the implementation block
@property (assign,nonatomic) char shouldDisplayPeopleIcon;                                //@synthesize shouldDisplayPeopleIcon=_shouldDisplayPeopleIcon - In the implementation block
@property (assign,nonatomic) CGRect backgroundButtonFrameInactive;                        //@synthesize backgroundButtonFrameInactive=_backgroundButtonFrameInactive - In the implementation block
@property (assign,nonatomic) CGRect backgroundButtonFrameActive;                          //@synthesize backgroundButtonFrameActive=_backgroundButtonFrameActive - In the implementation block
@property (assign,nonatomic) CGRect cancelButtonFrameInactive;                            //@synthesize cancelButtonFrameInactive=_cancelButtonFrameInactive - In the implementation block
@property (assign,nonatomic) CGRect cancelButtonFrameActive;                              //@synthesize cancelButtonFrameActive=_cancelButtonFrameActive - In the implementation block
@property (assign,nonatomic) CGRect searchTextFieldFrameInactive;                         //@synthesize searchTextFieldFrameInactive=_searchTextFieldFrameInactive - In the implementation block
@property (assign,nonatomic) CGRect searchTextFieldFrameActive;                           //@synthesize searchTextFieldFrameActive=_searchTextFieldFrameActive - In the implementation block
@property (assign,nonatomic) CGRect searchLabelViewFrameInactive;                         //@synthesize searchLabelViewFrameInactive=_searchLabelViewFrameInactive - In the implementation block
@property (assign,nonatomic) CGRect searchLabelViewFrameActive;                           //@synthesize searchLabelViewFrameActive=_searchLabelViewFrameActive - In the implementation block
@property (assign,nonatomic) CGRect editingStateBackgroundViewFrameInactive;              //@synthesize editingStateBackgroundViewFrameInactive=_editingStateBackgroundViewFrameInactive - In the implementation block
@property (assign,nonatomic) CGRect editingStateBackgroundViewFrameActive;                //@synthesize editingStateBackgroundViewFrameActive=_editingStateBackgroundViewFrameActive - In the implementation block
@property (assign,nonatomic) char hasCalculatedFrames;                                    //@synthesize hasCalculatedFrames=_hasCalculatedFrames - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) int autocapitalizationType; 
@property (assign,nonatomic) int autocorrectionType; 
@property (assign,nonatomic) int spellCheckingType; 
@property (assign,nonatomic) int keyboardType; 
@property (assign,nonatomic) int keyboardAppearance; 
@property (assign,nonatomic) int returnKeyType; 
@property (assign,nonatomic) char enablesReturnKeyAutomatically; 
@property (assign,getter=isSecureTextEntry,nonatomic) char secureTextEntry; 
-(void)setSearchBarAnimationDuration:(double)arg1 ;
-(void)setSearchIcon:(UIImage *)arg1 ;
-(void)setSearchIconOn:(UIImage *)arg1 ;
-(UIButton *)backgroundButton;
-(UIView *)searchLabelView;
-(UIImageView *)editingStateBackgroundView;
-(IGTextField *)searchTextField;
-(void)setShouldDisplayPeopleIcon:(char)arg1 ;
-(UIButton *)peopleIconButton;
-(char)shouldDisplayPeopleIcon;
-(UIImage *)backgroundImageSearchActive;
-(UIImage *)searchIconOn;
-(UIImage *)searchIcon;
-(UIImage *)buttonBackgroundImage;
-(UIImage *)buttonBackgroundImageHighlighted;
-(void)searchBarTapped;
-(void)peopleIconButtonTapped;
-(id)generateBackgroundImageWithFillColor:(id)arg1 ;
-(void)setHasCalculatedFrames:(char)arg1 ;
-(char)hasCalculatedFrames;
-(void)setBackgroundButtonFrameInactive:(CGRect)arg1 ;
-(void)setSearchLabelViewFrameInactive:(CGRect)arg1 ;
-(void)setEditingStateBackgroundViewFrameInactive:(CGRect)arg1 ;
-(void)setCancelButtonFrameInactive:(CGRect)arg1 ;
-(void)setSearchTextFieldFrameInactive:(CGRect)arg1 ;
-(void)calculateAnimationFrames;
-(void)setBackgroundButtonFrameActive:(CGRect)arg1 ;
-(void)setSearchTextFieldFrameActive:(CGRect)arg1 ;
-(void)setEditingStateBackgroundViewFrameActive:(CGRect)arg1 ;
-(void)setCancelButtonFrameActive:(CGRect)arg1 ;
-(void)setSearchLabelViewFrameActive:(CGRect)arg1 ;
-(CGRect)searchLabelViewFrameActive;
-(CGRect)backgroundButtonFrameActive;
-(CGRect)cancelButtonFrameActive;
-(CGRect)searchTextFieldFrameActive;
-(CGRect)editingStateBackgroundViewFrameActive;
-(CGRect)backgroundButtonFrameInactive;
-(CGRect)cancelButtonFrameInactive;
-(double)searchBarAnimationDuration;
-(void)addSpringAnimations:(/*^block*/id)arg1 duration:(double)arg2 complete:(/*^block*/id)arg3 ;
-(CGRect)searchLabelViewFrameInactive;
-(CGRect)searchTextFieldFrameInactive;
-(CGRect)editingStateBackgroundViewFrameInactive;
-(void)setSearchTextField:(IGTextField *)arg1 ;
-(void)setBackgroundButton:(UIButton *)arg1 ;
-(void)setEditingStateBackgroundView:(UIImageView *)arg1 ;
-(void)setSearchLabelView:(UIView *)arg1 ;
-(void)setButtonBackgroundImage:(UIImage *)arg1 ;
-(void)setButtonBackgroundImageHighlighted:(UIImage *)arg1 ;
-(void)setBackgroundImageSearchActive:(UIImage *)arg1 ;
-(void)setPeopleIconButton:(UIButton *)arg1 ;
-(void)textFieldDidChange:(id)arg1 ;
-(void)makeActive:(char)arg1 ;
-(void)makeInactive:(char)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGNavSearchBarDelegate>)arg1 ;
-(void)setNeedsLayout;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id<IGNavSearchBarDelegate>)delegate;
-(char)resignFirstResponder;
-(char)becomeFirstResponder;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(char)canBecomeFirstResponder;
-(char)isFirstResponder;
-(char)isEditing;
-(void)setEditing:(char)arg1 animated:(char)arg2 ;
-(void)setEditing:(char)arg1 ;
-(int)keyboardAppearance;
-(int)autocapitalizationType;
-(void)setAutocapitalizationType:(int)arg1 ;
-(int)autocorrectionType;
-(void)setAutocorrectionType:(int)arg1 ;
-(int)spellCheckingType;
-(void)setSpellCheckingType:(int)arg1 ;
-(int)keyboardType;
-(void)setKeyboardType:(int)arg1 ;
-(void)setKeyboardAppearance:(int)arg1 ;
-(int)returnKeyType;
-(void)setReturnKeyType:(int)arg1 ;
-(char)enablesReturnKeyAutomatically;
-(void)setEnablesReturnKeyAutomatically:(char)arg1 ;
-(void)setPlaceholder:(NSString *)arg1 ;
-(char)textFieldShouldBeginEditing:(id)arg1 ;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(char)textFieldShouldEndEditing:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(char)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(char)textFieldShouldClear:(id)arg1 ;
-(char)textFieldShouldReturn:(id)arg1 ;
-(IGButton *)cancelButton;
-(void)setCancelButton:(IGButton *)arg1 ;
-(char)canResignFirstResponder;
-(NSString *)placeholder;
-(void)setAttributedPlaceholder:(NSAttributedString *)arg1 ;
-(NSAttributedString *)attributedPlaceholder;
-(void)cancelButtonTapped;
@end

