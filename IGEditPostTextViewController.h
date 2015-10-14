/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, October 13, 2015 at 10:19:57 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/095E6AAC-0201-41F1-901D-3BA0DA7A9B94/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UITextViewDelegate.h>
#import <Instagram/IGAutocompleteControllerTextInput.h>

@protocol IGEditPostTextViewControllerDelegate;
@class UITextView, UIControl, UILabel, NSString;

@interface IGEditPostTextViewController : UIViewController <UITextViewDelegate, IGAutocompleteControllerTextInput> {

	id<IGEditPostTextViewControllerDelegate> _delegate;
	UITextView* _textView;
	UIControl* _textViewContainer;
	UILabel* _placeholderLabel;
	float _height;

}

@property (assign,nonatomic,__weak) id<IGEditPostTextViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) char isEditingText; 
@property (nonatomic,copy) NSString * text; 
@property (nonatomic,copy) NSString * placeholderText; 
@property (assign,nonatomic) NSRange selectedRange; 
@property (assign,nonatomic) int spellCheckingType; 
@property (nonatomic,retain) UITextView * textView;                                                 //@synthesize textView=_textView - In the implementation block
@property (nonatomic,retain) UIControl * textViewContainer;                                         //@synthesize textViewContainer=_textViewContainer - In the implementation block
@property (nonatomic,retain) UILabel * placeholderLabel;                                            //@synthesize placeholderLabel=_placeholderLabel - In the implementation block
@property (assign,nonatomic) float height;                                                          //@synthesize height=_height - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) int autocapitalizationType; 
@property (assign,nonatomic) int autocorrectionType; 
@property (assign,nonatomic) int keyboardType; 
@property (assign,nonatomic) int keyboardAppearance; 
@property (assign,nonatomic) int returnKeyType; 
@property (assign,nonatomic) char enablesReturnKeyAutomatically; 
@property (assign,getter=isSecureTextEntry,nonatomic) char secureTextEntry; 
+(float)leadingHeight;
-(UIControl *)textViewContainer;
-(void)setTextViewContainer:(UIControl *)arg1 ;
-(float)textContentLayoutHeight;
-(char)isEditingText;
-(float)textHeightForWidth:(float)arg1 ;
-(float)textContentLayoutHeightForWidth:(float)arg1 ;
-(void)updateViewHeight;
-(NSString *)placeholderText;
-(void)setPlaceholderText:(NSString *)arg1 ;
-(void)setDelegate:(id<IGEditPostTextViewControllerDelegate>)arg1 ;
-(id<IGEditPostTextViewControllerDelegate>)delegate;
-(char)resignFirstResponder;
-(char)becomeFirstResponder;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)loadView;
-(void)setTextView:(UITextView *)arg1 ;
-(NSRange)selectedRange;
-(void)beginEditing;
-(id)beginningOfDocument;
-(id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2 ;
-(void)setSelectedRange:(NSRange)arg1 ;
-(void)setSelectedTextRange:(id)arg1 ;
-(void)clearText;
-(id)positionFromPosition:(id)arg1 offset:(int)arg2 ;
-(int)offsetFromPosition:(id)arg1 toPosition:(id)arg2 ;
-(id)closestPositionToPoint:(CGPoint)arg1 ;
-(int)spellCheckingType;
-(void)setSpellCheckingType:(int)arg1 ;
-(void)viewDidLoad;
-(float)height;
-(void)textViewDidBeginEditing:(id)arg1 ;
-(void)textViewDidEndEditing:(id)arg1 ;
-(char)textView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(void)textViewDidChange:(id)arg1 ;
-(void)textViewDidChangeSelection:(id)arg1 ;
-(CGRect)caretRect;
-(id)accessibilityValue;
-(UITextView *)textView;
-(void)setHeight:(float)arg1 ;
-(void)setPlaceholderLabel:(UILabel *)arg1 ;
-(UILabel *)placeholderLabel;
-(void)updatePlaceholderVisibility;
@end

