/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, October 6, 2015 at 9:46:04 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/E660306A-8A68-4027-9100-A800454451FF/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UITextViewDelegate.h>
#import <Instagram/IGAutocompleteControllerTextInput.h>

@protocol IGKeyboardTextViewViewController;
@class UITextView, IGButton, UIView, UIControl, UILabel, NSString;

@interface IGKeyboardTextViewViewController : UIViewController <UITextViewDelegate, IGAutocompleteControllerTextInput> {

	char _heartIsRed;
	id<IGKeyboardTextViewViewController> _delegate;
	float _textContentLayoutHeight;
	UITextView* _textView;
	IGButton* _sendButton;
	IGButton* _doneButton;
	IGButton* _dotDotDotButton;
	IGButton* _likeButton;
	UIView* _keyboard;
	UIControl* _textViewContainer;
	UILabel* _placeholderLabel;

}

@property (assign,nonatomic,__weak) id<IGKeyboardTextViewViewController> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) char isEditingText; 
@property (assign,getter=isHeartRed,nonatomic) char heartIsRed;                                 //@synthesize heartIsRed=_heartIsRed - In the implementation block
@property (nonatomic,copy) NSString * text; 
@property (assign,nonatomic) NSRange selectedRange; 
@property (assign,nonatomic) float textContentLayoutHeight;                                     //@synthesize textContentLayoutHeight=_textContentLayoutHeight - In the implementation block
@property (nonatomic,retain) UITextView * textView;                                             //@synthesize textView=_textView - In the implementation block
@property (nonatomic,retain) IGButton * sendButton;                                             //@synthesize sendButton=_sendButton - In the implementation block
@property (nonatomic,retain) IGButton * doneButton;                                             //@synthesize doneButton=_doneButton - In the implementation block
@property (nonatomic,retain) IGButton * dotDotDotButton;                                        //@synthesize dotDotDotButton=_dotDotDotButton - In the implementation block
@property (nonatomic,retain) IGButton * likeButton;                                             //@synthesize likeButton=_likeButton - In the implementation block
@property (nonatomic,retain) UIView * keyboard;                                                 //@synthesize keyboard=_keyboard - In the implementation block
@property (nonatomic,retain) UIControl * textViewContainer;                                     //@synthesize textViewContainer=_textViewContainer - In the implementation block
@property (nonatomic,retain) UILabel * placeholderLabel;                                        //@synthesize placeholderLabel=_placeholderLabel - In the implementation block
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
+(float)defaultHeight;
+(float)maxHeight;
-(UIControl *)textViewContainer;
-(IGButton *)likeButton;
-(void)sendAction:(id)arg1 ;
-(void)likeAction:(id)arg1 ;
-(float)textContentLayoutHeight;
-(char)isEditingText;
-(void)setLikeButton:(IGButton *)arg1 ;
-(void)setTextViewContainer:(UIControl *)arg1 ;
-(void)setHeartIsRed:(char)arg1 ;
-(IGButton *)dotDotDotButton;
-(char)isHeartRed;
-(void)otherAction:(id)arg1 ;
-(void)doneAction:(id)arg1 ;
-(void)setTextContentLayoutHeight:(float)arg1 ;
-(void)setDotDotDotButton:(IGButton *)arg1 ;
-(int)lineCount;
-(void)dealloc;
-(void)setDelegate:(id<IGKeyboardTextViewViewController>)arg1 ;
-(id<IGKeyboardTextViewViewController>)delegate;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)viewDidLayoutSubviews;
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
-(void)viewDidLoad;
-(void)textViewDidBeginEditing:(id)arg1 ;
-(void)textViewDidEndEditing:(id)arg1 ;
-(char)textView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(void)textViewDidChange:(id)arg1 ;
-(UIView *)keyboard;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)accessibilityValue;
-(float)textHeight;
-(UITextView *)textView;
-(void)setKeyboard:(UIView *)arg1 ;
-(void)setPlaceholderLabel:(UILabel *)arg1 ;
-(UILabel *)placeholderLabel;
-(IGButton *)sendButton;
-(void)setSendButton:(IGButton *)arg1 ;
-(void)setDoneButton:(IGButton *)arg1 ;
-(IGButton *)doneButton;
@end

